const
  roleANum:1;
  roleBNum:1;
  totalFact:20;
  chanNum:3;
  eventNum:30;
type
  indexType:0..totalFact;
  roleANums:1..roleANum;
  roleBNums:1..roleBNum;
  msgLen:0..totalFact;
  chanNums:1..chanNum;
  eventNums:0..eventNum;

  AgentType : enum{Alice, Intruder, Bob}; 
  NonceType : enum{Na, Nb};  

  EncryptType : enum{PK,SK,Symk};
  KeyType: record 
    encType: EncryptType; 
    ag: AgentType; 
  end;

  AStatus: enum{A1,A2,A3};
  BStatus: enum{B1,B2,B3};

  MsgType : enum {null,agent,nonce,key,aenc,senc,concat,hash};
  EveType : enum {empty,send,receive};
  Message: record
    msgType : MsgType;
    ag : AgentType;
    noncePart : NonceType;
    k : KeyType;
    aencMsg : indexType;
    aencKey : indexType;
    sencMsg : indexType;
    sencKey : indexType;
    concatPart1 : indexType;
    concatPart2 : indexType;
  end;
  Channel: record
    msg : Message;
    sender : AgentType;
    receiver : AgentType;
    empty : boolean;
  end;
  RoleA : record
   Na : NonceType;
   Nb : NonceType;
   A : AgentType;
   B : AgentType;
   loc_Na : NonceType;
   loc_Nb : NonceType;
   loc_A : AgentType;
   loc_B : AgentType;
   st: AStatus;
   commit : boolean;
  end;
  RoleB : record
   Na : NonceType;
   Nb : NonceType;
   A : AgentType;
   B : AgentType;
   loc_Na : NonceType;
   loc_Nb : NonceType;
   loc_A : AgentType;
   loc_B : AgentType;
   st: BStatus;
   commit : boolean;
  end;

  RoleIntruder: record
    B : AgentType;
  end;

  msgSet: record
    content : Array[msgLen] of indexType;
    length : msgLen;
  end;

  Event: record
    eveType : EveType;
    sender  : AgentType;
    receiver: AgentType;
    msg	: Message;
  end;

var
  ch : Array[chanNums] of Channel;
  roleA : Array[roleANums] of RoleA;
  roleB : Array[roleBNums] of RoleB;

  intruder    : RoleIntruder;
  msgs : Array[indexType] of Message;
  msg_end: indexType;
  
  pat1Set: msgSet;
  pat2Set: msgSet;
  pat3Set: msgSet;
  pat4Set: msgSet;
  pat5Set: msgSet;
  pat6Set: msgSet;
  pat7Set: msgSet;
  pat8Set: msgSet;

  
  Spy_known: Array[indexType] of boolean;
  systemEvent   : array[eventNums] of Event;
  eve_end       : eventNums;
  emit: Array[indexType] of boolean;

---pat1: Na 
procedure lookAddPat1(Na:NonceType; Var msg:Message; Var num : indexType);
  Var index : indexType;
  begin
      index:=0;
      for i: msgLen do
        if(msgs[i].msgType=nonce) then
          if(msgs[i].noncePart=Na) then
            index:=i;
          endif;
        endif;
      endfor;
      if(index=0) then
        msg_end := msg_end + 1 ;
        index := msg_end;
        msgs[index].msgType := nonce;
        msgs[index].noncePart:=Na; 
      endif;
      num:=index;
      msg:=msgs[index];
  end;
---pat1: Na 
procedure isPat1(msg:Message; Var flag:boolean);

  var flag1 : boolean;
  begin
    flag1 := false;
    if (msg.msgType = nonce) then
      flag1 := true;
    endif;
    flag := flag1;
  end;
---pat2: A 
procedure lookAddPat2(A:AgentType; Var msg:Message; Var num : indexType);
 Var index : indexType;
 begin
   index:=0;
   for i: msgLen do
    if (msgs[i].msgType = agent) then
      if (msgs[i].ag = A) then
        index:=i;
      endif;
    endif;
   endfor;
   if(index=0) then
     msg_end := msg_end + 1 ;
     index := msg_end;
     msgs[index].msgType := agent;

     msgs[index].ag:=A; 
   endif;
   num:=index;
   msg:=msgs[index];
  end;
---pat2: A 
procedure isPat2(msg:Message; Var flag:boolean);

  var flag1 : boolean;
  begin
    flag1 := false;
    if (msg.msgType = agent) then
      flag1 := true;
    endif;
    flag := flag1;
  end;
---pat3: Na.A 
procedure lookAddPat3(Na:NonceType; A:AgentType; Var msg:Message; Var num : indexType);
  Var msg1, msg2 : Message;
      index,i1,i2 : indexType;
  begin
   index:=0;
   lookAddPat1(Na,msg1,i1);
   lookAddPat2(A,msg2,i2);
   for i : msgLen do
     if (msgs[i].msgType = concat) then
       if (msgs[i].concatPart1 = i1 & msgs[i].concatPart2 = i2) then
          index:=i;
       endif;
     endif;
   endfor;
   if(index=0) then
     msg_end := msg_end + 1 ;
     index := msg_end;
     msgs[index].msgType := concat;
     msgs[index].concatPart1 := i1;
     msgs[index].concatPart2 := i2; 
   endif;
   num:=index;
   msg:=msgs[index];
  end;
