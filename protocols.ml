open Core.Std;;
(* part 1 type definition *)
type label = string;;
type roleName = string;;
type identifier = string;;

(*type nonce = string;;*)

type identifier_list=[
  | `Identifier of identifier
  | `Identifier_list of identifier list
];;

type roleName_list=[
  | `RoleName of roleName
  | `roleName_list of roleName_list list
];;
type message = [
  | `Null
  | `Var of identifier
  | `Str of roleName
  | `Concat of message list
  | `Aenc of message*message   (* Asymmetric encryption *)
  | `Senc of message*message   (* Symmetric encryption *)
  | `Hash of message
  | `Pk of roleName
  | `Sk of roleName
  | `K of roleName*roleName
];;

type action = [
  | `Act1 of label * roleName * roleName * identifier * message (* `Act1(seq, r1, r2, n, m) *)
  | `Act2 of label * roleName * roleName * message (* No new nonce generated. `Act2(seq, r1, r2,  m) *)
  | `Actlist of action list
  | `Null
];;

type knowledge = [
  | `Knowledge of roleName*message
  | `Knowledge_list of knowledge list
  | `Null
];;

type environment = [
  (*|`Env_rlist of message
  |`Env_nlist of message*)
  |`Env_agent of roleName * int * message
  |`Envlist of environment list
  |`Null
]

type goal = [
  (*|`Secretgoal of identifier * message * roleName_list*)
  |`Secretgoal of identifier * message
  |`Agreegoal of identifier * roleName * roleName * message
  |`Goallist of goal list
  |`Null
];;

type pocolcontext = [
  | `Pocol of knowledge * action * environment * goal
  | `Null
];;

type protocols = [
  | `Protocol of label * pocolcontext
  | `Null
];;

type sign = 
  | Plus
  | Minus
;;

type act = sign * message ;;

(* part 2 functions definition *)
let compileAct1 (seq,r1,r2,n,m) roleName =
  if roleName = r1 then Some (Plus,m)
  else if roleName = r2 then Some (Minus,m)
  else None
;;

let compileAct2 (seq,r1,r2,m) roleName =
  if roleName = r1 then Some (Plus,m)
  else if roleName = r2 then Some (Minus,m)
  else None
;;

(* Get roles from actlist *)
let rec listwithout l e =  (* If e is in list l? *)
  match l with
  | [] -> true
  | hd::tl -> if hd = e then false else listwithout tl e
;; 
(* Transpose function *)
let rec tail xlist =
  match xlist with 
  | hd::tl -> tl
  | e::[] -> []
  | []    -> failwith "no element"
;;

let head xlist =
  match xlist with
  | x::tl -> x
  | [] -> failwith "no element"
;;

let rec transpose xlist = 
  match xlist with
  | []             -> []
  | []   :: xss    -> transpose xss
  | (x::xs) :: xss ->
    (x :: List.map ~f:head xss) :: transpose (xs :: List.map ~f:tail xss)
;;

let del_duplicate org_list =
  match org_list with
  | [] -> []
  | l -> let len = List.length l in
         let non_duplicate = ref [] in
         for i = 0 to len do
           match List.nth l i with
           | None -> ()
           | Some x -> if listwithout !non_duplicate x then non_duplicate := !non_duplicate @ [x]
         done;
         !non_duplicate
;;

(* get roles from knowledge list *)
let rec getRolesFromKnws knws rl =
  match knws with
  | `Null -> rl
  | `Knowledge (r,m) -> if listwithout rl r then r :: rl else rl
  | `Knowledge_list ks -> getroles ks rl
and getroles ks rl =
  List.concat (List.map ~f:(fun k -> getRolesFromKnws k rl ) ks)
;;

let rec getEnvRoles env rl = 
  match env with
  |`Null -> rl
  |`Env_agent (r, num, m) -> getRolesInstance m rl (*if listwithout rl r then r :: rl else rl*)
  |`Envlist envs -> getRole envs rl

and getRole envs rl =
  List.concat (List.map ~f:(fun e -> getEnvRoles e rl ) envs)

and getRolesInstance m rl =
  match m with
  | `Str r -> if listwithout rl r then r :: rl else rl
  | `Concat msgs -> getRolesInstances msgs rl
  | _ -> rl

and getRolesInstances msgs rl =
  List.concat (List.map ~f:(fun m -> getRolesInstance m rl) msgs)
;;

let getRolesFromEnv env rl =
  let rlist = getEnvRoles env rl in
  del_duplicate rlist
;;

let rec getEnvNonces env nl = 
  match env with
  |`Null -> nl
  |`Env_agent (r, num, m) -> getNonceInstance m nl 
  |`Envlist envs -> getNonce envs nl

and getNonce envs nl =
  List.concat (List.map ~f:(fun e -> getEnvNonces e nl) envs)

and getNonceInstance m nl =
  match m with
  | `Var n -> if listwithout nl n then n :: nl else nl
  | `Concat msgs -> getNonceInstances msgs nl
  | _ -> nl

and getNonceInstances msgs nl =
  List.concat (List.map ~f:(fun m -> getNonceInstance m nl) msgs)
;;

let getNonceFromEnv env nl =
  let nlist = getEnvNonces env nl in
  del_duplicate nlist
;;

(* get role's msg from knowledges : [msgofA;msgofB] *)
let rec getMsgOfRoles knws =
  match knws with
  | `Null -> []
  | `Knowledge (r,m) -> [m]
  | `Knowledge_list knws -> List.concat (List.map ~f:(fun k -> getMsgOfRoles k) knws)
;;
(* Get strand list from actlist*)
let rec remove ls e =
  match ls with
  | [] -> []
  | hd::tl -> if hd = e then remove tl e else hd::(remove tl e)
;;

let rec output_msg msg =
  match msg with
  |`Null -> sprintf "null"
  |`Var n -> sprintf "%s" n
  |`Str r -> sprintf "%s" r
  |`Concat msgs -> sprint_msglist msgs
  |`Hash m -> sprintf "hash(%s) " (output_msg m)
  |`Aenc (m1,k1) -> sprintf "aenc{< %s >}%s" (output_msg m1) (output_msg k1)
  |`Senc (m1,k1) -> sprintf "senc{< %s >}%s" (output_msg m1) (output_msg k1)
  |`Pk rolename -> sprintf "pk(%s)" rolename
  |`Sk rolename -> sprintf "sk(%s)" rolename
  |`K (r1,r2) -> sprintf "k(%s,%s)" r1 r2

and sprint_msglist msgs =
  String.concat (List.mapi ~f:(fun i m ->
                let str = if i < ((List.length msgs)-1) then 
                            sprintf "."
                          else sprintf "" 
                in 
                (output_msg m)^str) msgs)
;;


(* To determine whether two msgs are equivalent? *)
let rec isSamePat m1 m2 =
  match (m1,m2) with
  | (`Aenc(m1',k1'),`Aenc(m2',k2')) -> if (isSamePat k1' k2') && (isSamePat m1' m2') then true else false
  | (`Senc(m1',k1'),`Senc(m2',k2')) -> if (isSamePat k1' k2') && (isSamePat m1' m2') then true else false
  | (`Pk r1,`Pk r2) -> true
  | (`Sk r1,`Sk r2) -> true
  | (`Pk r1,`Sk r2) -> true  (* sk(r1),pk(r1) are the same pat, they are stored into the same patSet*)
  | (`Sk r1,`Pk r2) -> true
  | (`K(r11,r12),`K(r21,r22)) -> true
  | (`Var n1,`Var n2) -> true
  | (`Concat msgs1,`Concat msgs2) -> isSameList msgs1 msgs2
  | (`Hash m1',`Hash m2') -> if (isSamePat m1' m2') then true else false
  | (`Str r1,`Str r2) -> true
  | _ -> false

and isSameList msgs1 msgs2 = 
  let len1 = List.length msgs1 in
  let len2 = List.length msgs2 in
  if len1 <> len2 then false 
  else let boolList = List.map2_exn ~f:isSamePat msgs1 msgs2 in
  match List.reduce ~f:(&&) boolList with
  | Some b -> b
  | None -> false 
;;

(* Get pattern Set number in Murphi code *)
let getPatNum pat patList=
  let len = List.length patList in
  let patIndex = ref 0 in
  for i = 0 to len do
    match List.nth patList i with
    | Some x -> if isSamePat pat x then patIndex := i+1
    | None -> ()
  done;
  !patIndex
;;

(* Extracting msg patterns from actions and its sub-patterns *)
(* Extract msg from action *)
(*let extractMsg (seq,r1,r2,n,m) = m ;;*)
let rec getSubMsg msg =
  match msg with
  |`Null -> []
  |`Var nonce -> [`Var nonce]
  |`Str role  -> [`Str role]
  |`Concat msgs -> let submsgs = List.concat (List.map ~f:getSubMsg msgs) in
                    submsgs@msgs@[msg]
  |`Aenc (m,k) -> (getSubMsg m)@[m;k]@[msg]
  |`Senc (m,k) -> (getSubMsg m)@[m;k]@[msg]
  |`Hash m -> (getSubMsg m) @ [msg]
  |`Pk role -> [`Pk role]
  |`Sk role -> [`Sk role]
  |`K (r1,r2) -> [`K (r1,r2)]
;;

(* To get equivalent msg pattern from patlist. *)
let rec existSamePat eqvlPats pat = 
  match eqvlPats with
  | [] -> false
  | hd::tl -> if isSamePat hd pat then true else existSamePat tl pat
;;

let isSubPat y x =
  let ysubs = getSubMsg y in
    let boollist = List.map ~f:(fun ysub -> if isSamePat ysub x then true else false) ysubs in
    match List.reduce ~f:(||) boollist with
    |Some b -> b
    |None -> false
;;
let rec getEqvlMsgPattern patlist =
  let non_eqvlPat = ref [] in 
  let len = List.length patlist in
  for i = 0 to len do
	match List.nth patlist i with
	| None -> ()
 	| Some x -> if existSamePat !non_eqvlPat x then () else non_eqvlPat := (insert x !non_eqvlPat) (* insert x into an appropriate position *)
  done;
  !non_eqvlPat

and insert x patlist =
    match patlist with
    | [] -> x::patlist
    | [y] -> if isSubPat y x then x::patlist else patlist@[x] (* if x is a subpat of y,then x before y,else x after y*)
    | hd :: tl -> if isSubPat hd x then x::patlist else hd::(insert x tl)
;;

let rec getPatList actions =
  match actions with
  | `Null -> []
  | `Act1 (seq,r1,r2,n,m) -> (getSubMsg m) @ [m]
  | `Act2 (seq,r1,r2,m) -> (getSubMsg m) @ [m] 
  | `Actlist arr -> List.concat (List.map ~f:getPatList arr)
;;


(* part 4 print murphi rule *)
let rec getActsList actions rolelist = 
  match actions with
  | `Null -> []
  | `Actlist arr ->  getActs arr rolelist
  | `Act1 (seq,r1,r2,n,m) -> [List.map ~f:(fun rolename -> compileAct1 (seq,r1,r2,n,m) rolename) rolelist]
  | `Act2 (seq,r1,r2,m) -> [List.map ~f:(fun rolename -> compileAct2 (seq,r1,r2,m) rolename) rolelist]

and getActs arr rolelist =
  let roleStrlist = List.map ~f:(fun a -> getRoleStr a rolelist) arr in 
  (* get role strand from each action:[[action1's role acts list];[action1's role acts list]...]*)
  let transRlStrList = transpose roleStrlist in   
  (* Transpose the List from each action strand: [[A's acts list];[B's acts list]...] *)
  List.map ~f:(fun str -> remove str None) transRlStrList  (* remove Empty act *)

and getRoleStr a rolelist = 
  match a with
  | `Null -> []  (* The input action here is absolutly the only act, not actlist nor `Null. So these patterns return [] is ok. *)
  | `Actlist arr -> []
  | `Act1 (seq,r1,r2,n,m) -> List.map ~f:(fun rolename ->
          compileAct1 ((seq,r1,r2,n,m)) rolename) rolelist
  | `Act2 (seq,r1,r2,m) -> List.map ~f:(fun rolename ->
			    compileAct2 ((seq,r1,r2,m)) rolename) rolelist
;; 
(* Transforming the i-th action into murphy rule *)
let rec getAtoms msg =
  match msg with
  |`Null   	-> [`Null]
  |`Var id 	-> [`Var id]
  |`Str s 	-> [`Str s]
  |`Concat msgs -> getEachAtoms msgs
  |`Hash m 	-> getAtoms m
  |`Aenc (m1,m2)-> List.concat (List.map ~f:getAtoms [m1;m2])
  |`Senc (m1,m2)-> List.concat (List.map ~f:getAtoms [m1;m2])
  |`Pk rolename -> [`Pk rolename]
  |`Sk rolename -> [`Sk rolename]
  |`K (r1,r2)	-> [`Str r1;`Str r2]

and getEachAtoms msgs =
  remove (List.concat (List.map ~f:getAtoms msgs)) `Null
;;

let sign act =
  match act with
  | (Plus,_) -> Plus 
  | (Minus,_)-> Minus
;;

let genRuleName rolename i =
  sprintf "rule \" role%s%d \"\n" rolename i
;;

let genSendGuard rolename i =
  sprintf "role%s[i].st = %s%d & ch[%d].empty = true \n==>\n" rolename rolename i i 
  (* sprintf "role%s[i].st = %s%d & ch.empty = true \n==>\n" rolename rolename i  *)
;;

let genRecvGuard rolename i =
  sprintf "role%s[i].st = %s%d & ch[%d].empty = false ---& ch[%d].receiver = role%s[i].%s\n==>\n" rolename rolename i i i rolename rolename 
  (* sprintf "role%s[i].st = %s%d & ch.empty = false \n==>\n" rolename rolename i  *)
;;

let rec existInit msg atom =
  match msg with
  |`Null -> false
  |`Var n -> if isSamePat msg atom then 
                match atom with
                |`Var n1 -> if n = n1 then true else false
                |_ -> false
              else false
  |`Str r -> if isSamePat msg atom then 
              match atom with
              |`Str r1 -> if r = r1 then true else false
              |_ -> false
            else false
  |`Concat msgs -> existInMsgs msgs atom
  |`Aenc (m,k) -> false
  |`Senc (m,k) -> false
  |`Hash (m) -> false
  |`Pk r -> true
  |`Sk r -> false
  |`K (r1,r2) -> false
  |_ -> false

and existInMsgs msgs atom =
  let boolList = List.map ~f:(fun msg -> existInit msg atom ) msgs in
  match List.reduce ~f:(||) boolList with
  |Some b -> b
  |None -> false 
;;

let rec genSendAct rolename i m atoms length msgofRolename patlist =
  let atoms = del_duplicate atoms in
  let commitStr = if i = length then sprintf "   role%s[i].commit := true;\n" rolename else "" in
  let patNum = getPatNum m patlist in
  sprintf "var msg:Message;\n    msgNo:indexType;\nbegin\n" ^
  sprintf "   clear msg;\n   cons%d(%s,msg,msgNo);\n" patNum (sendAtoms2Str rolename i atoms msgofRolename) ^
  sprintf "   ch[%d].empty := false;\n" i ^ (* ch[%d].empty := false i*)
  sprintf "   ch[%d].msg := msg;\n" i ^
  sprintf "   ch[%d].sender := role%s[i].%s;\n" i rolename rolename ^
  sprintf "   ch[%d].receiver := Intruder;\n" i  (* role%s[i].%s: rolename (getPkAg atoms msgofRolename) *)^
  sprintf "   role%s[i].st := %s%d;\n" rolename rolename ((i mod length)+1) ^
  sprintf "   put \"send%d. \";\n   put ch[%d].sender;\n   put \"   \";\n   put ch[%d].receiver;\n   put \"   msg: \";\n   printMsg(ch[%d].msg);\n   put \"\\n\";\n" i i i i ^
  commitStr ^
  sprintf "end;\n"
  (* (i+1) should be (i+1) % length of the strand list *)

and sendAtoms2Str rolename i atoms msgofRolename =
  let s = "role" ^ rolename ^"[i]." in
  let loc = "role"^rolename^"[i].loc" in
  String.concat ~sep:"," (List.map ~f:(fun a ->                         
                        match a with
                        |`Var n -> if (existInit msgofRolename a)  then s ^ n else loc ^ n  (*if i = 1 then s ^ n else loc ^ n *)
                        |`Str r -> if (existInit msgofRolename a)  then s ^ r else loc ^ r
                        |`Pk r -> if (existInit msgofRolename (`Str r))  then s ^ r else loc ^ r
                        |`Sk r -> if (existInit msgofRolename (`Str r))  then s ^ r else loc ^ r
                        |_ -> "null" ) atoms)