---pat3: Na.A 
procedure isPat3(msg:Message; Var flag:boolean);

  var flag1 : boolean;
  begin

    flag1 := false;
    if (msg.msgType = concat) then 
      if (msgs[msg.concatPart1].msgType=nonce & msgs[msg.concatPart2].msgType=agent) then 
        flag1 := true;
      endif;
    endif;
    flag := flag1;
  end;
---pat4: pk(B) 
procedure lookAddPat4(BPk :AgentType; Var msg:Message; Var num : indexType);
  Var index : indexType;
  begin
    index:=0;
    for i: msgLen do
      if (msgs[i].msgType = key) then
        if (msgs[i].k.encType = PK & msgs[i].k.ag = BPk) then
          index:=i;
        endif;
      endif;
    endfor;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := key;
      msgs[index].k.encType:=PK; 
      msgs[index].k.ag:=BPk;
    endif;
    num:=index;
    msg:=msgs[index];
  end;
---pat4: pk(B) 
procedure isPat4(msg:Message; Var flag:boolean);
  var flag1 : boolean;
  begin
    flag1 := false;
    if (msg.msgType = key) then
      if (msg.k.encType = PK) then
        flag1 := true;
      endif;
    endif;
    flag := flag1;
  end;
---pat5: aenc{< Na.A >}pk(B) 
procedure lookAddPat5(Na:NonceType; A:AgentType; BPk :AgentType; Var msg:Message; Var num : indexType);
  Var msg1, msg2: Message;
      index,i1,i2:indexType;
  begin
   index:=0;
   lookAddPat3(Na, A,msg1,i1);
   lookAddPat4(BPk,msg2,i2);
   for i : msgLen do
     if (msgs[i].msgType = aenc) then
       if (msgs[i].aencMsg = i1 & msgs[i].aencKey = i2) then
          index:=i;
       endif;
     endif;
   endfor;
   if(index=0) then
     msg_end := msg_end + 1 ;
     index := msg_end;
     msgs[index].msgType := aenc;
     msgs[index].aencMsg:=i1; 
     msgs[index].aencKey:=i2; 
   endif;
   num:=index;
   msg:=msgs[index];
  end;
---pat5: aenc{< Na.A >}pk(B) 
procedure isPat5(msg:Message; Var flag:boolean);

  var flag1,flagPart1,flagPart2 : boolean;
  begin
    flag1 := false;
    flagPart1 := false;
    flagPart2 := false;
    if (msg.msgType = aenc) then
      isPat3(msgs[msg.aencMsg],flagPart1);
      isPat4(msgs[msg.aencKey],flagPart2);
      if (flagPart1 & flagPart2) then 
        flag1 := true;
      endif;
    endif;
    flag := flag1;
  end;
---pat6: Na.Nb 
procedure lookAddPat6(Na:NonceType; Nb:NonceType; Var msg:Message; Var num : indexType);
  Var msg1, msg2 : Message;
      index,i1,i2 : indexType;
  begin
   index:=0;
   lookAddPat1(Na,msg1,i1);
   lookAddPat1(Nb,msg2,i2);
   for i : msgLen do
     if (msgs[i].msgType = concat) then
       if (msgs[i].concatPart1 = i1 & msgs[i].concatPart2 = i2) then
          index:=i;
       endif;
     endif;
   endfor;
   if(index=0) then
     msg_end := msg_end + 1 ;
     index := msg_end;
     msgs[index].msgType := concat;
     msgs[index].concatPart1 := i1;
     msgs[index].concatPart2 := i2; 
   endif;
   num:=index;
   msg:=msgs[index];
  end;
---pat6: Na.Nb 
procedure isPat6(msg:Message; Var flag:boolean);

  var flag1 : boolean;
  begin

    flag1 := false;
    if (msg.msgType = concat) then 
      if (msgs[msg.concatPart1].msgType=nonce & msgs[msg.concatPart2].msgType=nonce) then 
        flag1 := true;
      endif;
    endif;
    flag := flag1;
  end;
---pat7: aenc{< Na.Nb >}pk(A) 
procedure lookAddPat7(Na:NonceType; Nb:NonceType; APk :AgentType; Var msg:Message; Var num : indexType);
  Var msg1, msg2: Message;
      index,i1,i2:indexType;
  begin
   index:=0;
   lookAddPat6(Na, Nb,msg1,i1);
   lookAddPat4(APk,msg2,i2);
   for i : msgLen do
     if (msgs[i].msgType = aenc) then
       if (msgs[i].aencMsg = i1 & msgs[i].aencKey = i2) then
          index:=i;
       endif;
     endif;
   endfor;
   if(index=0) then
     msg_end := msg_end + 1 ;
     index := msg_end;
     msgs[index].msgType := aenc;
     msgs[index].aencMsg:=i1; 
     msgs[index].aencKey:=i2; 
   endif;
   num:=index;
   msg:=msgs[index];
  end;