and getPkAg atoms msgofRolename =
  let ag = ref "" in
  let atomlen = List.length atoms in
  for i = 0 to (atomlen-1) do
    let ag' = match List.nth atoms i with
            | Some (`Pk r) -> r
            | Some (`Var n) -> ""
            | Some (`Str r) -> ""
            | _ -> ""
    in
    if ag' <> "" then ag := ag' else ()
  done;
  let loc = "loc" in
  if (existInit msgofRolename (`Str (!ag))) then !ag else loc^(!ag)
;;

(** rolename: the owner of the strand
    i: i-th node in strand (-,m)
    m: msg of the i-th node
    atoms: atoms derived from msg
    length: strand length
    msgofRolename: get msg from initial knowledge
    patlist: Patterns derived from the protocol
*)
let rec genRecvAct rolename i m atoms length msgofRolename patlist =
  let commitStr = if i = length then sprintf "   role%s[i].commit := true;\n" rolename else "" in 
  let patNum = getPatNum m patlist in
  sprintf "var flag_pat%d:boolean;\n    msg:Message;\n    msgNo:indexType;\nbegin\n" patNum ^ (* msg := ch[%d] i*)
  sprintf "   clear msg;\n   msg := ch[%d].msg;\n   isPat%d(msg, flag_pat%d);\n" i patNum patNum  ^ (* (recvAtoms2Str atoms) *)
  sprintf "   if(flag_pat%d) then\n" patNum ^
  sprintf "     destruct%d(msg,%s);\n" patNum (recvAtoms2Str atoms rolename) ^
  sprintf "     if(%s)then\n" (atoms2Str atoms rolename msgofRolename) ^
  sprintf "       ch[%d].empty:=true;\n" i ^
  sprintf "       role%s[i].st := %s%d;\n" rolename rolename ((i mod length)+1) ^
  sprintf "     endif;\n"^
  sprintf "   endif;\n" ^
  sprintf "   put \"recv%d. \";\n   put ch[%d].sender;\n   put \"   \";\n   put ch[%d].receiver;\n   put \"   msg: \";\n   printMsg(ch[%d].msg);\n   put \"\\n\";\n" i i i i ^
  commitStr ^
  sprintf "end;\n"

and recvAtoms2Str atoms rolename = 
  let loc = "role"^rolename^"[i].loc" in
  String.concat ~sep:"," (List.map ~f:(fun a ->
  match a with
  |`Var n -> loc ^ n
  |`Str r -> loc ^ r
  |`Pk r -> loc ^ r
  |`Sk r -> loc ^ r
  |_ -> "null") atoms)

and atoms2Str atoms rolename msgofRolename = 
  (* let loc = "role"^rolename^"[i].loc_" in   *)
  let strlist = (List.map ~f:(fun  a ->
  match a with
  |`Var n -> sprintf "matchNonce(role%s[i].loc%s, role%s[i].%s)" rolename n rolename n
  (* if (existInit msgofRolename a) then loc ^ n ^ "=role" ^ rolename ^ "[i]." ^ n else "true"  *)
  (* if j <> 1 then loc ^ n ^ "=role" ^ rolename^ "[i]." ^ n else " true " *)
  |`Str r -> sprintf "matchAgent(role%s[i].loc%s, role%s[i].%s)" rolename r rolename r
  (* if (existInit msgofRolename a) then loc ^ r ^ "=role" ^ rolename ^ "[i]." ^ r else "true" *)
  (*loc ^ r ^ "=role" ^ rolename ^ "[i]." ^ r*)
  |`Pk r -> sprintf "matchAgent(role%s[i].loc%s, role%s[i].%s)" rolename r rolename r
  (* loc ^ r ^ "=role" ^ rolename ^ "[i]." ^ r *)
  |`Sk r -> sprintf "matchAgent(role%s[i].loc%s, role%s[i].%s)" rolename r rolename r
  (* loc ^ r ^ "=role" ^ rolename ^ "[i]." ^ r *)
  |_ -> "null" ) atoms)
  in
  String.concat ~sep:" & " (remove strlist "true")

(* and getSender r m =
  (* match m with
  |`Aenc(m1,k1) ->
  |`Senc(m1,k1) -> *)
  if r = "A" then 
    sprintf "B"
  else  sprintf "locA" *)
;;

let trans act m i rolename length msgOfrolename patlist =
  let atoms = getAtoms m in
  let atoms = del_duplicate atoms in
  match (sign act) with
  | Plus -> begin 
              genRuleName rolename i ^
              genSendGuard rolename i ^
              (genSendAct rolename i m atoms length msgOfrolename patlist)
            end
  | Minus -> begin
              genRuleName rolename i ^
              genRecvGuard rolename i ^
              (genRecvAct rolename i m atoms length msgOfrolename patlist)
            end
;;

let genMsg act = 
  match act with
  | (Plus, m) | (Minus,m) -> m
;;