---pat7: aenc{< Na.Nb >}pk(A) 
procedure isPat7(msg:Message; Var flag:boolean);

  var flag1,flagPart1,flagPart2 : boolean;
  begin
    flag1 := false;
    flagPart1 := false;
    flagPart2 := false;
    if (msg.msgType = aenc) then
      isPat6(msgs[msg.aencMsg],flagPart1);
      isPat4(msgs[msg.aencKey],flagPart2);
      if (flagPart1 & flagPart2) then 
        flag1 := true;
      endif;
    endif;
    flag := flag1;
  end;
---pat8: aenc{< Nb >}pk(B) 
procedure lookAddPat8(Nb:NonceType; BPk :AgentType; Var msg:Message; Var num : indexType);
  Var msg1, msg2: Message;
      index,i1,i2:indexType;
  begin
   index:=0;
   lookAddPat1(Nb,msg1,i1);
   lookAddPat4(BPk,msg2,i2);
   for i : msgLen do
     if (msgs[i].msgType = aenc) then
       if (msgs[i].aencMsg = i1 & msgs[i].aencKey = i2) then
          index:=i;
       endif;
     endif;
   endfor;
   if(index=0) then
     msg_end := msg_end + 1 ;
     index := msg_end;
     msgs[index].msgType := aenc;
     msgs[index].aencMsg:=i1; 
     msgs[index].aencKey:=i2; 
   endif;
   num:=index;
   msg:=msgs[index];
  end;
---pat8: aenc{< Nb >}pk(B) 
procedure isPat8(msg:Message; Var flag:boolean);

  var flag1,flagPart1,flagPart2 : boolean;
  begin
    flag1 := false;
    flagPart1 := false;
    flagPart2 := false;
    if (msg.msgType = aenc) then
      isPat1(msgs[msg.aencMsg],flagPart1);
      isPat4(msgs[msg.aencKey],flagPart2);
      if (flagPart1 & flagPart2) then 
        flag1 := true;
      endif;
    endif;
    flag := flag1;
  end;