let print_murphiRule actions knws =  (*printf "murphi code"*)
  let rolelist = getRolesFromKnws knws [] in (* Get role list:[A;B;...] *)
  let actsOfAllRls = getActsList actions rolelist in  (* Get act list: [(sign,msg);(sign,msg);...] *)
  let initKnws = getMsgOfRoles knws in 
  let patlist = getPatList actions in    (* get all patterns from actions *)
  let non_dup = del_duplicate patlist in (* delete duplicate *)
  let non_equivalent = getEqvlMsgPattern non_dup in (* delete equivalent class *)
  String.concat (List.mapi ~f:(fun i r -> (*if i = 0  || i = 1 then*)
                            let acts = match List.nth actsOfAllRls i with (* Get the i-th act list of role_i*)
                                      | None -> []
                                      | Some a -> a
                            in
                            let msgofRole = match List.nth initKnws i with (* Get the i-th msg list of role_i*)
                                            |None -> `Null
                                            |Some msg -> msg
                            in
                            let lenActs = List.length acts in
                            sprintf "ruleset i:role%sNums do\n" r ^
                            String.concat (List.mapi ~f:(fun j act -> match act with
                                                        | None -> sprintf "null"
                                                        | Some a -> trans a (genMsg a) (j+1) r lenActs msgofRole non_equivalent) acts) ^
                            sprintf "endruleset;\n\n" ) rolelist);
;;



let rec list_max xs =
  match xs with
  | [] ->  failwith "list_max called on empty list" (* empty list: fail *)
  | [x] -> x (* single element list: return the element *)
  | x :: remainder -> max x (list_max remainder) (* multiple element list: recursive case *)
;;

let getMaxLenMsg actions = 
  let pats = getPatList actions in
  list_max (List.map ~f:(fun p -> match p with
                                |`Null -> 0
                                |`Concat msgs -> List.length msgs
                                |_ -> 1 ) pats)
;;

(* 2019-12-17 *)
(* 2019-12-18 *)
(* encrypt and decrypt / enconcat and deconcat *)

(* decryption rules for aenc(Na.A, Pk(B)), aenc(Na.Nb,Pk(A)) and aenc(Nb,Pk(B)) *)
let rec adecryptRule (m,k) patList=  
  (*printf "  adecrypt\n";*)
  let i = getPatNum (`Aenc (m,k)) patList in
  let i1 = getPatNum m patList in
  let i2 = getPatNum k patList in
  printDecRule (m,k) i i1 i2

and printDecRule (m,k) i i1 i2 =
   sprintf "  rule \"decrypt %d\"	---pat%d\n" i i^
   sprintf "    i<=pat%dSet.length & Spy_known[pat%dSet.content[i]] &\n    !Spy_known[msgs[pat%dSet.content[i]].aencMsg]\n    ==>\n" i i i^
   sprintf "    var key_inv:Message;\n	msgPat%d:indexType;\n	flag_pat%d:boolean;\n" i1 i1^
   sprintf "    begin\n"^
   sprintf "      key_inv := inverseKey(msgs[msgs[pat%dSet.content[i]].aencKey]);\n" i^
   sprintf "      if (key_inv.k.ag = Intruder) then\n"^
   sprintf "        Spy_known[msgs[pat%dSet.content[i]].aencMsg]:=true;\n        msgPat%d:=msgs[pat%dSet.content[i]].aencMsg;\n" i i1 i^
   sprintf "        isPat%d(msgs[msgPat%d],flag_pat%d);\n        if (flag_pat%d) then\n" i1 i1 i1 i1^
   sprintf "          if (!exist(pat%dSet,msgPat%d)) then\n" i1 i1^
   sprintf "            pat%dSet.length:=pat%dSet.length+1;\n            pat%dSet.content[pat%dSet.length]:=msgPat%d;\n" i1 i1 i1 i1 i1^
   sprintf "          endif;\n"^
   sprintf "        endif;\n"^
   sprintf "      endif;\n"^
   sprintf "    end;\n"
;;

(* encryption rules for aenc(Na.A, Pk(B)), aenc(Na.Nb,Pk(A)) and aenc(Nb,Pk(B))*)
let rec aencryptRule (m,k) patList=
  (*printf "  aencrypt\n"*)
  let i = getPatNum (`Aenc (m,k)) patList in
  let i1 = getPatNum m patList in
  let i2 = getPatNum k patList in
  printEncRule (m,k) i i1 i2

and printEncRule (m,k) i i1 i2 =
  sprintf "    rule \"encrypt %d\"	---pat%d\n" i i^
  sprintf "      i<=pat%dSet.length & Spy_known[pat%dSet.content[i]] &\n      j<=pat%dSet.length & Spy_known[pat%dSet.content[j]] &\n      !Spy_known[construct%dBy%d%d(pat%dSet.content[i],pat%dSet.content[j])]\n      ==>\n" i1 i1 i2 i2 i i1 i2 i1 i2^
  sprintf "      var encMsgNo:indexType;\n"^
  sprintf "      begin\n"^
  sprintf "        if (msgs[pat%dSet.content[j]].k.encType=PK) then\n" i2^ (*ag=intruder.B*)
  sprintf "          encMsgNo := construct%dBy%d%d(pat%dSet.content[i],pat%dSet.content[j]);\n" i i1 i2 i1 i2^
  sprintf "          if (!exist(pat%dSet,encMsgNo)) then\n" i^
  sprintf "            pat%dSet.length := pat%dSet.length+1;\n            pat%dSet.content[pat%dSet.length]:=encMsgNo;\n" i i i i^
  sprintf "          endif;\n"^
  sprintf "          if (!Spy_known[encMsgNo]) then\n"^
  sprintf "            Spy_known[encMsgNo] := true;\n"^
  sprintf "          endif;\n"^
  sprintf "        endif;\n"^
  sprintf "      end;\n"
  (*printf "    end;\n";*)
;;

(* deconcat rules for concat(Na,A) and concat (Na,Nb) *)
let rec deconcatRule msgs patList =
  (*printf "  deconcat rules\n";*)
  let i = getPatNum (`Concat msgs) patList in
  let i1 = match List.nth msgs 0 with
	   | Some m -> getPatNum m patList
	   | None -> 0
  in
  let i2 = match List.nth msgs 1 with
	   | Some m -> getPatNum m patList
	   | None -> 0
  in
  printDeconcatRule msgs i i1 i2

and printDeconcatRule msgs i i1 i2 =
  let str1 = sprintf "  rule \"deconcat %d\"	---pat%d\n" i i^
             sprintf "    i<=pat%dSet.length & Spy_known[pat%dSet.content[i]] &\n    !(Spy_known[msgs[pat%dSet.content[i]].concatPart1] & Spy_known[msgs[pat%dSet.content[i]].concatPart2])\n    ==>\n" i i i i
  in
  let (i1_1,i1_2) = if i1 = i2 then (11,12) else (i1,i2) in 
  str1 ^ sprintf "    var msgPat%d,msgPat%d:indexType;\n        flag_pat%d,flag_pat%d:boolean;\n" i1_1 i1_2 i1_1 i1_2^
  sprintf "    begin\n"^
  sprintf "      if (!Spy_known[msgs[pat%dSet.content[i]].concatPart1]) then\n" i^
  sprintf "        Spy_known[msgs[pat%dSet.content[i]].concatPart1]:=true;\n" i^
  sprintf "        msgPat%d := msgs[pat%dSet.content[i]].concatPart1;\n" i1_1 i^
  sprintf "        isPat%d(msgs[msgPat%d],flag_pat%d);\n" i1 i1_1 i1_1^
  sprintf "        if (flag_pat%d) then\n" i1_1^
  sprintf "          if(!exist(pat%dSet,msgPat%d)) then\n" i1 i1_1^
  sprintf "             pat%dSet.length:=pat%dSet.length+1;\n             pat%dSet.content[pat%dSet.length] := msgPat%d;\n" i1 i1 i1 i1 i1_1^
  sprintf "          endif;\n"^
  sprintf "        endif;\n"^
  sprintf "      endif;\n"^
  sprintf "      if (!Spy_known[msgs[pat%dSet.content[i]].concatPart2]) then\n" i^
  sprintf "        Spy_known[msgs[pat%dSet.content[i]].concatPart2]:=true;\n" i^
  sprintf "        msgPat%d := msgs[pat%dSet.content[i]].concatPart2;\n" i1_2 i^
  sprintf "        isPat%d(msgs[msgPat%d],flag_pat%d);\n" i2 i1_2 i1_2^
  sprintf "        if (flag_pat%d) then\n" i1_2^
  sprintf "          if(!exist(pat%dSet,msgPat%d)) then\n" i2 i1_2^
  sprintf "             pat%dSet.length:=pat%dSet.length+1;\n             pat%dSet.content[pat%dSet.length] := msgPat%d;\n" i2 i2 i2 i2 i1_2 ^
  sprintf "          endif;\n" ^
  sprintf "        endif;\n" ^
  sprintf "      endif;\n" ^
  sprintf "    end;\n"
;;

(* enconcat rules for concat(Na,A) and concat(Na,Nb) *)
let rec enconcatRule msgs patList =
  (*printf "  enconcat rules\n";*)
  let patNumList = ref [] in
  for i = 0 to ((List.length msgs) - 1) do
    let (m, j) = match List.nth msgs i with
                |Some (`Var n) -> (n,getPatNum (`Var n) patList)
                |Some (`Str r) -> (r,getPatNum (`Str r) patList)
                |Some (`Hash m) -> let atoms = getAtoms m in
                                   let str = String.concat ~sep:"," (List.map ~f:(fun a -> 
                                              match a with
                                              |`Var n -> n
                                              |`Str r -> r
                                              |`Pk r -> r
                                              |`Sk r -> r
                                              |`K(r1,r2) -> r1^","^r2) atoms)
                                   in
                                  (str, getPatNum (`Hash m) patList)
                |Some (`Pk r) -> (r, getPatNum (`Pk r) patList)
                |Some (`Sk r) -> (r, getPatNum (`Sk r) patList)
                |Some (`K (r1, r2)) -> let str = sprintf "%s, %s" r1 r2
                                      in
                                      (str, getPatNum (`K (r1, r2)) patList)
                |Some (`Aenc (m1,k1)) -> let atoms = getAtoms (`Aenc(m1,k1)) in
                                        let noDupAtoms = del_duplicate atoms in 
                                        let str = String.concat ~sep:"," (List.map ~f:(fun a -> 
                                                  match a with
                                                  |`Var n -> n
                                                  |`Str r -> r
                                                  |`Pk r -> r
                                                  |`Sk r -> r
                                                  |`K(r1,r2) -> r1^","^r2) noDupAtoms)
                                        in
                                        (str, getPatNum (`Aenc (m1,k1)) patList)
                |Some (`Senc (m1,k1)) -> let atoms = getAtoms (`Aenc(m1,k1)) in
                                         let str = String.concat ~sep:"," (List.map ~f:(fun a ->
                                                   match a with
                                                   |`Var n -> n
                                                   |`Str r -> r
                                                   |`Pk r -> r^"Pk"
                                                   |`Sk r -> r^"Sk"
                                                   |`K(r1,r2) -> r1^","^r2) atoms)
                                          in
                                          (str , getPatNum (`Senc (m1,k1)) patList)
                | _ -> ("null",0)
    in
    patNumList := !patNumList @ [(m,j)]
  done;
  let i = getPatNum (`Concat msgs) patList in
  printEnconcatRule msgs i !patNumList     (*i1 i2*)

and printEnconcatRule msgs i patNumList =
  let str1 = sprintf "    rule \"enconcat %d\"	---pat%d\n" i i ^ 
            (String.concat ~sep:" &\n" (List.mapi ~f:(fun k (m,j) -> 
                                       sprintf "      i%d<=pat%dSet.length & Spy_known[pat%dSet.content[i%d]]" k j j k) patNumList))
  in
  (* let str2 = " &\n      !(" ^ String.concat ~sep:" = " (List.mapi ~f:(fun k (m,j) -> sprintf "pat%dSet.content[i%d]" j k) patNumList) ^") & \n"
  in *) (* delete this guard condition *)
  let str2 = "" in
  let subMsgNo = String.concat (List.map ~f:(fun (m,j) -> sprintf "%d" j) patNumList) (* each j in the list should be unique *)
  in
  let patSetStr = String.concat ~sep:"," (List.mapi ~f:(fun k (m,j) -> sprintf "pat%dSet.content[i%d]" j k) patNumList)
  in
  str1 ^ str2 ^ sprintf " &\n      !Spy_known[construct%dBy%s(%s)]\n      ==>\n" i subMsgNo patSetStr ^ (*pat%dSet.content[i],pat%dSet.content[j]*)
  sprintf "      var concatMsgNo:indexType;\n      begin\n" ^
  sprintf "        concatMsgNo := construct%dBy%s(%s);\n" i subMsgNo patSetStr ^
  sprintf "        Spy_known[concatMsgNo]:=true;\n" ^
  sprintf "        if (!exist(pat%dSet,concatMsgNo)) then\n" i ^
  sprintf "          pat%dSet.length:=pat%dSet.length+1;\n" i i ^
  sprintf "          pat%dSet.content[pat%dSet.length]:=concatMsgNo;\n" i i ^
  sprintf "        endif;\n" ^
  sprintf "      end;\n"
;;

let print_murphiRule_byPats pat i patList =
  match pat with
  |`Aenc (m1,k1) -> sprintf "--- encrypt and decrypt rules of pat: aenc(%s,%s), for intruder\n" (output_msg m1) (output_msg k1)^
		    sprintf "ruleset i:indexType do \n"^
		    adecryptRule (m1,k1) patList^
		    sprintf "endruleset;\n\n" ^
		    sprintf "ruleset i:indexType do \n  ruleset j:indexType do \n"^
		    aencryptRule (m1,k1) patList^
  	    sprintf "  endruleset;\nendruleset;\n\n" 
  |`Concat msgs -> sprintf "--- enconcat and deconcat rules for pat: concat(%s)\n\n" (output_msg (`Concat msgs))^
		   sprintf "ruleset i:indexType do \n" ^
		   (deconcatRule msgs patList) ^
       sprintf "endruleset;\n\n" ^
       String.concat ~sep:"\n  " (List.mapi ~f:(fun i m -> sprintf "ruleset i%d: indexType do" i) msgs) ^ (* ruleset i:indexType do \n  ruleset j:indexType do *)
		   sprintf " \n" ^
       (enconcatRule msgs patList) ^
       String.concat ~sep:"\n" (List.map ~f:(fun m -> sprintf "endruleset;") msgs) ^
		   sprintf "\n\n" 
  |_ -> ""
;;

(* print encryption and decryption rules, enconcat and deconcat rules *)
let print_murphiRules_EncsDecs actions knws = 
  match actions with
  | `Null -> sprintf "null"
  | `Actlist arr -> let patlist = getPatList actions in    (* get all patterns from actions *)
                    let non_dup = del_duplicate patlist in (* delete duplicate *)
                    let non_equivalent = getEqvlMsgPattern non_dup in (* delete equivalent class *) 
                    String.concat (List.mapi ~f:(fun i pat -> print_murphiRule_byPats pat (i+1) non_equivalent ) non_equivalent)
  | _ -> let patlist = getPatList actions in    (* get all patterns from actions *)
		    	                  let non_dup = del_duplicate patlist in (* delete duplicate *)
                            let non_equivalent = getEqvlMsgPattern non_dup in (* delete equivalent class *) 
                            String.concat (List.mapi ~f:(fun i pat -> print_murphiRule_byPats pat (i+1) non_equivalent ) non_equivalent)
;;

(* 2019-12-20 *)
(* rules for intruder to get msgs: intruderGetMsg1,intruderGetMsg2 and intruderGetMsg3;
   rules for intruder to emit msgs: intruderEmitMsg1, intruderEmitMsg2 and intruderEmitMsg3 *)
(* Get msgs from action *)
let rec getMsgs actions =
  match actions with
  | `Null -> []
  | `Act1 (seq,r1,r2,n,m) -> [m] 
  | `Act2 (seq,r1,r2,m) -> [m]
  | `Actlist arr -> List.concat (List.map ~f:getMsgs arr)
;;

let rec print_murphiRule_byMsgs m i patList r =
  let j = getPatNum m patList in
  print_getRules i j ^
  print_emitRules i j r

and print_getRules i j =
  sprintf "\n---rule of intruder to get msg%d \n" i ^
  sprintf "rule \"intruderGetMsg%d\" \n" i ^ (* ch[%d] i*)
  sprintf "  ch[%d].empty = false\n  ==>\n" i ^
  sprintf "  var flag_pat%d:boolean;\n      msgNo:indexType;\n      msg:Message;\n" j^
  sprintf "  begin\n" ^
  sprintf "    msg := ch[%d].msg;\n" i ^ 
  sprintf "    get_msgNo(msg, msgNo);\n"^ 
  sprintf "    isPat%d(msg,flag_pat%d);\n" j j^ 
  sprintf "    if (flag_pat%d) then\n" j^
  sprintf "      if(!exist(pat%dSet,msgNo)) then\n" j^
  sprintf "        pat%dSet.length:=pat%dSet.length+1;\n" j j^
  sprintf "        pat%dSet.content[pat%dSet.length]:=msgNo;\n" j j^
  sprintf "        Spy_known[msgNo] := true;\n"^

  (* sprintf "          put \"%d \";\n          put ch[%d].sender;\n" i i^
  sprintf "          put \"   \";\n          put ch[%d].receiver;\n" i ^
  sprintf "          put \"   msg: \";\n"^
  sprintf "          printMsg(ch[%d].msg);\n" i ^
  sprintf "          put \"\\n\";\n"^ *)

  sprintf "      endif;\n" ^
  sprintf "    endif;\n" ^
  sprintf "    ch[%d].empty := true;\n" i ^
  (*printf "    intruder.st := gotmsg%d;\n" i;*)
  sprintf "  end;\n"

and print_emitRules i j r=
  let str1 = sprintf "\n---rule of intruder to emit msg%d.\n" i^sprintf "ruleset i: msgLen do\n"
  in
  let str2 = sprintf "  ruleset j: role%sNums do\n" r in
  (* let str2 = if i mod 2 = 1 then
               sprintf "  ruleset j: roleBNums do\n"
             else sprintf "  ruleset j: roleANums do\n"
  in *)
  let str3 = sprintf "    rule \"intruderEmitMsg%d\"\n" i^sprintf "      ch[%d].empty=true & i <= pat%dSet.length & Spy_known[pat%dSet.content[i]]\n      ==>\n" i j j^ (* ch[%d] i*)
             sprintf "      begin\n        if (!emit[pat%dSet.content[i]] & msgs[msgs[pat%dSet.content[i]].aencKey].k.ag=role%s[j].%s) then\n" j j r r^ (*intruder.B: r*)
             sprintf "          clear ch[%d];\n" i ^sprintf "          ch[%d].msg:=msgs[pat%dSet.content[i]];\n" i j^
             sprintf "          ch[%d].sender:=Intruder;\n" i
  in
  let str4 = sprintf "          ch[%d].receiver:=role%s[j].%s;\n" i r r in
  str1 ^ str2 ^ str3^ str4 ^ sprintf "          ch[%d].empty:=false;\n" i^ (* ch[%d] i*)
  sprintf "          emit[pat%dSet.content[i]] := true;\n" j^
  (*printf "          intruder.st:=emitted%d;\n" i;*)
  sprintf "          put \"%d. \";\n          put ch[%d].sender;\n" i i^
  sprintf "          put \"   \";\n          put ch[%d].receiver;\n" i ^
  sprintf "          put \"   msg: \";\n"^
  sprintf "          printMsg(ch[%d].msg);\n" i ^
  sprintf "          put \"\\n\";\n"^
  sprintf "        endif;\n"^
  sprintf "      end;\n"^
  sprintf "  endruleset;\n"^
  sprintf "endruleset;\n"
;;

(* get msgs from actions: msgs
   print get rules of each msg;
   print emit rules of each msg. *)
let print_murphiRule_ofIntruder actions knws =
  let rlist = getRolesFromKnws knws [] in
  match actions with
  |`Null -> sprintf "null"
  |`Actlist arr -> let msgs = getMsgs actions in    (* get all msgs from actions *) 
                   let patlist = getPatList actions in    (* get all patterns from actions *)
                   let non_dup = del_duplicate patlist in (* delete duplicate *)
                   let non_equivalent = getEqvlMsgPattern non_dup in
                   String.concat (List.map ~f:(fun r -> let s = String.concat (List.mapi ~f:(fun i m -> print_murphiRule_byMsgs m (i+1) non_equivalent r) msgs) in
                                                    sprintf "%s\n" s)  rlist)                 
  |`Act1 (seq,r1,r2,n,m) -> let msgs = getMsgs actions in    (* get all msgs from actions *)
                           let patlist = getPatList actions in    (* get all patterns from actions *)
                           let non_dup = del_duplicate patlist in (* delete duplicate *)
                           let non_equivalent = getEqvlMsgPattern non_dup in
                           String.concat (List.map ~f:(fun r -> String.concat (List.mapi ~f:(fun i m -> print_murphiRule_byMsgs m (i+1) non_equivalent r) msgs)) rlist)
                           (* String.concat (List.mapi ~f:(fun i m -> print_murphiRule_byMsgs m (i+1) non_equivalent) msgs) *)
  |`Act2 (seq,r1,r2,m) -> let msgs = getMsgs actions in    (* get all msgs from actions *)
                           let patlist = getPatList actions in    (* get all patterns from actions *)
                           let non_dup = del_duplicate patlist in (* delete duplicate *)
                           let non_equivalent = getEqvlMsgPattern non_dup in
                           String.concat (List.map ~f:(fun r -> String.concat (List.mapi ~f:(fun i m -> print_murphiRule_byMsgs m (i+1) non_equivalent r) msgs)) rlist)
                           (* String.concat (List.mapi ~f:(fun i m -> print_murphiRule_byMsgs m (i+1) non_equivalent) msgs) *)
;;

(*synthesis of a messages of pati.*)
let atoms2Parms atoms =
  String.concat ~sep:"; "  (List.map ~f:(fun a -> match a with
  |`Var n -> n ^ ":NonceType"
  |`Str s -> s ^ ":AgentType"
  |`Pk role -> role ^ "Pk :AgentType"
  |`Sk role -> role ^ "Sk :AgentType"
  |_ -> "" ) atoms )
;;

let atoms2Parms1 atoms =
  String.concat ~sep:"; "  (List.map ~f:(fun a -> match a with
  |`Var n ->"Var "^ n ^ ":NonceType"
  |`Str s ->"Var "^ s ^ ":AgentType"
  |`Pk role ->"Var "^ role ^ "Pk:AgentType"
  |`Sk role ->"Var "^ role ^ "Sk:AgentType"
  |_ -> "" ) atoms )
;;

let atom2Str atoms =
  String.concat ~sep:", "  (List.map ~f:(fun a -> match a with
  |`Var n -> n 
  |`Str s -> s 
  |`Pk role -> role ^ "Pk"
  |`Sk role -> role ^ "Sk"
  |_ -> "" ) atoms )
;;


let genSynthCode m i patList =
  let atoms = getAtoms m in
  let noDupAtoms = del_duplicate atoms in 
  let str1 = sprintf "---pat%d: %s \nprocedure lookAddPat%d" i (output_msg m) i ^ 
             sprintf "(%s; Var msg:Message; Var num : indexType);\n" (atoms2Parms noDupAtoms)
  in
  match m with
  |`Aenc(m1,k1) -> begin
                  let i1= getPatNum m1 patList in
                  let i2= getPatNum k1 patList in
                  let keyAg=match k1 with
                            |`Pk role -> role^"Pk"
                            |`Sk role -> role^"Sk"
                            |_ -> "null"
                  in
                  let m1Atoms = getAtoms m1 in  
                  str1 ^                                          
                  sprintf "  Var msg1, msg2: Message;\n      index,i1,i2:indexType;\n  begin\n"^
                  sprintf "   index:=0;\n"^
                  sprintf "   lookAddPat%d(%s,msg1,i1);\n" i1 (atom2Str m1Atoms)^
                  sprintf "   lookAddPat%d(%s,msg2,i2);\n" i2 keyAg^               
                  sprintf "   for i : msgLen do\n"^
                  sprintf "     if (msgs[i].msgType = aenc) then\n"^
                  sprintf "       if (msgs[i].aencMsg = i1 & msgs[i].aencKey = i2) then\n"^
                  sprintf "          index:=i;\n"^
                  sprintf "       endif;\n"^
                  sprintf "     endif;\n"^
                  sprintf "   endfor;\n"^
                  sprintf "   if(index=0) then\n"^
                  sprintf "     msg_end := msg_end + 1 ;\n     index := msg_end;\n     msgs[index].msgType := aenc;\n     msgs[index].aencMsg:=i1; \n     msgs[index].aencKey:=i2; \n    msgs[index].length := 1;"^
                  sprintf "   endif;\n"^
                  sprintf "   num:=index;\n   msg:=msgs[index];\n  end;\n"; 
                  end;
  |`Concat msgs -> begin  (* concat(Na,Nb), concat(Na,A), concat(Server, Na), concat(Server, Na, aenc{concat(Server, Na)}sk(Server))*)
                  let patNumList = ref [] in
                  for i = 0 to ((List.length msgs) - 1) do
                      let (m, j) = match List.nth msgs i with
                                  |Some (`Var n) -> (n,getPatNum (`Var n) patList)
                                  |Some (`Str r) -> (r,getPatNum (`Str r) patList)
                                  |Some (`Hash m) -> let atoms = getAtoms m in
                                                     let str = String.concat ~sep:"," (List.map ~f:(fun a -> match a with
                                                                                      |`Var n -> n
                                                                                      |`Str r -> r
                                                                                      |`Pk r -> r
                                                                                      |`Sk r -> r
                                                                                      |`K(r1,r2) -> r1^","^r2) atoms)
                                                     in
                                                     (str, getPatNum (`Hash m) patList)
                                  |Some (`Pk r) -> (r, getPatNum (`Pk r) patList)
                                  |Some (`Sk r) -> (r, getPatNum (`Sk r) patList)
                                  |Some (`K (r1, r2)) -> let str = sprintf "%s, %s" r1 r2
                                                         in
                                                         (str, getPatNum (`K (r1, r2)) patList)
                                  |Some (`Aenc (m1,k1)) -> let atoms = getAtoms (`Aenc(m1,k1)) in
                                                           let noDupAtoms = del_duplicate atoms in 
                                                           let str = String.concat ~sep:"," (List.map ~f:(fun a -> match a with
                                                                                        |`Var n -> n
                                                                                        |`Str r -> r
                                                                                        |`Pk r -> r
                                                                                        |`Sk r -> r
                                                                                        |`K(r1,r2) -> r1^","^r2) noDupAtoms)
                                                            in
                                                           (str, getPatNum (`Aenc (m1,k1)) patList)
                                  |Some (`Senc (m1,k1)) -> let atoms = getAtoms (`Aenc(m1,k1)) in
                                                           let str = String.concat ~sep:"," (List.map ~f:(fun a -> match a with
                                                                                        |`Var n -> n
                                                                                        |`Str r -> r
                                                                                        |`Pk r -> r^"Pk"
                                                                                        |`Sk r -> r^"Sk"
                                                                                        |`K(r1,r2) -> r1^","^r2) atoms)
                                                           in
                                                        (str , getPatNum (`Senc (m1,k1)) patList)
                                  | _ -> ("null",0)
                      in
                      patNumList := !patNumList @ [(m,j)]
                  done;
                  let str2 = "  Var " ^ String.concat ~sep:", " (List.mapi ~f:(fun k m -> sprintf "msg%d" (k+1)) msgs) ^ " : Message;\n"
                  in
                  let str3 = "      index," ^ String.concat ~sep:"," (List.mapi ~f:(fun k m -> sprintf "i%d" (k+1)) msgs) ^ " : indexType;\n  begin\n   index:=0;\n"
                  in
                  let str4 = String.concat ~sep: ";\n" (List.mapi ~f:(fun i (m,j) -> sprintf "   lookAddPat%d(%s,msg%d,i%d)" j m (i+1) (i+1)) !patNumList) ^ ";\n"
                  in
                  let str5 = String.concat ~sep:" & " (List.mapi ~f:(fun i m -> sprintf "msgs[i].concatPart%d = i%d" (i+1) (i+1)) msgs)
                  in
                  let str6 = String.concat ~sep:";\n" (List.mapi ~f:(fun i m -> sprintf "     msgs[index].concatPart%d := i%d" (i+1) (i+1)) msgs)
                  in
                  str1 ^ str2 ^ str3 ^ str4 ^
                  sprintf "   for i : msgLen do\n"^
                  sprintf "     if (msgs[i].msgType = concat & msgs[i].length = %d) then\n" (List.length msgs)^
                  sprintf "       if (%s) then\n" str5 ^ 
                  sprintf "          index:=i;\n"^
                  sprintf "       endif;\n"^
                  sprintf "     endif;\n"^
                  sprintf "   endfor;\n"^
                  sprintf "   if(index=0) then\n"^
                  sprintf "     msg_end := msg_end + 1 ;\n     index := msg_end;\n     msgs[index].msgType := concat;\n"^
                  sprintf "%s; \n" str6 ^
                  sprintf "     msgs[index].length := %d;\n    endif;\n" (List.length msgs)^
                  sprintf "   num:=index;\n   msg:=msgs[index];\n  end;\n";
                end
  |`Str s ->str1 ^ sprintf " Var index : indexType;\n begin
   index:=0;
   for i: msgLen do
    if (msgs[i].msgType = agent) then
      if (msgs[i].ag = %s) then
        index:=i;
      endif;
    endif;
   endfor;
   if(index=0) then
     msg_end := msg_end + 1 ;
     index := msg_end;
     msgs[index].msgType := agent;
     msgs[index].ag:=%s; 
     msgs[index].length := 1;
   endif;
   num:=index;
   msg:=msgs[index];
  end;\n" s s
  |`Pk role -> str1 ^ sprintf "  Var index : indexType;\n  begin
    index:=0;
    for i: msgLen do
      if (msgs[i].msgType = key) then
        if (msgs[i].k.encType = PK & msgs[i].k.ag = %sPk) then
          index:=i;
        endif;
      endif;
    endfor;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := key;
      msgs[index].k.encType:=PK; 
      msgs[index].k.ag:=%sPk;
      msgs[index].length := 1;
    endif;
    num:=index;
    msg:=msgs[index];
  end;\n" role role
  |`Sk role -> str1 ^ sprintf "  Var index : indexType;\n  begin
    index:=0;
    for i: msgLen do
      if (msgs[i].msgType = key) then
        if (msgs[i].k.encType = SK & msgs[i].k.ag = %sSk) then
          index:=i;
        endif;
      endif;
    endfor;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := key;
      msgs[index].k.encType:=SK; 
      msgs[index].k.ag:=%sSk;
    endif;
    num:=index;
    msg:=msgs[index];
  end;\n" role role
  |`Var n ->str1 ^ sprintf "  Var index : indexType;\n  begin
      index:=0;
      for i: msgLen do
        if(msgs[i].msgType=nonce) then
          if(msgs[i].noncePart=%s) then
            index:=i;
          endif;
        endif;
      endfor;
      if(index=0) then
        msg_end := msg_end + 1 ;
        index := msg_end;
        msgs[index].msgType := nonce;
        msgs[index].noncePart:=%s; 
        msgs[index].length := 1;
      endif;
      num:=index;
      msg:=msgs[index];
  end;\n" n n;
  |_ -> ""
;;

let genIsPatCode m i patList =
  let atoms = getAtoms m in
  let str1 = sprintf "---pat%d: %s \nprocedure isPat%d(msg:Message; Var flag:boolean);\n" i (output_msg m) i
  in
  match m with 
  |`Aenc(m1,k1) ->begin
                  let i1= getPatNum m1 patList in
                  let i2= getPatNum k1 patList in
                  str1 ^ sprintf "
  var flag1,flagPart1,flagPart2 : boolean;\n  begin
    flag1 := false;
    flagPart1 := false;
    flagPart2 := false;
    if (msg.msgType = aenc) then
      isPat%d(msgs[msg.aencMsg],flagPart1);
      isPat%d(msgs[msg.aencKey],flagPart2);
      if (flagPart1 & flagPart2) then 
        flag1 := true;
      endif;
    endif;
    flag := flag1;\n  end;\n" i1 i2
  end;
  |`Concat msgs ->begin
                  let type2str = match List.nth atoms 1 with
                              |Some (`Var n) -> "nonce"
                              |Some (`Str r) -> "agent"
                              |_ -> ""
                  in
                  str1 ^ sprintf "
  var flag1 : boolean;\n  begin\n
    flag1 := false;
    if (msg.msgType = concat) then 
      if (msgs[msg.concatPart1].msgType=nonce & msgs[msg.concatPart2].msgType=%s) then 
        flag1 := true;
      endif;
    endif;
    flag := flag1;
  end;\n" type2str
  end;
  |`Str s ->begin
            str1 ^ sprintf "
  var flag1 : boolean;\n  begin
    flag1 := false;
    if (msg.msgType = agent) then
      flag1 := true;
    endif;
    flag := flag1;\n  end;\n"
  end;
  |`Pk role ->begin
              str1 ^ sprintf "  var flag1 : boolean;\n  begin
    flag1 := false;
    if (msg.msgType = key) then
      if (msg.k.encType = PK) then
        flag1 := true;
      endif;
    endif;
    flag := flag1;\n  end;\n"
  end;
  |`Sk role ->begin
    str1 ^ sprintf "  var flag1 : boolean;\n  begin
    flag1 := false;
    if (msg.msgType = key) then
      if (msg.k.encType = SK) then
        flag1 := true;
      endif;
    endif;
    flag := flag1;\n  end;\n"
  end;
  |`Var n ->begin
            str1 ^ sprintf "
  var flag1 : boolean;\n  begin
    flag1 := false;
    if (msg.msgType = nonce) then
      flag1 := true;
    endif;
    flag := flag1;\n  end;\n"
  end;
  |_ -> ""
;;
(* gen procedure cons msg *)
let genCons m i patList =
  let atoms = getAtoms m in
  let noDupAtoms = del_duplicate atoms in 
  let j = getPatNum m patList in
  sprintf "procedure cons%d(%s; Var msg:Message; Var num:indexType);\n" j (atoms2Parms noDupAtoms)^
  sprintf "  begin\n    clear msg;\n    clear num;    lookAddPat%d(%s,msg,num);\n" j (atom2Str noDupAtoms)^
  sprintf "  end;\n"
;;

let genDestruct m i patlist =
  let atoms =getAtoms m in 
  let atoms = del_duplicate atoms in
  let patNum = getPatNum m patlist in
  let str1 = sprintf "procedure destruct%d(msg:Message; %s);\n" patNum (atoms2Parms1 atoms) in
  match m with
  |`Aenc(m1,k1) ->begin let keyAg=match k1 with
                           |`Pk role -> role^"Pk"
                           |`Sk role -> role^"Sk"
                           |_ -> "null"
                   in                  
                   match m1 with
                  |`Concat msgs ->let msgNums = String.concat ~sep:"," (List.mapi ~f:(fun i m -> sprintf "msgNum%d" (i+1)) msgs) in
                                  let str2 = sprintf "  var k1:KeyType;\n    msg1,%s:Message;\n" msgNums ^
                                             sprintf "  begin\n    clear msg1;\n   k1 := msgs[msg.aencKey].k;\n   %s := k1.ag;\n    msg1:=msgs[msg.aencMsg];\n" keyAg^
                                             String.concat ~sep:"\n" (List.mapi ~f:(fun i m -> sprintf "    msgNum%d:=msgs[msg1.concatPart%d];" (i+1) (i+1)) msgs)
                                  in 
                                  let str3 = (String.concat (List.mapi ~f:(fun i m'-> match m' with
                                              |`Var n -> sprintf "    %s:=msgNum%d.noncePart;\n" n (i+1)
                                              |`Str r -> sprintf "    %s:=msgNum%d.ag;\n" r (i+1)
                                              |_ -> sprintf "" )msgs))
                                  in
                                  str1 ^ str2^ "\n" ^str3 ^ "  end;\n"
                  |`Var n -> str1 ^ sprintf "  var k1:KeyType;\n    msg1,msgNum1,msgNum2:Message;\n   begin\n
    clear msg1;
    k1 := msgs[msg.aencKey].k;
    %s := k1.ag;
    msg1:=msgs[msg.aencMsg];
    %s:=msg1.noncePart;
  end;\n" keyAg n
                  |_ -> ""     
  end   
  |`Concat msgs -> let msgNums = String.concat ~sep:"," (List.mapi ~f:(fun i m -> sprintf "msgNum%d" (i+1)) msgs) in
                   let stats = String.concat ~sep:";\n" (List.mapi ~f:(fun i m -> match m with
                      |`Str r -> sprintf "    msgNum%d := msgs[msg.concatPart%d];\n" (i+1) (i+1) ^
                                 sprintf "    %s := msgNum%d.ag" r (i+1)
                      |`Var n -> sprintf "    msgNum%d := msgs[msg.concatPart%d];\n" (i+1) (i+1) ^
                                 sprintf "    %s := msgNum%d.noncePart" n (i+1)
                      |`Aenc(m1,k1) -> let keyAg = match k1 with 
                                                   |`Pk r -> r ^ "Pk"
                                                   |`Sk r -> r ^ "Sk"
                                                   |_ -> "" 
                                        in
                                        sprintf "    msgNum%d := msgs[msg.concatPart%d];\n" (i+1) (i+1)^
                                        sprintf "    k := msgs[msgNum%d.aencKey].k;\n" (i+1) ^
                                        sprintf "    %s := k.ag" keyAg
                      |_ -> "") msgs) in
                  str1 ^ sprintf "  Var %s: Message;
    k: KeyType;
  begin\n%s;
  end;\n" msgNums stats   (* 2020-04-06: finished !! *)    
  |_ -> ""
;;

let genGet_msgNoCode () =
  sprintf "
  procedure get_msgNo(msg:Message; Var num:indexType);
    var index:indexType;
    begin
      index:=0;
      for i: msgLen do
        if (msgs[i].msgType = msg.msgType) then
          if ( (msg.msgType=agent & msgs[i].ag=msg.ag)
          | (msg.msgType=nonce & msgs[i].noncePart=msg.noncePart)
          | (msg.msgType=key & (msgs[i].k.encType=msg.k.encType & msgs[i].k.ag=msg.k.ag))
          | (msg.msgType=aenc & (msgs[i].aencMsg=msg.aencMsg & msgs[i].aencKey=msg.aencKey))
          | (msg.msgType=senc & (msgs[i].sencMsg=msg.sencMsg & msgs[i].sencKey=msg.sencKey))
          ) then 
            index:=i;
          endif;
        endif;
      endfor;
      num := index;
    end;\n";
;;

let genPrintMsgCode () =
  sprintf "
  procedure printMsg(msg:Message);
    begin
      if msg.msgType=null then
        put \"null\\n\";
      elsif msg.msgType=agent then
        put msg.ag;
      elsif msg.msgType=nonce then
        put msg.noncePart;
      elsif msg.msgType=key then
        if msg.k.encType=PK then
          put \"PK(\";
          put msg.k.ag;
          put \")\";
        elsif msg.k.encType=SK then
          put \"SK(\";
          put msg.k.ag;
          put \")\";
        elsif msg.k.encType=Symk then
          put \"SymK(\";
          put msg.k.ag;
          put \")\";
        endif;
      elsif msg.msgType=aenc then
        put \"aenc{\";
        printMsg(msgs[msg.aencMsg]);
        put \",\";
        printMsg(msgs[msg.aencKey]);
        put \"}\\n\";
      elsif msg.msgType=senc then
        put \"senc{\";
        printMsg(msgs[msg.sencMsg]);
        put \",\";
        printMsg(msgs[msg.sencKey]);
        put \"}\\n\";
      elsif msg.msgType=concat then
        put \"concat(\";
        printMsg(msgs[msg.concatPart1]);
        put \",\";
        printMsg(msgs[msg.concatPart2]);
        put \",\";
        put msg.length;
        put\")\";
      endif;
    end;\n"
;;
let genInverseKeyCode ()=
  sprintf "function inverseKey(msgK:Message):Message;
  var key_inv:Message;
  begin
    key_inv.msgType := null;
    if (msgK.msgType=key) then
      key_inv.msgType := msgK.msgType;
      key_inv.k.ag := msgK.k.ag;
      if (msgK.k.encType=PK) then
        key_inv.k.encType := SK;
      elsif (msgK.k.encType=SK) then
        key_inv.k.encType := PK;
      endif;
    endif;
    return key_inv;
  end;\n";
;;

let genLookUpCode () =
  sprintf "function lookUp(msg: Message): indexType; --- not used.
  var index : indexType;
  begin
    index:=0;
    for i: indexType do
      if(msgs[i].msgType=msg.msgType) then
        if(msgs[i].msgType=agent & msgs[i].ag=msg.ag) then
          index := i;
        elsif(msgs[i].msgType=nonce & msgs[i].noncePart=msg.noncePart) then
          index := i;
        elsif(msgs[i].msgType=key & (msgs[i].k.encType=msg.k.encType & msgs[i].k.ag=msg.k.ag)) then
          index := i;
        elsif(msgs[i].msgType = aenc & (msgs[i].aencKey=msg.aencKey & msgs[i].aencMsg=msg.aencMsg)) then
          index := i;
        elsif(msgs[i].msgType = senc & (msgs[i].sencKey=msg.sencKey & msgs[i].sencMsg=msg.sencMsg)) then
          index := i;
        elsif(msgs[i].msgType = concat & (msgs[i].concatPart1=msg.concatPart1 & msgs[i].concatPart2=msg.concatPart2)) then
          index := i;
        endif;
      endif;
    endfor;
    return index;
  end;\n";
;;
(* generate m by its submsgs*)
let rec consMsgBySubs m patList = 
  let i = getPatNum m patList in   (* construct_i_by_ noDupAtoms *)
  let atoms = getAtoms m in
  let noDupAtoms = del_duplicate atoms in 
  match m with
  |`Aenc(m1, k1) -> (* aenc{m1}k1*)
                    let i1 = getPatNum m1 patList in
                    let i2 = getPatNum k1 patList in
                    let subMsgNo = String.concat (List.map ~f:(fun i -> sprintf "%d" i) [i1; i2])
                    in
                    let msgNoStr = String.concat ~sep:"," (List.mapi ~f:(fun i j -> sprintf "msgNo%d" j) [i1; i2])
                    in
                    sprintf "function construct%dBy%s(%s:indexType):indexType;\n" i subMsgNo msgNoStr ^
                    sprintf "  var index : indexType;\n"^
                    sprintf "      %s;\n" (atoms2Str1 noDupAtoms)^
                    sprintf "      k_ag : AgentType;\n"^
                    sprintf "      msg : Message;\n  begin\n"^
                    sprintf "   index := 0;\n"^
                    sprintf "   %s;\n" (atoms2Statm atoms m patList)^
                    (* sprintf "   k_ag := msgs[msgNo%d].k.ag;\n" i2^ *)
                    sprintf "   lookAddPat%d(%s,msg,index);\n" i (atoms2Str2 noDupAtoms)^
                    sprintf "   return index;\n" ^
                    sprintf "  end;\n"
  |`Senc(m1, k1) -> sprintf " ---Sorry, the compilation process of symmetric encryption is not written !\n\n"
  |`Hash(m) -> sprintf "---Sorry, the compilation process of Hash function is not written! \n\n"
  |`Concat msgs -> (* Host.Na.aenc{Host.Na}sk{Host) *)
                    let subMsgNo = String.concat (List.map ~f:(fun m -> sprintf "%d" (getPatNum m patList)) msgs) in
                    let msgNoStr = String.concat ~sep:"," (List.mapi ~f:(fun i m -> sprintf "msgNo%d" (i+1)) msgs) in
                    sprintf "function construct%dBy%s(%s:indexType):indexType;\n" i subMsgNo msgNoStr ^
                    sprintf "  var index : indexType;\n"^
                    sprintf "      %s;\n" (atoms2Str1 noDupAtoms)^
                    sprintf "      msg : Message;\n  begin\n"^
                    sprintf "     index := 0;\n" ^
                    sprintf "%s;\n" (atoms2Statm1 noDupAtoms msgs )^
                    sprintf "     lookAddPat%d(%s,msg,index);\n" i (atoms2Str2 noDupAtoms)^
                    sprintf "   return index;\n" ^
                    sprintf "  end;\n";
  | _ -> sprintf "---Sorry, the compilation process is not written!\n\n"

and atoms2Str1 atoms=
    String.concat ~sep:";\n      " (List.map ~f:(fun atom -> match atom with
                      |`Var n -> "loc"^n^":NonceType"
                      |`Str r -> "loc"^r^":AgentType"
                      |`Pk r -> "loc"^r^"Pk:AgentType"
                      |`Sk r -> "loc"^r^"Sk:AgentType"
                      |_ -> "") atoms)
  
and atoms2Str2 atoms=
    String.concat ~sep:"," (List.map ~f:(fun atom -> match atom with
                      |`Var n -> "loc"^n
                      |`Str r -> "loc"^r
                      |`Pk r -> "loc"^r^"Pk"
                      |`Sk r -> "loc"^r^"Sk"
                      |_ -> "") atoms) 

and atoms2Statm atoms m patList=
    match m with 
    |`Concat msgs -> let j = getPatNum m patList in
                     String.concat ~sep:";\n   " (List.mapi ~f:(fun i atom -> 
                      match atom with
                      |`Var n -> "loc"^n^":= msgs[msgs[msgNo"^ string_of_int j^"].concatPart"^(string_of_int (i+1))^"].noncePart"
                      |`Str r -> "loc"^r^":= msgs[msgs[msgNo"^ string_of_int j^"].concatPart"^(string_of_int (i+1))^"].ag"
                      |_ -> "") atoms)
    |`Var n -> let j = getPatNum m patList in
              "loc"^n^":=msgs[msgNo"^string_of_int j^"].noncePart"
    |`Pk r -> let j = getPatNum m patList in
              "loc"^r^"Pk := msgs[msgNo"^ string_of_int j ^"].k.ag"
    |`Aenc(m1,k1)-> atoms2Statm atoms m1 patList ^ ";\n" ^atoms2Statm atoms k1 patList
    |_ -> ""

and atoms2Statm1 atoms msgs = (* occurred some problem *)
    String.concat ~sep:";\n" (List.map ~f:(fun m -> let i = getNum m msgs in 
                              match m with
                              |`Var n -> 
                                        "     loc"^n^":= msgs[msgNo"^(string_of_int i)^"].noncePart"
                              |`Str r -> 
                                        "     loc"^r^":= msgs[msgNo"^(string_of_int i)^"].ag"
                              |`Pk r -> "     loc"^r^":= msgs[msgNo"^(string_of_int i)^"].k.ag"
                              |`Sk r -> "     loc"^r^":= msgs[msgNo"^(string_of_int i)^"].k.ag"
                              | _ -> "" ) atoms)

and getNum m msgs = 
  match msgs with 
  | [] -> failwith "-1"
  | hd :: tl -> let atoms = getAtoms hd in
                if listwithout atoms m then (getNum m tl) + 1
                else 1
;;
let rec constructMsgByPats m patList =
  let i = getPatNum m patList in
  match m with
  |`Aenc(m1,k1) -> let i1 = getPatNum m1 patList in
                   let i2 = getPatNum k1 patList in
                   let atoms = getAtoms m1 in
                   let noDupAtoms = del_duplicate atoms in 
                   sprintf "function construct%dBy%d%d(msgNo%d,msgNo%d:indexType):indexType;\n" i i1 i2 i1 i2 ^
                   sprintf "  var index : indexType;\n"^
                   sprintf "      %s;\n" (atoms2Str1 noDupAtoms)^
                   sprintf "      k_ag : AgentType;\n"^
                   sprintf "      msg : Message;\n  begin\n"^
                   sprintf "   index := 0;\n"^
                   sprintf "   %s;\n" (atoms2Statm atoms m1 patList)^
                   sprintf "   k_ag := msgs[msgNo%d].k.ag;\n" i2^
                   sprintf "   lookAddPat%d(%s,k_ag,msg,index);\n" i (atoms2Str2 noDupAtoms)^
                   sprintf "   return index;\n" ^
                   sprintf "  end;\n"

  |`Concat msgs -> let patNumList = ref [] in
                   (* let n_var = ref 0 in
                   let n_str = ref 0 in *)
                  for i = 0 to ((List.length msgs) - 1) do
                      let (m, j) = match List.nth msgs i with
                                  |Some (`Var n) -> begin 
                                                    (* n_var := !n_var + 1;  *)
                                                    let k = getPatNum (`Var n) patList in
                                                    (`Var n, k) (*(k-1 + !n_var)*)
                                                    end
                                  |Some (`Str r) -> begin 
                                                    (* n_str := !n_str + 1;  *)
                                                    let k = getPatNum (`Str r) patList in
                                                    (`Str r,k) (* (k-1 + !n_str) *)
                                                    end
                                  |Some (`Hash m) -> let atoms = getAtoms m in
                                                    let str = String.concat ~sep:"," (List.map ~f:(fun a -> match a with
                                                                                      |`Var n -> n
                                                                                      |`Str r -> r
                                                                                      |`Pk r -> r
                                                                                      |`Sk r -> r
                                                                                      |`K(r1,r2) -> r1^","^r2) atoms)
                                                    in
                                                    (`Str str, getPatNum (`Hash m) patList)
                                  |Some (`Pk r) -> (`Pk r, getPatNum (`Pk r) patList)
                                  |Some (`Sk r) -> (`Sk r, getPatNum (`Sk r) patList)
                                  |Some (`K (r1, r2)) -> let str = sprintf "%s, %s" r1 r2
                                                        in
                                                        (`Str str, getPatNum (`K (r1, r2)) patList)
                                  |Some (`Aenc (m1,k1)) -> let atoms = getAtoms (`Aenc(m1,k1)) in
                                                          let noDupAtoms = del_duplicate atoms in 
                                                          let str = String.concat ~sep:"," (List.map ~f:(fun a -> match a with
                                                                                        |`Var n -> n
                                                                                        |`Str r -> r
                                                                                        |`Pk r -> r
                                                                                        |`Sk r -> r
                                                                                        |`K(r1,r2) -> r1^","^r2) noDupAtoms)
                                                            in
                                                          (`Str str, getPatNum (`Aenc (m1,k1)) patList)
                                  |Some (`Senc (m1,k1)) -> let atoms = getAtoms (`Aenc(m1,k1)) in
                                                          let str = String.concat ~sep:"," (List.map ~f:(fun a -> match a with
                                                                                        |`Var n -> n
                                                                                        |`Str r -> r
                                                                                        |`Pk r -> r^"Pk"
                                                                                        |`Sk r -> r^"Sk"
                                                                                        |`K(r1,r2) -> r1^","^r2) atoms)
                                                          in
                                                        (`Str str , getPatNum (`Senc (m1,k1)) patList)
                                  | _ -> (`Str "null",0)
                      in
                      patNumList := !patNumList @ [(m,j)]
                  done;
                   let atoms = getAtoms m in
                   let noDupAtoms = del_duplicate atoms in 
                   let subMsgNo = String.concat (List.map ~f:(fun (m,j) -> sprintf "%d" j) !patNumList)
                   in
                   let msgNoStr = String.concat ~sep:"," (List.mapi ~f:(fun i (m,j) -> sprintf "msgNo%d" (i+1)) !patNumList)
                   in
                   
                   sprintf "function construct%dBy%s(%s:indexType):indexType;\n" i subMsgNo msgNoStr ^
                   sprintf "  var index : indexType;\n"^
                   sprintf "      %s;\n" (atoms2Str1 noDupAtoms)^
                   sprintf "      msg : Message;\n  begin\n"^
                   sprintf "     index := 0;\n" ^
                   sprintf "%s;\n" (atoms2Statm1 !patNumList)^
                   sprintf "     lookAddPat%d(%s,msg,index);\n" i (atoms2Str2 noDupAtoms)^
                   sprintf "   return index;\n" ^
                   sprintf "  end;\n";
  |_ -> ""

and atoms2Str1 atoms=
  String.concat ~sep:";\n      " (List.map ~f:(fun atom -> match atom with
                |`Var n -> "loc"^n^":NonceType"
                |`Str r -> "loc"^r^":AgentType"
                |`Pk r -> "loc"^r^"Pk:AgentType"
                |`Sk r -> "loc"^r^"Sk:AgentType"
                |_ -> "") atoms)

and atoms2Str2 atoms=
    String.concat ~sep:"," (List.map ~f:(fun atom -> match atom with
    |`Var n -> "loc"^n
    |`Str r -> "loc"^r
    |`Pk r -> "loc"^r^"Pk"
    |`Sk r -> "loc"^r^"Sk"
    |_ -> "") atoms)               
and atoms2Statm atoms m patList=
  let j = getPatNum m patList in
  match m with 
  |`Concat msgs -> String.concat ~sep:";\n   " (List.mapi ~f:(fun i atom -> match atom with
                                                |`Var n -> "loc"^n^":= msgs[msgs[msgNo"^ string_of_int j^"].concatPart"^(string_of_int (i+1))^"].noncePart"
                                                |`Str r -> "loc"^r^":= msgs[msgs[msgNo"^ string_of_int j^"].concatPart"^(string_of_int (i+1))^"].ag"
                                                |_ -> "") atoms)
  |`Var n -> "loc"^n^":=msgs[msgNo"^string_of_int j^"].noncePart"
  |_ -> ""

and atoms2Statm1 patNumList =
  String.concat ~sep:";\n" (List.map ~f:(fun (m,i) -> 
                            match m with
                            |`Var n -> "     loc"^n^":= msgs[msgNo"^(string_of_int i)^"].noncePart"
                            |`Str r -> "     loc"^r^":= msgs[msgNo"^(string_of_int i)^"].ag"
                            |`Pk r -> "     loc"^r^":= msgs[msgNo"^(string_of_int i)^"].k.ag"
                            |`Sk r -> "     loc"^r^":= msgs[msgNo"^(string_of_int i)^"].k.ag"
                            | _ -> "" ) patNumList)
;;
let genExistCode () =
  sprintf "function exist(PatnSet:msgSet; msgNo:indexType):boolean;
  var flag:boolean;
  begin
    flag := false;
    for i:indexType do
      if (PatnSet.content[i] = msgNo) then 
        flag := true;
      endif;
    endfor;
    return flag;
  end;\n";
;;

(* Generating function matchAgent() code *)
let genMatchAgent () =
  sprintf "function matchAgent(Var locAg: AgentType; Var Ag: AgentType):boolean;  ---if ag equals to locAg which was derived from recieving msg, or anyAgent, then true
  var flag : boolean;
  begin
    flag := false;
    if (Ag = anyAgent) then
      flag := true;
      Ag := locAg;
    elsif (locAg = locAg) then
      flag := true;
    else
      flag := false;
    endif;
    return flag;
  end;\n"
;;

(* Generating function matchNonce() code *)
let genMatchNonce () =
  sprintf "function matchNonce(Var locNa: NonceType; Var Na: NonceType):boolean;  ---if Na equals to locNa which was derived from recieving msg, or anyNonce, then true
  var flag : boolean;
  begin
    flag := false;
    if (Na = anyNonce) then
      flag := true;
      Na := locNa;
    elsif (locNa = Na) then
      flag:=true;
    else
      flag := false;
    endif;
    return flag;
  end;\n"
;;

(* print procedures and functions. *)
let print_procedures actions =
  match actions with
  |`Null -> sprintf "null"
  |`Actlist arr ->let patlist = getPatList actions in    (* get all patterns from actions *)
                  let non_dup = del_duplicate patlist in (* delete duplicate *)
                  let non_equivalent = getEqvlMsgPattern non_dup in (* delete equivalent class *) 
                  let str1 = String.concat (List.mapi ~f:(fun i pat -> (genSynthCode pat (i+1) non_equivalent) ^ genIsPatCode pat (i+1) non_equivalent) non_equivalent)
                  in
                  (*genCons / genDestruct by actions *)
                  let msgs = getMsgs actions in
                  let str2 = String.concat (List.mapi ~f:(fun i m -> genCons m (i+1) non_equivalent ^ genDestruct m (i+1) non_equivalent) non_equivalent)
                  in
                  (* print get_msgNo: procedure get_msgNo(msg:Message; Var num : indexType); *)
                  let str3 = genGet_msgNoCode () ^ genPrintMsgCode () in
                  (* print functions: inverseKey/lookUp/constructsAbyBC*)
                  let str4 = genInverseKeyCode ()^ genLookUpCode () ^ String.concat (List.map ~f:(fun pat -> consMsgBySubs pat non_equivalent) non_equivalent) in
                  str1 ^ str2 ^ str3 ^ str4 ^ genExistCode () ^genMatchAgent () ^ genMatchNonce ();
  | _ ->  begin
          let patlist = getPatList actions in    (* get all patterns from actions *)
          let non_dup = del_duplicate patlist in (* delete duplicate *)
          let non_equivalent = getEqvlMsgPattern non_dup in (* delete equivalent class *) 
          let str1 = String.concat (List.mapi ~f:(fun i pat -> (genSynthCode pat (i+1) non_equivalent) ^ genIsPatCode pat (i+1) non_equivalent) non_equivalent)
          in
          let msgs = getMsgs actions in
          let str2 = String.concat (List.mapi ~f:(fun i m -> genCons m (i+1) non_equivalent ^ genDestruct m (i+1) non_equivalent) msgs)
          in
          (* print get_msgNo: procedure get_msgNo(msg:Message; Var num : indexType); *)
          let str3 = genGet_msgNoCode () ^ genPrintMsgCode () in
          (* print functions: inverseKey/lookUp/constructsAbyBC*)
          let str4 = genInverseKeyCode ()^ genLookUpCode () ^ String.concat (List.map ~f:(fun pat -> consMsgBySubs pat non_equivalent) non_equivalent) in
          str1 ^ str2 ^ str3 ^ str4 ^ genExistCode () ^ genMatchAgent () ^ genMatchNonce ();
          end;
  
;;

(*-----------------------------------------------*)
(* records of roleA and roleB; return string*)
let rec getNonces msgs =
  match msgs with
  | [] -> []
  | hd :: tl -> (getNoncesOfMsg hd) @ (getNonces tl)

and getNoncesOfMsg m =
  match m with
  |`Var n -> [n]
  |`Concat msgs -> List.concat (List.map ~f:getNoncesOfMsg msgs)
  |_ -> []
;;

let nType2Str nlist = 
  String.concat ~sep:";\n   " (List.map ~f:(fun n -> sprintf "loc%s : NonceType" n) nlist)
;;

let agType2Str rlist =
  String.concat ~sep: ";\n   " (List.map ~f:(fun r -> sprintf "loc%s : AgentType" r) rlist)
;;

(*return string*)
let rec printMurphiRecords knw nlist aglist =
  match knw with
  |`Null -> sprintf "null"
  | `Knowledge (r,m) -> let str1 = sprintf "  Role%s : record\n" r in
                        let str2 = String.concat ~sep:"\n" (List.map ~f:(fun n -> sprintf "   %s : NonceType;" n) nlist) ^ "\n" in
                        let str3 = String.concat ~sep:"\n" (List.map ~f:(fun r -> sprintf "   %s : AgentType;" r) aglist) ^ "\n" in
                        let str4 = sprintf "   %s;\n   %s;\n   st: %sStatus;\n" (nType2Str nlist) (agType2Str aglist) r in
                        let str5 = sprintf "   commit : boolean;\n" in
                        let str6 = sprintf "  end;\n" in
                        str1 ^ str2 ^ str3 ^ str4 ^ str5 ^ str6
  | `Knowledge_list knws ->String.concat (List.map ~f:(fun k -> printMurphiRecords k nlist aglist) knws)
;;

(*procedures and functions 
  rules of roleA and roleB
  rules of intruder
  rules of encryption/decryption/enconcat/deconcat*)
let trActionsToMurphi actions knws =
  match actions with
  |`Null -> sprintf "null"
  |`Act1 (seq,r1,r2,n,m) -> print_procedures actions ^ (* print prcedures and functions. *)                   
                            print_murphiRule actions knws^ (* print rules for roleA and roleB *)
                            print_murphiRule_ofIntruder actions knws^ (* print rules for intruder *)
                            print_murphiRules_EncsDecs actions knws(* encryption and decryption rules, enconcat and deconcat rules *)
  |`Act2 (seq,r1,r2,m) -> print_procedures actions ^ (* print prcedures and functions. *)                   
                          print_murphiRule actions knws^ (* print rules for roleA and roleB *)
                          print_murphiRule_ofIntruder actions knws^ (* print rules for intruder *)
                          print_murphiRules_EncsDecs actions knws(* encryption and decryption rules, enconcat and deconcat rules *)
  |`Actlist arr -> print_procedures actions ^ (* print prcedures and functions. *)                   
                   print_murphiRule actions knws^ (* print rules for roleA and roleB *)
                   print_murphiRule_ofIntruder actions knws^ (* print rules for intruder *)
		               print_murphiRules_EncsDecs actions knws(* encryption and decryption rules, enconcat and deconcat rules *)
;;

let print_startstate r num m knws =
  let msgOfKnws = getMsgOfRoles knws in
  let nlist = getNonces msgOfKnws in
  let rlist = getRolesFromKnws knws [] in
  String.concat (List.map ~f:(fun m1 -> if isSamePat m m1 then
                                          let atoms = getAtoms m1 in
                                          let str1 = match (m,m1) with
                                          |(`Concat msgs,`Concat msgs1) -> let strs = (List.map2_exn ~f:(fun m' m1' -> 
                                                                            match (m',m1') with
                                                                            |(`Var n,`Var n1) -> sprintf "role%s[%d].%s := %s;\n" r num n1 n
                                                                            (* "role"^r^"["^(string_of_int num)^"]."^n1^" := "^n^";\n" *)
                                                                            |(`Str role,`Str role1) -> sprintf "role%s[%d].%s := %s;\n" r num role1 role
                                                                            (* "role"^r^"["^(string_of_int num)^"]."^ role1^" := "^role^";\n"  *)
                                                                            |_ -> "error: mismatching!\n") msgs msgs1) 
                                                                          in
                                                                          (String.concat (List.map ~f:(fun s -> sprintf "  %s" s) strs)) ^ 
                                                                          sprintf "  role%s[%d].st := %s1;\n" r num r ^
                                                                          sprintf "  role%s[%d].commit := false;\n" r num
                                          |_ -> sprintf "null\n"
                                          in
                                          let str2 = String.concat (List.map ~f:(fun n -> 
                                                                    if listwithout atoms (`Var n) then sprintf "  role%s[%d].%s := anyNonce;\n" r num n
                                                                    else "" ) nlist)                                  
                                          in
                                          let str3 = String.concat (List.map ~f:(fun r1 -> 
                                                                    if listwithout atoms (`Str r1) then sprintf "  role%s[%d].%s := anyAgent;\n" r num r1
                                                                    else "") rlist)                                            
                                          in
                                          str1 ^ str2 ^ str3
                                        else sprintf "" ) msgOfKnws)
;;
(*startstate of roleA and role B*)
let rec printMuriphiStart env k =
  match env with
  |`Null -> sprintf "null"
  |`Env_agent (r,num,m) -> print_startstate r num m k;(* print startstates *)
  |`Envlist envs -> String.concat (List.map ~f:(fun e -> printMuriphiStart e k) envs)
  |_ -> sprintf "null"
;;

(* pritn startstate of arrays *)
let printImpofStart actions knws =
  let rlist = getRolesFromKnws knws [] in
  let str1 = sprintf "  ---intruder.B := Bob;
  for i:chanNums do
    ch[i].empty := true;
  endfor;

  for i: indexType do
    emit[i]:=false;
  endfor;

  for i:msgLen do
    msgs[i].msgType := null;
    msgs[i].length := 0;
  endfor;

  msg_end := 0;
  for i:msgLen do\n"
  in
  let patlist = getPatList actions in    (* get all patterns from actions *)
  let non_dup = del_duplicate patlist in (* delete duplicate *)
  let non_equivalent = getEqvlMsgPattern non_dup in
  let str2 = String.concat (List.mapi ~f:(fun i p -> sprintf "    pat%dSet.content[i] := 0;\n" (getPatNum p non_equivalent) ) non_equivalent)
  in
  let str3 = String.concat (List.mapi ~f:(fun i p -> sprintf "  pat%dSet.length := 0;\n" (getPatNum p non_equivalent) ) non_equivalent)
  in
  let kNum = getPatNum (`Pk "A") non_equivalent in
  let str4 = sprintf "
  for i:indexType do 
    Spy_known[i] := false;
  endfor;

  msg_end:=msg_end+1;
  msgs[msg_end].msgType := key;
  msgs[msg_end].k.ag:=Intruder;
  msgs[msg_end].k.encType:=SK;
  msgs[msg_end].length := 1;
  pat%dSet.length := pat%dSet.length + 1; 
  pat%dSet.content[pat%dSet.length] :=msg_end;
  Spy_known[msg_end] := true;
  " kNum kNum kNum kNum
  in
  let str4 = String.concat (List.map ~f:(fun r -> sprintf "  for i : role%sNums do\n" r ^
                                                  sprintf "    msg_end := msg_end+1;\n    msgs[msg_end].msgType := key;\n" ^
                                                  sprintf "    msgs[msg_end].k.ag := role%s[i].%s;\n" r r^
                                                  sprintf "    msgs[msg_end].k.encType:=PK;\n    msgs[msg_end].length := 1;\n    pat%dSet.length := pat%dSet.length + 1;\n" kNum kNum ^
                                                  sprintf "    pat%dSet.content[pat%dSet.length] :=msg_end;\n" kNum kNum ^
                                                  sprintf "    Spy_known[msg_end] := true;\n"^
                                                  sprintf "  endfor;\n"
                            ) rlist)
    
    (* sprintf "
  ---msg_end := msg_end+1;  
  ---msgs[msg_end].msgType := key;
  ---msgs[msg_end].k.ag:=Bob;
  ---msgs[msg_end].k.encType:=PK;

  ---pat%dSet.length := pat%dSet.length + 1; 
  ---pat%dSet.content[pat%dSet.length] :=msg_end;
  ---Spy_known[msg_end] := true;
  " kNum kNum kNum kNum *)
  in
  str1 ^ str2 ^ 
  "  endfor;
  for i:indexType do 
    Spy_known[i] := false;
  endfor;\n" ^
  str3 ^ str4 ^
  "\n"
;;

let rec printGoal2Murphi g =
  match g with
  |`Null -> sprintf "null\n"
  |`Secretgoal (seq,m) -> printSecGoal (seq,m)
  |`Agreegoal (seq,r1,r2,m) -> printAgreeGoal (seq,r1,r2,m) 
  |`Goallist gols -> String.concat (List.map ~f:(fun g -> printGoal2Murphi g) gols)

and printSecGoal (seq,m) =
  sprintf "
invariant \"%s\"
  forall i:msgLen do
    (msgs[i].msgType=nonce & msgs[i].noncePart = %s)
    ->
    Spy_known[i] = false
end;\n" seq (output_msg m)

and printAgreeGoal (seq,r1,r2,m) = 
  let mstr = (output_msg m) in
  sprintf "\ninvariant \"%s\"\n" seq ^
  sprintf "  forall i: role%sNums do\n" r2 ^
  sprintf "    role%s[i].commit = true \n    ->\n" r2 ^
  sprintf "    (exists j: role%sNums do
      role%s[j].commit = true & role%s[i].%s = role%s[j].%s
    endexists)
  endforall;\n" r1 r1 r1 mstr r2 mstr
;;

let agents2Str rlist =
  String.concat ~sep:", " rlist
;;

let nonce2Str nlist =
  String.concat ~sep:", " nlist
;;

(* print agents status might occur (in enum {} type )*)
let agentSStatus rlist lensOfrlist =
  String.concat ~sep:";\n  " (List.mapi ~f:(fun i r -> 
                            let len = match List.nth lensOfrlist i with
                                      |None -> 0
                                      |Some l -> l
                            in
                            let statuslist = ref [] in
                            for j = 1 to len do
                              let statu = sprintf "%s%d" r j in
                              statuslist := !statuslist @ [statu]
                            done;
                            let status = String.concat ~sep:"," !statuslist in
                            sprintf "%sStatus: enum{%s}" r status ) rlist)
;;

(*roleA : Array[roleANums] of RoleA;  ---variables of type Agents should be derivred by agents in knwss
  roleB : Array[roleBNums] of RoleB;*)
let rlistToVars rlist =
  String.concat ~sep:";\n  " (List.map ~f:(fun r -> 
                sprintf "role%s : Array[role%sNums] of Role%s" r r r) rlist)
;;

let printPatSetVars pats =
  String.concat ~sep:";\n  " (List.mapi ~f:(fun i p -> sprintf "pat%dSet: msgSet" (i+1)) pats)
;;

let printMurphiConsTypeVars actions k env=
  (* print const *)
  let msgs = getMsgOfRoles k in
  let nlist = getNonces msgs in

  let rlist = getRolesFromKnws k [] in
  let rolesOfEnv = getRolesFromEnv env [] in
  let nonceOfEnv = getNonceFromEnv env [] in
  let actsOfAllRls = getActsList actions rlist in (* Get act list of each role in rlist *)
  let lensOfactStr = List.map ~f: List.length actsOfAllRls in

  let patlist = getPatList actions in    (* get all patterns from actions *)
  let non_dup = del_duplicate patlist in (* delete duplicate *)
  let pats = getEqvlMsgPattern non_dup in

  let maxMsgLen = getMaxLenMsg actions in
  let concatParts = ref ""  in
  for i = 1 to maxMsgLen do
    concatParts := sprintf "%s\n    concatPart%d : indexType;" !concatParts i
  done;

  sprintf "const\n" ^
  String.concat ~sep:"\n" (List.map ~f:(fun r -> sprintf "  role%sNum:1;" r) rlist) ^
  "
  totalFact:20;
  chanNum:30;\n" ^

  (* print type*)
  sprintf "type
  indexType:0..totalFact;\n"^
  String.concat ~sep:"\n" (List.map ~f:(fun r -> sprintf "  role%sNums:1..role%sNum;" r r) rlist) ^
  "
  msgLen:0..totalFact;
  chanNums:1..chanNum;\n"^

  sprintf "
  AgentType : enum{%s, anyAgent}; 
  NonceType : enum{%s, anyNonce};  \n" (agents2Str rolesOfEnv) (nonce2Str nonceOfEnv)
  ^
  sprintf "
  EncryptType : enum{PK,SK,Symk};
  KeyType: record 
    encType: EncryptType; 
    ag: AgentType; 
  end;\n\n  %s;\n" (agentSStatus rlist lensOfactStr)
  (*AStatus : enum {A1,A2,A3}; ---the roles status should be derived from actions and the principals
  BStatus : enum {B1,B2,B3};*)
  ^"
  MsgType : enum {null,agent,nonce,key,aenc,senc,concat,hash};
  Message: record
    msgType : MsgType;
    ag : AgentType;
    noncePart : NonceType;
    k : KeyType;
    aencMsg : indexType;
    aencKey : indexType;
    sencMsg : indexType;
    sencKey : indexType;"^ !concatParts ^ "--- concatParts could be written in arrays: concatPart: Array[msgLen] of indexType" ^"
    length : msgLen;
  end;
  Channel: record
    msg : Message;
    sender : AgentType;
    receiver : AgentType;
    empty : boolean;
  end;\n" ^ printMurphiRecords k nlist rlist ^ (* print records of principals *)
  "
  ---RoleIntruder: record
  ---  B : AgentType;
  ---send;

  msgSet: record
    content : Array[msgLen] of indexType;
    length : msgLen;
  end;

var
  ch : Array[chanNums] of Channel;\n"^
  sprintf "  %s;\n" (rlistToVars rlist )^
  "
  ---intruder    : RoleIntruder;
  msgs : Array[indexType] of Message;
  msg_end: indexType;
  "^
  sprintf "
  %s;\n
  " (printPatSetVars pats) ^
  "
  Spy_known: Array[indexType] of boolean;
  ---systemEvent   : array[eventNums] of Event;
  ---eve_end       : eventNums;
  emit: Array[indexType] of boolean;\n\n"  
 
;;

let output_murphiCode pocol =
  match pocol with
  |`Null -> sprintf "null\n"
  |`Pocol (k,a,env,g) -> (printMurphiConsTypeVars a k env) ^ (*print murphi const/type*)
                         (trActionsToMurphi a k) ^ (* print murphi rules *)
                         "startstate\n" ^ (* print startstate *)
                         (printMuriphiStart env k) ^ (printImpofStart a k) ^
                         "end;\n" ^
                         (printGoal2Murphi g) (* print murphi goals *)
;;

let create_file filename str =
  let outc = Out_channel.create filename in
  fprintf outc "%s" str;
  Out_channel.close outc
;;

let genCode outc value =
  match value with
  |`Null -> create_file "outputs/result.m" "null"
  |`Protocol (n,p) -> create_file "outputs/result.m" (output_murphiCode p)
;;