procedure cons1(Na:NonceType; A:AgentType; BPk :AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat5(Na, A, BPk,msg,num);
  end;
procedure destruct1(msg:Message; Var Na:NonceType; Var A:AgentType; Var BPk:AgentType);
  var k1:KeyType;
    msg1,msgNum1,msgNum2:Message;  begin
    clear msg1;
   k1 := msgs[msg.aencKey].k;
    BPk := k1.ag;
    msg1:=msgs[msg.aencMsg];
     msgNum1:=msgs[msg1.concatPart1];
    msgNum2:=msgs[msg1.concatPart2];
    Na:=msgNum1.noncePart;
    A:=msgNum2.ag;
  end;
procedure cons2(Na:NonceType; Nb:NonceType; APk :AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat7(Na, Nb, APk,msg,num);
  end;
procedure destruct2(msg:Message; Var Na:NonceType; Var Nb:NonceType; Var APk:AgentType);
  var k1:KeyType;
    msg1,msgNum1,msgNum2:Message;  begin
    clear msg1;
   k1 := msgs[msg.aencKey].k;
    APk := k1.ag;
    msg1:=msgs[msg.aencMsg];
     msgNum1:=msgs[msg1.concatPart1];
    msgNum2:=msgs[msg1.concatPart2];
    Na:=msgNum1.noncePart;
    Nb:=msgNum2.noncePart;
  end;
procedure cons3(Nb:NonceType; BPk :AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat8(Nb, BPk,msg,num);
  end;
procedure destruct3(msg:Message; Var Nb:NonceType; Var BPk:AgentType);
  var k1:KeyType;
    msg1,msgNum1,msgNum2:Message;
   begin

    clear msg1;
    k1 := msgs[msg.aencKey].k;
    BPk := k1.ag;
    msg1:=msgs[msg.aencMsg];
    Nb:=msg1.noncePart;
  end;

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
    end;

  procedure printMsg(msg:Message);
    begin
      if msg.msgType=null then
        put "null\n";
      elsif msg.msgType=agent then
        put msg.ag;
      elsif msg.msgType=nonce then
        put msg.noncePart;
      elsif msg.msgType=key then
        if msg.k.encType=PK then
          put "PK(";
          put msg.k.ag;
          put ")";
        elsif msg.k.encType=SK then
          put "SK(";
          put msg.k.ag;
          put ")";
        elsif msg.k.encType=Symk then
          put "SymK(";
          put msg.k.ag;
          put ")";
        endif;
      elsif msg.msgType=aenc then
        put "aenc{";
        printMsg(msgs[msg.aencMsg]);
        put ",";
        printMsg(msgs[msg.aencKey]);
        put "}\n";
      elsif msg.msgType=senc then
        put "senc{";
        printMsg(msgs[msg.sencMsg]);
        put ",";
        printMsg(msgs[msg.sencKey]);
        put "}\n";
      elsif msg.msgType=concat then
        put "concat(";
        printMsg(msgs[msg.concatPart1]);
        put ",";
        printMsg(msgs[msg.concatPart2]);
        put")";
      endif;
    end;
function inverseKey(msgK:Message):Message;
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
  end;
function lookUp(msg: Message): indexType;
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
  end;
---Sorry, the compilation process is not written!

---Sorry, the compilation process is not written!

function construct3By12(msgNo1,msgNo2:indexType):indexType;
  var index : indexType;
      locNa:NonceType;
      locA:AgentType;
      msg : Message;
  begin
     index := 0;
     locNa:= msgs[msgNo1].noncePart;
     locA:= msgs[msgNo2].ag;
     lookAddPat3(locNa,locA,msg,index);
   return index;
  end;
---Sorry, the compilation process is not written!

function construct5By34(msgNo3,msgNo4:indexType):indexType;
  var index : indexType;
      locNa:NonceType;
      locA:AgentType;
      locBPk:AgentType;
      k_ag : AgentType;
      msg : Message;
  begin
   index := 0;
   locNa:= msgs[msgs[msgNo3].concatPart1].noncePart;
   locA:= msgs[msgs[msgNo3].concatPart2].ag;
   ;
locBPk := msgs[msgNo4].k.ag;
   lookAddPat5(locNa,locA,locBPk,msg,index);
   return index;
  end;
function construct6By11(msgNo1,msgNo2:indexType):indexType;
  var index : indexType;
      locNa:NonceType;
      locNb:NonceType;
      msg : Message;
  begin
     index := 0;
     locNa:= msgs[msgNo1].noncePart;
     locNb:= msgs[msgNo2].noncePart;
     lookAddPat6(locNa,locNb,msg,index);
   return index;
  end;
function construct7By64(msgNo6,msgNo4:indexType):indexType;
  var index : indexType;
      locNa:NonceType;
      locNb:NonceType;
      locAPk:AgentType;
      k_ag : AgentType;
      msg : Message;
  begin
   index := 0;
   locNa:= msgs[msgs[msgNo6].concatPart1].noncePart;
   locNb:= msgs[msgs[msgNo6].concatPart2].noncePart;
   ;
locAPk := msgs[msgNo4].k.ag;
   lookAddPat7(locNa,locNb,locAPk,msg,index);
   return index;
  end;
function construct8By14(msgNo1,msgNo4:indexType):indexType;
  var index : indexType;
      locNb:NonceType;
      locBPk:AgentType;
      k_ag : AgentType;
      msg : Message;
  begin
   index := 0;
   locNb:=msgs[msgNo1].noncePart;
locBPk := msgs[msgNo4].k.ag;
   lookAddPat8(locNb,locBPk,msg,index);
   return index;
  end;
function exist(PatnSet:msgSet; msgNo:indexType):boolean;
  var flag:boolean;
  begin
    flag := false;
    for i:indexType do
      if (PatnSet.content[i] = msgNo) then 
        flag := true;
      endif;
    endfor;
    return flag;
  end;
function msgContains(msg1: Message; Na: NonceType):boolean;  ---if msg1 contains msg2 then return true else return false
  var flag : boolean;
  begin
    flag := false;
    if (msg1.msgType = nonce) then
      if (msg1.noncePart = Na) then
        flag := true;
      endif;
    elsif (msg1.msgType = aenc) then
      flag := msgContains(msgs[msg1.aencMsg],Na);
    elsif (msg1.msgType = senc) then
      flag := msgContains(msgs[msg1.sencMsg],Na);
    elsif (msg1.msgType = concat) then
      if (msgContains(msgs[msg1.concatPart1],Na) | msgContains(msgs[msg1.concatPart2],Na)) then
        flag := true;
      endif;
    endif;
    return flag;
  end;
ruleset i:roleANums do
rule " roleA1 "
roleA[i].st = A1 & ch[1].empty = true 
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons1(roleA[i].Na,roleA[i].A,roleA[i].B,msg,msgNo);
   ch[1].empty := false;
   ch[1].msg := msg;
   ch[1].sender := roleA[i].A;
   ch[1].receiver := Intruder;
   roleA[i].st := A2;
   put "1. ";
   put ch[1].sender;
   put "   ";
   put ch[1].receiver;
   put "   msg: ";
   printMsg(ch[1].msg);
   put "\n";
   eve_end := eve_end +1 ;
   systemEvent[eve_end].eveType := send; ;
   systemEvent[eve_end].sender := ch[1].sender ;
   systemEvent[eve_end].receiver := ch[1].receiver ;
   systemEvent[eve_end].msg := ch[1].msg ;
end;
rule " roleA2 "
roleA[i].st = A2 & ch[2].empty = false & ch[2].receiver = roleA[i].A
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   msg := ch[2].msg;
   destruct2(msg,roleA[i].loc_Na,roleA[i].loc_Nb,roleA[i].loc_A);
   eve_end:= eve_end + 1 ;
   systemEvent[eve_end].eveType := receive;
   systemEvent[eve_end].sender := roleA[i].B;
   systemEvent[eve_end].receiver := ch[2].receiver;
   systemEvent[eve_end].msg := ch[2].msg;
   if(roleA[i].loc_Na=roleA[i].Na&roleA[i].loc_A=roleA[i].A)then
     ch[2].empty:=true;
     roleA[i].st := A3;
   endif;
end;
rule " roleA3 "
roleA[i].st = A3 & ch[3].empty = true 
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons3(roleA[i].loc_Nb,roleA[i].B,msg,msgNo);
   ch[3].empty := false;
   ch[3].msg := msg;
   ch[3].sender := roleA[i].A;
   ch[3].receiver := Intruder;
   roleA[i].st := A1;
   put "3. ";
   put ch[3].sender;
   put "   ";
   put ch[3].receiver;
   put "   msg: ";
   printMsg(ch[3].msg);
   put "\n";
   eve_end := eve_end +1 ;
   systemEvent[eve_end].eveType := send; ;
   systemEvent[eve_end].sender := ch[3].sender ;
   systemEvent[eve_end].receiver := ch[3].receiver ;
   systemEvent[eve_end].msg := ch[3].msg ;
end;
endruleset;

ruleset i:roleBNums do
rule " roleB1 "
roleB[i].st = B1 & ch[1].empty = false & ch[1].receiver = roleB[i].B
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   msg := ch[1].msg;
   destruct1(msg,roleB[i].loc_Na,roleB[i].loc_A,roleB[i].loc_B);
   eve_end:= eve_end + 1 ;
   systemEvent[eve_end].eveType := receive;
   systemEvent[eve_end].sender := roleB[i].loc_A;
   systemEvent[eve_end].receiver := ch[1].receiver;
   systemEvent[eve_end].msg := ch[1].msg;
   if(roleB[i].loc_B=roleB[i].B)then
     ch[1].empty:=true;
     roleB[i].st := B2;
   endif;
end;
rule " roleB2 "
roleB[i].st = B2 & ch[2].empty = true 
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons2(roleB[i].loc_Na,roleB[i].Nb,roleB[i].loc_A,msg,msgNo);
   ch[2].empty := false;
   ch[2].msg := msg;
   ch[2].sender := roleB[i].B;
   ch[2].receiver := Intruder;
   roleB[i].st := B3;
   put "2. ";
   put ch[2].sender;
   put "   ";
   put ch[2].receiver;
   put "   msg: ";
   printMsg(ch[2].msg);
   put "\n";
   eve_end := eve_end +1 ;
   systemEvent[eve_end].eveType := send; ;
   systemEvent[eve_end].sender := ch[2].sender ;
   systemEvent[eve_end].receiver := ch[2].receiver ;
   systemEvent[eve_end].msg := ch[2].msg ;
end;
rule " roleB3 "
roleB[i].st = B3 & ch[3].empty = false & ch[3].receiver = roleB[i].B
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   msg := ch[3].msg;
   destruct3(msg,roleB[i].loc_Nb,roleB[i].loc_B);
   eve_end:= eve_end + 1 ;
   systemEvent[eve_end].eveType := receive;
   systemEvent[eve_end].sender := roleB[i].loc_A;
   systemEvent[eve_end].receiver := ch[3].receiver;
   systemEvent[eve_end].msg := ch[3].msg;
   if(roleB[i].loc_Nb=roleB[i].Nb&roleB[i].loc_B=roleB[i].B)then
     ch[3].empty:=true;
     roleB[i].st := B1;
   endif;
end;
endruleset;


---rule of intruder to get msg1 
rule "intruderGetMsg1" 
  ch[1].empty = false
  ==>
  var flag_pat5:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[1].msg;
    get_msgNo(msg, msgNo);
    isPat5(msg,flag_pat5);
    if (flag_pat5) then
      if(!exist(pat5Set,msgNo)) then
        pat5Set.length:=pat5Set.length+1;
        pat5Set.content[pat5Set.length]:=msgNo;
        Spy_known[msgNo] := true;
      endif;
    endif;
    ch[1].empty := true;
  end;

---rule of intruder to emit msg1.
ruleset i: msgLen do
  ruleset j: roleBNums do
    rule "intruderEmitMsg1"
      ch[1].empty=true & i <= pat5Set.length & Spy_known[pat5Set.content[i]]
      ==>
      begin
        if (!emit[pat5Set.content[i]] & msgs[msgs[pat5Set.content[i]].aencKey].k.ag=intruder.B) then
          clear ch[1];
          ch[1].msg:=msgs[pat5Set.content[i]];
          ch[1].sender:=Intruder;
          ch[1].receiver:=roleB[j].B;
          ch[1].empty:=false;
          emit[pat5Set.content[i]] := true;
          put "1. ";
          put ch[1].sender;
          put "   ";
          put ch[1].receiver;
          put "   msg: ";
          printMsg(ch[1].msg);
          put "\n";
        endif;
      end;
  endruleset;
endruleset;

---rule of intruder to get msg2 
rule "intruderGetMsg2" 
  ch[2].empty = false
  ==>
  var flag_pat7:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[2].msg;
    get_msgNo(msg, msgNo);
    isPat7(msg,flag_pat7);
    if (flag_pat7) then
      if(!exist(pat7Set,msgNo)) then
        pat7Set.length:=pat7Set.length+1;
        pat7Set.content[pat7Set.length]:=msgNo;
        Spy_known[msgNo] := true;
      endif;
    endif;
    ch[2].empty := true;
  end;

---rule of intruder to emit msg2.
ruleset i: msgLen do
  ruleset j: roleANums do
    rule "intruderEmitMsg2"
      ch[2].empty=true & i <= pat7Set.length & Spy_known[pat7Set.content[i]]
      ==>
      begin
        if (!emit[pat7Set.content[i]] & msgs[msgs[pat7Set.content[i]].aencKey].k.ag=intruder.B) then
          clear ch[2];
          ch[2].msg:=msgs[pat7Set.content[i]];
          ch[2].sender:=Intruder;
          ch[2].receiver:=roleA[j].A;
          ch[2].empty:=false;
          emit[pat7Set.content[i]] := true;
          put "2. ";
          put ch[2].sender;
          put "   ";
          put ch[2].receiver;
          put "   msg: ";
          printMsg(ch[2].msg);
          put "\n";
        endif;
      end;
  endruleset;
endruleset;

---rule of intruder to get msg3 
rule "intruderGetMsg3" 
  ch[3].empty = false
  ==>
  var flag_pat8:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[3].msg;
    get_msgNo(msg, msgNo);
    isPat8(msg,flag_pat8);
    if (flag_pat8) then
      if(!exist(pat8Set,msgNo)) then
        pat8Set.length:=pat8Set.length+1;
        pat8Set.content[pat8Set.length]:=msgNo;
        Spy_known[msgNo] := true;
      endif;
    endif;
    ch[3].empty := true;
  end;

---rule of intruder to emit msg3.
ruleset i: msgLen do
  ruleset j: roleBNums do
    rule "intruderEmitMsg3"
      ch[3].empty=true & i <= pat8Set.length & Spy_known[pat8Set.content[i]]
      ==>
      begin
        if (!emit[pat8Set.content[i]] & msgs[msgs[pat8Set.content[i]].aencKey].k.ag=intruder.B) then
          clear ch[3];
          ch[3].msg:=msgs[pat8Set.content[i]];
          ch[3].sender:=Intruder;
          ch[3].receiver:=roleB[j].B;
          ch[3].empty:=false;
          emit[pat8Set.content[i]] := true;
          put "3. ";
          put ch[3].sender;
          put "   ";
          put ch[3].receiver;
          put "   msg: ";
          printMsg(ch[3].msg);
          put "\n";
        endif;
      end;
  endruleset;
endruleset;
--- enconcat and deconcat rules for pat: concat(Na.A)

ruleset i:indexType do 
  rule "deconcat 3"	---pat3
    i<=pat3Set.length & Spy_known[pat3Set.content[i]] &
    !(Spy_known[msgs[pat3Set.content[i]].concatPart1] & Spy_known[msgs[pat3Set.content[i]].concatPart2])
    ==>
    var msgPat1,msgPat2:indexType;
        flag_pat1,flag_pat2:boolean;
    begin
      if (!Spy_known[msgs[pat3Set.content[i]].concatPart1]) then
        Spy_known[msgs[pat3Set.content[i]].concatPart1]:=true;
        msgPat1 := msgs[pat3Set.content[i]].concatPart1;
        isPat1(msgs[msgPat1],flag_pat1);
        if (flag_pat1) then
          if(!exist(pat1Set,msgPat1)) then
             pat1Set.length:=pat1Set.length+1;
             pat1Set.content[pat1Set.length] := msgPat1;
          endif;
        endif;
      endif;
      if (!Spy_known[msgs[pat3Set.content[i]].concatPart2]) then
        Spy_known[msgs[pat3Set.content[i]].concatPart2]:=true;
        msgPat2 := msgs[pat3Set.content[i]].concatPart2;
        isPat2(msgs[msgPat2],flag_pat2);
        if (flag_pat2) then
          if(!exist(pat2Set,msgPat2)) then
             pat2Set.length:=pat2Set.length+1;
             pat2Set.content[pat2Set.length] := msgPat2;
          endif;
        endif;
      endif;
    end;
endruleset;

ruleset i0: indexType do
  ruleset i1: indexType do 
    rule "enconcat 3"	---pat3
      i0<=pat1Set.length & Spy_known[pat1Set.content[i0]] &
      i1<=pat2Set.length & Spy_known[pat2Set.content[i1]] &
      !(pat1Set.content[i0] = pat2Set.content[i1]) & 
      !Spy_known[construct3By12(pat1Set.content[i0],pat2Set.content[i1])]
      ==>
      var concatMsgNo:indexType;
      begin
        concatMsgNo := construct3By12(pat1Set.content[i0],pat2Set.content[i1]);
        Spy_known[concatMsgNo]:=true;
        if (!exist(pat3Set,concatMsgNo)) then
          pat3Set.length:=pat3Set.length+1;
          pat3Set.content[pat3Set.length]:=concatMsgNo;
        endif;
      end;
endruleset;
endruleset;

--- encrypt and decrypt rules of pat: aenc(Na.A,pk(B)), for intruder
ruleset i:indexType do 
  rule "decrypt 5"	---pat5
    i<=pat5Set.length & Spy_known[pat5Set.content[i]] &
    !Spy_known[msgs[pat5Set.content[i]].aencMsg]
    ==>
    var key_inv:Message;
	msgPat3:indexType;
	flag_pat3:boolean;
    begin
      key_inv := inverseKey(msgs[msgs[pat5Set.content[i]].aencKey]);
      if (key_inv.k.ag = Intruder) then
        Spy_known[msgs[pat5Set.content[i]].aencMsg]:=true;
        msgPat3:=msgs[pat5Set.content[i]].aencMsg;
        isPat3(msgs[msgPat3],flag_pat3);
        if (flag_pat3) then
          if (!exist(pat3Set,msgPat3)) then
            pat3Set.length:=pat3Set.length+1;
            pat3Set.content[pat3Set.length]:=msgPat3;
          endif;
        endif;
      endif;
    end;
endruleset;

ruleset i:indexType do 
  ruleset j:indexType do 
    rule "encrypt 5"	---pat5
      i<=pat3Set.length & Spy_known[pat3Set.content[i]] &
      j<=pat4Set.length & Spy_known[pat4Set.content[j]] &
      !Spy_known[construct5By34(pat3Set.content[i],pat4Set.content[j])]
      ==>
      var encMsgNo:indexType;
      begin
        if (msgs[pat4Set.content[j]].k.ag=intruder.B) then
          encMsgNo := construct5By34(pat3Set.content[i],pat4Set.content[j]);
          if (!exist(pat5Set,encMsgNo)) then
            pat5Set.length := pat5Set.length+1;
            pat5Set.content[pat5Set.length]:=encMsgNo;
          endif;
          if (!Spy_known[encMsgNo]) then
            Spy_known[encMsgNo] := true;
          endif;
        endif;
      end;
  endruleset;
endruleset;

--- enconcat and deconcat rules for pat: concat(Na.Nb)

ruleset i:indexType do 
  rule "deconcat 6"	---pat6
    i<=pat6Set.length & Spy_known[pat6Set.content[i]] &
    !(Spy_known[msgs[pat6Set.content[i]].concatPart1] & Spy_known[msgs[pat6Set.content[i]].concatPart2])
    ==>
    var msgPat11,msgPat12:indexType;
        flag_pat11,flag_pat12:boolean;
    begin
      if (!Spy_known[msgs[pat6Set.content[i]].concatPart1]) then
        Spy_known[msgs[pat6Set.content[i]].concatPart1]:=true;
        msgPat11 := msgs[pat6Set.content[i]].concatPart1;
        isPat1(msgs[msgPat11],flag_pat11);
        if (flag_pat11) then
          if(!exist(pat1Set,msgPat11)) then
             pat1Set.length:=pat1Set.length+1;
             pat1Set.content[pat1Set.length] := msgPat11;
          endif;
        endif;
      endif;
      if (!Spy_known[msgs[pat6Set.content[i]].concatPart2]) then
        Spy_known[msgs[pat6Set.content[i]].concatPart2]:=true;
        msgPat12 := msgs[pat6Set.content[i]].concatPart2;
        isPat1(msgs[msgPat12],flag_pat12);
        if (flag_pat12) then
          if(!exist(pat1Set,msgPat12)) then
             pat1Set.length:=pat1Set.length+1;
             pat1Set.content[pat1Set.length] := msgPat12;
          endif;
        endif;
      endif;
    end;
endruleset;

ruleset i0: indexType do
  ruleset i1: indexType do 
    rule "enconcat 6"	---pat6
      i0<=pat1Set.length & Spy_known[pat1Set.content[i0]] &
      i1<=pat1Set.length & Spy_known[pat1Set.content[i1]] &
      !(pat1Set.content[i0] = pat1Set.content[i1]) & 
      !Spy_known[construct6By11(pat1Set.content[i0],pat1Set.content[i1])]
      ==>
      var concatMsgNo:indexType;
      begin
        concatMsgNo := construct6By11(pat1Set.content[i0],pat1Set.content[i1]);
        Spy_known[concatMsgNo]:=true;
        if (!exist(pat6Set,concatMsgNo)) then
          pat6Set.length:=pat6Set.length+1;
          pat6Set.content[pat6Set.length]:=concatMsgNo;
        endif;
      end;
endruleset;
endruleset;

--- encrypt and decrypt rules of pat: aenc(Na.Nb,pk(A)), for intruder
ruleset i:indexType do 
  rule "decrypt 7"	---pat7
    i<=pat7Set.length & Spy_known[pat7Set.content[i]] &
    !Spy_known[msgs[pat7Set.content[i]].aencMsg]
    ==>
    var key_inv:Message;
	msgPat6:indexType;
	flag_pat6:boolean;
    begin
      key_inv := inverseKey(msgs[msgs[pat7Set.content[i]].aencKey]);
      if (key_inv.k.ag = Intruder) then
        Spy_known[msgs[pat7Set.content[i]].aencMsg]:=true;
        msgPat6:=msgs[pat7Set.content[i]].aencMsg;
        isPat6(msgs[msgPat6],flag_pat6);
        if (flag_pat6) then
          if (!exist(pat6Set,msgPat6)) then
            pat6Set.length:=pat6Set.length+1;
            pat6Set.content[pat6Set.length]:=msgPat6;
          endif;
        endif;
      endif;
    end;
endruleset;

ruleset i:indexType do 
  ruleset j:indexType do 
    rule "encrypt 7"	---pat7
      i<=pat6Set.length & Spy_known[pat6Set.content[i]] &
      j<=pat4Set.length & Spy_known[pat4Set.content[j]] &
      !Spy_known[construct7By64(pat6Set.content[i],pat4Set.content[j])]
      ==>
      var encMsgNo:indexType;
      begin
        if (msgs[pat4Set.content[j]].k.ag=intruder.B) then
          encMsgNo := construct7By64(pat6Set.content[i],pat4Set.content[j]);
          if (!exist(pat7Set,encMsgNo)) then
            pat7Set.length := pat7Set.length+1;
            pat7Set.content[pat7Set.length]:=encMsgNo;
          endif;
          if (!Spy_known[encMsgNo]) then
            Spy_known[encMsgNo] := true;
          endif;
        endif;
      end;
  endruleset;
endruleset;

--- encrypt and decrypt rules of pat: aenc(Nb,pk(B)), for intruder
ruleset i:indexType do 
  rule "decrypt 8"	---pat8
    i<=pat8Set.length & Spy_known[pat8Set.content[i]] &
    !Spy_known[msgs[pat8Set.content[i]].aencMsg]
    ==>
    var key_inv:Message;
	msgPat1:indexType;
	flag_pat1:boolean;
    begin
      key_inv := inverseKey(msgs[msgs[pat8Set.content[i]].aencKey]);
      if (key_inv.k.ag = Intruder) then
        Spy_known[msgs[pat8Set.content[i]].aencMsg]:=true;
        msgPat1:=msgs[pat8Set.content[i]].aencMsg;
        isPat1(msgs[msgPat1],flag_pat1);
        if (flag_pat1) then
          if (!exist(pat1Set,msgPat1)) then
            pat1Set.length:=pat1Set.length+1;
            pat1Set.content[pat1Set.length]:=msgPat1;
          endif;
        endif;
      endif;
    end;
endruleset;

ruleset i:indexType do 
  ruleset j:indexType do 
    rule "encrypt 8"	---pat8
      i<=pat1Set.length & Spy_known[pat1Set.content[i]] &
      j<=pat4Set.length & Spy_known[pat4Set.content[j]] &
      !Spy_known[construct8By14(pat1Set.content[i],pat4Set.content[j])]
      ==>
      var encMsgNo:indexType;
      begin
        if (msgs[pat4Set.content[j]].k.ag=intruder.B) then
          encMsgNo := construct8By14(pat1Set.content[i],pat4Set.content[j]);
          if (!exist(pat8Set,encMsgNo)) then
            pat8Set.length := pat8Set.length+1;
            pat8Set.content[pat8Set.length]:=encMsgNo;
          endif;
          if (!Spy_known[encMsgNo]) then
            Spy_known[encMsgNo] := true;
          endif;
        endif;
      end;
  endruleset;
endruleset;

startstate
  roleA[1].A := Alice;
  roleA[1].B := Intruder;
  roleA[1].Na := Na;
  roleA[1].st := A1;
  roleB[1].B := Bob;
  roleB[1].Nb := Nb;
  roleB[1].st := B1;
  intruder.B := Bob;
  for i:chanNums do
    ch[i].empty := true;
  endfor;

  for i: indexType do
    emit[i]:=false;
  endfor;

  for i:indexType do
    msgs[i].msgType := null;
  endfor;

  msg_end := 0;
  for i:msgLen do
    pat1Set.content[i] := 0;
    pat2Set.content[i] := 0;
    pat3Set.content[i] := 0;
    pat4Set.content[i] := 0;
    pat5Set.content[i] := 0;
    pat6Set.content[i] := 0;
    pat7Set.content[i] := 0;
    pat8Set.content[i] := 0;
  endfor;
  for i:indexType do 
    Spy_known[i] := false;
  endfor;
  pat1Set.length := 0;
  pat2Set.length := 0;
  pat3Set.length := 0;
  pat4Set.length := 0;
  pat5Set.length := 0;
  pat6Set.length := 0;
  pat7Set.length := 0;
  pat8Set.length := 0;

  msg_end := msg_end+1;  
  msgs[msg_end].msgType := key;
  msgs[msg_end].k.ag:=Bob;
  msgs[msg_end].k.encType:=PK;

  pat4Set.length := pat4Set.length + 1; 
  pat4Set.content[pat4Set.length] :=msg_end;
  Spy_known[msg_end] := true;
  
  eve_end := 0;  
  for i:eventNums do
     systemEvent[i].eveType := empty;
  endfor;
end;

invariant "sec1"
  forall i:msgLen do
    (msgs[i].msgType=nonce & msgs[i].noncePart = Nb)
    ->
    Spy_known[i] = false
end;

invariant "auth1"
  forall i: roleANums do
    roleA[i].commit = true 
    ->
    (exists j: roleBNums do
      roleB[j].commit = true & roleB[i].Na = roleA[j].Na
    endexists)
  endforall;
