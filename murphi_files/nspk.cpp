/******************************
  Program "nspk.m" compiled by "Caching Murphi Release 5.4.9.1"

  Murphi Last Compiled date: "Aug  7 2019"
 ******************************/

/********************
  Parameter
 ********************/
#define MURPHI_VERSION "Caching Murphi Release 5.4.9.1"
#define MURPHI_DATE "Aug  7 2019"
#define PROTOCOL_NAME "nspk"
#define BITS_IN_WORLD 47248
#define ALIGN

/********************
  Include
 ********************/
#include "mu_prolog.hpp"

/********************
  Decl declaration
 ********************/

class mu_1_indexType: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_indexType& val) { return mu__byte::operator=((int) val); };
  mu_1_indexType (const char *name, int os): mu__byte(0, 200, 8, name, os) {};
  mu_1_indexType (void): mu__byte(0, 200, 8) {};
  mu_1_indexType (int val): mu__byte(0, 200, 8, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1_indexType mu_1_indexType_undefined_var;

class mu_1_aliceNums: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_aliceNums& val) { return mu__byte::operator=((int) val); };
  mu_1_aliceNums (const char *name, int os): mu__byte(1, 1, 1, name, os) {};
  mu_1_aliceNums (void): mu__byte(1, 1, 1) {};
  mu_1_aliceNums (int val): mu__byte(1, 1, 1, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1_aliceNums mu_1_aliceNums_undefined_var;

class mu_1_bobNums: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_bobNums& val) { return mu__byte::operator=((int) val); };
  mu_1_bobNums (const char *name, int os): mu__byte(1, 1, 1, name, os) {};
  mu_1_bobNums (void): mu__byte(1, 1, 1) {};
  mu_1_bobNums (int val): mu__byte(1, 1, 1, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1_bobNums mu_1_bobNums_undefined_var;

class mu_1_msgLen: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_msgLen& val) { return mu__byte::operator=((int) val); };
  mu_1_msgLen (const char *name, int os): mu__byte(1, 200, 8, name, os) {};
  mu_1_msgLen (void): mu__byte(1, 200, 8) {};
  mu_1_msgLen (int val): mu__byte(1, 200, 8, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1_msgLen mu_1_msgLen_undefined_var;

class mu_1_DeductionsNums: public mu__long
{
 public:
  inline int operator=(int val) { return mu__long::operator=(val); };
  inline int operator=(const mu_1_DeductionsNums& val) { return mu__long::operator=((int) val); };
  mu_1_DeductionsNums (const char *name, int os): mu__long(1, 400, 9, name, os) {};
  mu_1_DeductionsNums (void): mu__long(1, 400, 9) {};
  mu_1_DeductionsNums (int val): mu__long(1, 400, 9, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1_DeductionsNums mu_1_DeductionsNums_undefined_var;

class mu_1_msgpassingNums: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_msgpassingNums& val) { return mu__byte::operator=((int) val); };
  mu_1_msgpassingNums (const char *name, int os): mu__byte(1, 3, 2, name, os) {};
  mu_1_msgpassingNums (void): mu__byte(1, 3, 2) {};
  mu_1_msgpassingNums (int val): mu__byte(1, 3, 2, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1_msgpassingNums mu_1_msgpassingNums_undefined_var;

class mu_1_eventNums: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_eventNums& val) { return mu__byte::operator=((int) val); };
  mu_1_eventNums (const char *name, int os): mu__byte(1, 50, 6, name, os) {};
  mu_1_eventNums (void): mu__byte(1, 50, 6) {};
  mu_1_eventNums (int val): mu__byte(1, 50, 6, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1_eventNums mu_1_eventNums_undefined_var;

class mu_1_AgentType: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_AgentType& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_AgentType& val)
  {
    if (val.defined())
      return ( s << mu_1_AgentType::values[ int(val) - 1] );
    else return ( s << "Undefined" );
  };

  mu_1_AgentType (const char *name, int os): mu__byte(1, 3, 2, name, os) {};
  mu_1_AgentType (void): mu__byte(1, 3, 2) {};
  mu_1_AgentType (int val): mu__byte(1, 3, 2, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -1]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print()
  {
    if (defined())
      cout << name << ":" << values[ value() -1] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_AgentType::values[] = {"Alice","Bob","indexTyperuder_",NULL };

/*** end of enum declaration ***/
mu_1_AgentType mu_1_AgentType_undefined_var;

class mu_1_NonceType: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_NonceType& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_NonceType& val)
  {
    if (val.defined())
      return ( s << mu_1_NonceType::values[ int(val) - 4] );
    else return ( s << "Undefined" );
  };

  mu_1_NonceType (const char *name, int os): mu__byte(4, 7, 3, name, os) {};
  mu_1_NonceType (void): mu__byte(4, 7, 3) {};
  mu_1_NonceType (int val): mu__byte(4, 7, 3, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -4]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print()
  {
    if (defined())
      cout << name << ":" << values[ value() -4] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_NonceType::values[] = {"Na","Na1","Nb","Nb1",NULL };

/*** end of enum declaration ***/
mu_1_NonceType mu_1_NonceType_undefined_var;

class mu_1_EncryptType: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_EncryptType& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_EncryptType& val)
  {
    if (val.defined())
      return ( s << mu_1_EncryptType::values[ int(val) - 8] );
    else return ( s << "Undefined" );
  };

  mu_1_EncryptType (const char *name, int os): mu__byte(8, 10, 2, name, os) {};
  mu_1_EncryptType (void): mu__byte(8, 10, 2) {};
  mu_1_EncryptType (int val): mu__byte(8, 10, 2, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -8]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print()
  {
    if (defined())
      cout << name << ":" << values[ value() -8] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_EncryptType::values[] = {"PK","SK","SymK",NULL };

/*** end of enum declaration ***/
mu_1_EncryptType mu_1_EncryptType_undefined_var;

class mu_1_KeyType
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_EncryptType mu_encTyp;
  mu_1_AgentType mu_ag;
  mu_1_KeyType ( const char *n, int os ) { set_self(n,os); };
  mu_1_KeyType ( void ) {};

  virtual ~mu_1_KeyType(); 
friend int CompareWeight(mu_1_KeyType& a, mu_1_KeyType& b)
  {
    int w;
    w = CompareWeight(a.mu_encTyp, b.mu_encTyp);
    if (w!=0) return w;
    w = CompareWeight(a.mu_ag, b.mu_ag);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_KeyType& a, mu_1_KeyType& b)
  {
    int w;
    w = Compare(a.mu_encTyp, b.mu_encTyp);
    if (w!=0) return w;
    w = Compare(a.mu_ag, b.mu_ag);
    if (w!=0) return w;
  return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    mu_encTyp.MultisetSort();
    mu_ag.MultisetSort();
  }
  void print_statistic()
  {
    mu_encTyp.print_statistic();
    mu_ag.print_statistic();
  }
  void clear() {
    mu_encTyp.clear();
    mu_ag.clear();
 };
  void undefine() {
    mu_encTyp.undefine();
    mu_ag.undefine();
 };
  void reset() {
    mu_encTyp.reset();
    mu_ag.reset();
 };
  void print() {
    mu_encTyp.print();
    mu_ag.print();
  };
  void print_diff(state *prevstate) {
    mu_encTyp.print_diff(prevstate);
    mu_ag.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_encTyp.to_state(thestate);
    mu_ag.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_KeyType& operator= (const mu_1_KeyType& from) {
    mu_encTyp.value(from.mu_encTyp.value());
    mu_ag.value(from.mu_ag.value());
    return *this;
  };
};

  void mu_1_KeyType::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_KeyType::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_KeyType::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_encTyp.set_self_2(name, ".encTyp", os + 0 ); else mu_encTyp.set_self_2(NULL, NULL, 0);
  if (name) mu_ag.set_self_2(name, ".ag", os + 8 ); else mu_ag.set_self_2(NULL, NULL, 0);
}

mu_1_KeyType::~mu_1_KeyType()
{
}

/*** end record declaration ***/
mu_1_KeyType mu_1_KeyType_undefined_var;

class mu_1_AliceStatus: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_AliceStatus& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_AliceStatus& val)
  {
    if (val.defined())
      return ( s << mu_1_AliceStatus::values[ int(val) - 11] );
    else return ( s << "Undefined" );
  };

  mu_1_AliceStatus (const char *name, int os): mu__byte(11, 13, 2, name, os) {};
  mu_1_AliceStatus (void): mu__byte(11, 13, 2) {};
  mu_1_AliceStatus (int val): mu__byte(11, 13, 2, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -11]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print()
  {
    if (defined())
      cout << name << ":" << values[ value() -11] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_AliceStatus::values[] = {"A1","A2","A3",NULL };

/*** end of enum declaration ***/
mu_1_AliceStatus mu_1_AliceStatus_undefined_var;

class mu_1_BobStatus: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_BobStatus& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_BobStatus& val)
  {
    if (val.defined())
      return ( s << mu_1_BobStatus::values[ int(val) - 14] );
    else return ( s << "Undefined" );
  };

  mu_1_BobStatus (const char *name, int os): mu__byte(14, 16, 2, name, os) {};
  mu_1_BobStatus (void): mu__byte(14, 16, 2) {};
  mu_1_BobStatus (int val): mu__byte(14, 16, 2, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -14]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print()
  {
    if (defined())
      cout << name << ":" << values[ value() -14] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_BobStatus::values[] = {"B1","B2","B3",NULL };

/*** end of enum declaration ***/
mu_1_BobStatus mu_1_BobStatus_undefined_var;

class mu_1_indexTyperuderStatus: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_indexTyperuderStatus& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_indexTyperuderStatus& val)
  {
    if (val.defined())
      return ( s << mu_1_indexTyperuderStatus::values[ int(val) - 17] );
    else return ( s << "Undefined" );
  };

  mu_1_indexTyperuderStatus (const char *name, int os): mu__byte(17, 23, 3, name, os) {};
  mu_1_indexTyperuderStatus (void): mu__byte(17, 23, 3) {};
  mu_1_indexTyperuderStatus (int val): mu__byte(17, 23, 3, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -17]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print()
  {
    if (defined())
      cout << name << ":" << values[ value() -17] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_indexTyperuderStatus::values[] = {"waiting","getmsg1","getmsg2","getmsg3","emitting1","emitting2","emitting3",NULL };

/*** end of enum declaration ***/
mu_1_indexTyperuderStatus mu_1_indexTyperuderStatus_undefined_var;

class mu_1_MsgType: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_MsgType& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_MsgType& val)
  {
    if (val.defined())
      return ( s << mu_1_MsgType::values[ int(val) - 24] );
    else return ( s << "Undefined" );
  };

  mu_1_MsgType (const char *name, int os): mu__byte(24, 31, 4, name, os) {};
  mu_1_MsgType (void): mu__byte(24, 31, 4) {};
  mu_1_MsgType (int val): mu__byte(24, 31, 4, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -24]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print()
  {
    if (defined())
      cout << name << ":" << values[ value() -24] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_MsgType::values[] = {"null","agent","nonce","key","aenc","senc","concat","hash",NULL };

/*** end of enum declaration ***/
mu_1_MsgType mu_1_MsgType_undefined_var;

class mu_1_Message
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_MsgType mu_msgType;
  mu_1_AgentType mu_ag;
  mu_1_NonceType mu_noncePart;
  mu_1_KeyType mu_k;
  mu_1_indexType mu_aencMsg;
  mu_1_indexType mu_aencKey;
  mu_1_indexType mu_sencMsg;
  mu_1_indexType mu_sencKey;
  mu_1_indexType mu_concatPart1;
  mu_1_indexType mu_concatPart2;
  mu_1_Message ( const char *n, int os ) { set_self(n,os); };
  mu_1_Message ( void ) {};

  virtual ~mu_1_Message(); 
friend int CompareWeight(mu_1_Message& a, mu_1_Message& b)
  {
    int w;
    w = CompareWeight(a.mu_msgType, b.mu_msgType);
    if (w!=0) return w;
    w = CompareWeight(a.mu_ag, b.mu_ag);
    if (w!=0) return w;
    w = CompareWeight(a.mu_noncePart, b.mu_noncePart);
    if (w!=0) return w;
    w = CompareWeight(a.mu_k, b.mu_k);
    if (w!=0) return w;
    w = CompareWeight(a.mu_aencMsg, b.mu_aencMsg);
    if (w!=0) return w;
    w = CompareWeight(a.mu_aencKey, b.mu_aencKey);
    if (w!=0) return w;
    w = CompareWeight(a.mu_sencMsg, b.mu_sencMsg);
    if (w!=0) return w;
    w = CompareWeight(a.mu_sencKey, b.mu_sencKey);
    if (w!=0) return w;
    w = CompareWeight(a.mu_concatPart1, b.mu_concatPart1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_concatPart2, b.mu_concatPart2);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_Message& a, mu_1_Message& b)
  {
    int w;
    w = Compare(a.mu_msgType, b.mu_msgType);
    if (w!=0) return w;
    w = Compare(a.mu_ag, b.mu_ag);
    if (w!=0) return w;
    w = Compare(a.mu_noncePart, b.mu_noncePart);
    if (w!=0) return w;
    w = Compare(a.mu_k, b.mu_k);
    if (w!=0) return w;
    w = Compare(a.mu_aencMsg, b.mu_aencMsg);
    if (w!=0) return w;
    w = Compare(a.mu_aencKey, b.mu_aencKey);
    if (w!=0) return w;
    w = Compare(a.mu_sencMsg, b.mu_sencMsg);
    if (w!=0) return w;
    w = Compare(a.mu_sencKey, b.mu_sencKey);
    if (w!=0) return w;
    w = Compare(a.mu_concatPart1, b.mu_concatPart1);
    if (w!=0) return w;
    w = Compare(a.mu_concatPart2, b.mu_concatPart2);
    if (w!=0) return w;
  return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    mu_msgType.MultisetSort();
    mu_ag.MultisetSort();
    mu_noncePart.MultisetSort();
    mu_k.MultisetSort();
    mu_aencMsg.MultisetSort();
    mu_aencKey.MultisetSort();
    mu_sencMsg.MultisetSort();
    mu_sencKey.MultisetSort();
    mu_concatPart1.MultisetSort();
    mu_concatPart2.MultisetSort();
  }
  void print_statistic()
  {
    mu_msgType.print_statistic();
    mu_ag.print_statistic();
    mu_noncePart.print_statistic();
    mu_k.print_statistic();
    mu_aencMsg.print_statistic();
    mu_aencKey.print_statistic();
    mu_sencMsg.print_statistic();
    mu_sencKey.print_statistic();
    mu_concatPart1.print_statistic();
    mu_concatPart2.print_statistic();
  }
  void clear() {
    mu_msgType.clear();
    mu_ag.clear();
    mu_noncePart.clear();
    mu_k.clear();
    mu_aencMsg.clear();
    mu_aencKey.clear();
    mu_sencMsg.clear();
    mu_sencKey.clear();
    mu_concatPart1.clear();
    mu_concatPart2.clear();
 };
  void undefine() {
    mu_msgType.undefine();
    mu_ag.undefine();
    mu_noncePart.undefine();
    mu_k.undefine();
    mu_aencMsg.undefine();
    mu_aencKey.undefine();
    mu_sencMsg.undefine();
    mu_sencKey.undefine();
    mu_concatPart1.undefine();
    mu_concatPart2.undefine();
 };
  void reset() {
    mu_msgType.reset();
    mu_ag.reset();
    mu_noncePart.reset();
    mu_k.reset();
    mu_aencMsg.reset();
    mu_aencKey.reset();
    mu_sencMsg.reset();
    mu_sencKey.reset();
    mu_concatPart1.reset();
    mu_concatPart2.reset();
 };
  void print() {
    mu_msgType.print();
    mu_ag.print();
    mu_noncePart.print();
    mu_k.print();
    mu_aencMsg.print();
    mu_aencKey.print();
    mu_sencMsg.print();
    mu_sencKey.print();
    mu_concatPart1.print();
    mu_concatPart2.print();
  };
  void print_diff(state *prevstate) {
    mu_msgType.print_diff(prevstate);
    mu_ag.print_diff(prevstate);
    mu_noncePart.print_diff(prevstate);
    mu_k.print_diff(prevstate);
    mu_aencMsg.print_diff(prevstate);
    mu_aencKey.print_diff(prevstate);
    mu_sencMsg.print_diff(prevstate);
    mu_sencKey.print_diff(prevstate);
    mu_concatPart1.print_diff(prevstate);
    mu_concatPart2.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_msgType.to_state(thestate);
    mu_ag.to_state(thestate);
    mu_noncePart.to_state(thestate);
    mu_k.to_state(thestate);
    mu_aencMsg.to_state(thestate);
    mu_aencKey.to_state(thestate);
    mu_sencMsg.to_state(thestate);
    mu_sencKey.to_state(thestate);
    mu_concatPart1.to_state(thestate);
    mu_concatPart2.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_Message& operator= (const mu_1_Message& from) {
    mu_msgType.value(from.mu_msgType.value());
    mu_ag.value(from.mu_ag.value());
    mu_noncePart.value(from.mu_noncePart.value());
    mu_k = from.mu_k;
    mu_aencMsg.value(from.mu_aencMsg.value());
    mu_aencKey.value(from.mu_aencKey.value());
    mu_sencMsg.value(from.mu_sencMsg.value());
    mu_sencKey.value(from.mu_sencKey.value());
    mu_concatPart1.value(from.mu_concatPart1.value());
    mu_concatPart2.value(from.mu_concatPart2.value());
    return *this;
  };
};

  void mu_1_Message::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_Message::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_Message::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_msgType.set_self_2(name, ".msgType", os + 0 ); else mu_msgType.set_self_2(NULL, NULL, 0);
  if (name) mu_ag.set_self_2(name, ".ag", os + 8 ); else mu_ag.set_self_2(NULL, NULL, 0);
  if (name) mu_noncePart.set_self_2(name, ".noncePart", os + 16 ); else mu_noncePart.set_self_2(NULL, NULL, 0);
  if (name) mu_k.set_self_2(name, ".k", os + 24 ); else mu_k.set_self_2(NULL, NULL, 0);
  if (name) mu_aencMsg.set_self_2(name, ".aencMsg", os + 40 ); else mu_aencMsg.set_self_2(NULL, NULL, 0);
  if (name) mu_aencKey.set_self_2(name, ".aencKey", os + 48 ); else mu_aencKey.set_self_2(NULL, NULL, 0);
  if (name) mu_sencMsg.set_self_2(name, ".sencMsg", os + 56 ); else mu_sencMsg.set_self_2(NULL, NULL, 0);
  if (name) mu_sencKey.set_self_2(name, ".sencKey", os + 64 ); else mu_sencKey.set_self_2(NULL, NULL, 0);
  if (name) mu_concatPart1.set_self_2(name, ".concatPart1", os + 72 ); else mu_concatPart1.set_self_2(NULL, NULL, 0);
  if (name) mu_concatPart2.set_self_2(name, ".concatPart2", os + 80 ); else mu_concatPart2.set_self_2(NULL, NULL, 0);
}

mu_1_Message::~mu_1_Message()
{
}

/*** end record declaration ***/
mu_1_Message mu_1_Message_undefined_var;

class mu_1_DeduceType: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_DeduceType& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_DeduceType& val)
  {
    if (val.defined())
      return ( s << mu_1_DeduceType::values[ int(val) - 32] );
    else return ( s << "Undefined" );
  };

  mu_1_DeduceType (const char *name, int os): mu__byte(32, 35, 3, name, os) {};
  mu_1_DeduceType (void): mu__byte(32, 35, 3) {};
  mu_1_DeduceType (int val): mu__byte(32, 35, 3, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -32]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print()
  {
    if (defined())
      cout << name << ":" << values[ value() -32] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_DeduceType::values[] = {"encryptDed","decrypt","enpairDed","depairDed",NULL };

/*** end of enum declaration ***/
mu_1_DeduceType mu_1_DeduceType_undefined_var;

class mu_1_TDeduction
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_0_boolean mu_deduced;
  mu_1_DeduceType mu_deduceKind;
  mu_1_msgLen mu_conclusion;
  mu_1_msgLen mu_assumption1;
  mu_1_msgLen mu_assumption2;
  mu_1_TDeduction ( const char *n, int os ) { set_self(n,os); };
  mu_1_TDeduction ( void ) {};

  virtual ~mu_1_TDeduction(); 
friend int CompareWeight(mu_1_TDeduction& a, mu_1_TDeduction& b)
  {
    int w;
    w = CompareWeight(a.mu_deduced, b.mu_deduced);
    if (w!=0) return w;
    w = CompareWeight(a.mu_deduceKind, b.mu_deduceKind);
    if (w!=0) return w;
    w = CompareWeight(a.mu_conclusion, b.mu_conclusion);
    if (w!=0) return w;
    w = CompareWeight(a.mu_assumption1, b.mu_assumption1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_assumption2, b.mu_assumption2);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_TDeduction& a, mu_1_TDeduction& b)
  {
    int w;
    w = Compare(a.mu_deduced, b.mu_deduced);
    if (w!=0) return w;
    w = Compare(a.mu_deduceKind, b.mu_deduceKind);
    if (w!=0) return w;
    w = Compare(a.mu_conclusion, b.mu_conclusion);
    if (w!=0) return w;
    w = Compare(a.mu_assumption1, b.mu_assumption1);
    if (w!=0) return w;
    w = Compare(a.mu_assumption2, b.mu_assumption2);
    if (w!=0) return w;
  return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    mu_deduced.MultisetSort();
    mu_deduceKind.MultisetSort();
    mu_conclusion.MultisetSort();
    mu_assumption1.MultisetSort();
    mu_assumption2.MultisetSort();
  }
  void print_statistic()
  {
    mu_deduced.print_statistic();
    mu_deduceKind.print_statistic();
    mu_conclusion.print_statistic();
    mu_assumption1.print_statistic();
    mu_assumption2.print_statistic();
  }
  void clear() {
    mu_deduced.clear();
    mu_deduceKind.clear();
    mu_conclusion.clear();
    mu_assumption1.clear();
    mu_assumption2.clear();
 };
  void undefine() {
    mu_deduced.undefine();
    mu_deduceKind.undefine();
    mu_conclusion.undefine();
    mu_assumption1.undefine();
    mu_assumption2.undefine();
 };
  void reset() {
    mu_deduced.reset();
    mu_deduceKind.reset();
    mu_conclusion.reset();
    mu_assumption1.reset();
    mu_assumption2.reset();
 };
  void print() {
    mu_deduced.print();
    mu_deduceKind.print();
    mu_conclusion.print();
    mu_assumption1.print();
    mu_assumption2.print();
  };
  void print_diff(state *prevstate) {
    mu_deduced.print_diff(prevstate);
    mu_deduceKind.print_diff(prevstate);
    mu_conclusion.print_diff(prevstate);
    mu_assumption1.print_diff(prevstate);
    mu_assumption2.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_deduced.to_state(thestate);
    mu_deduceKind.to_state(thestate);
    mu_conclusion.to_state(thestate);
    mu_assumption1.to_state(thestate);
    mu_assumption2.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_TDeduction& operator= (const mu_1_TDeduction& from) {
    mu_deduced.value(from.mu_deduced.value());
    mu_deduceKind.value(from.mu_deduceKind.value());
    mu_conclusion.value(from.mu_conclusion.value());
    mu_assumption1.value(from.mu_assumption1.value());
    mu_assumption2.value(from.mu_assumption2.value());
    return *this;
  };
};

  void mu_1_TDeduction::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_TDeduction::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_TDeduction::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_deduced.set_self_2(name, ".deduced", os + 0 ); else mu_deduced.set_self_2(NULL, NULL, 0);
  if (name) mu_deduceKind.set_self_2(name, ".deduceKind", os + 8 ); else mu_deduceKind.set_self_2(NULL, NULL, 0);
  if (name) mu_conclusion.set_self_2(name, ".conclusion", os + 16 ); else mu_conclusion.set_self_2(NULL, NULL, 0);
  if (name) mu_assumption1.set_self_2(name, ".assumption1", os + 24 ); else mu_assumption1.set_self_2(NULL, NULL, 0);
  if (name) mu_assumption2.set_self_2(name, ".assumption2", os + 32 ); else mu_assumption2.set_self_2(NULL, NULL, 0);
}

mu_1_TDeduction::~mu_1_TDeduction()
{
}

/*** end record declaration ***/
mu_1_TDeduction mu_1_TDeduction_undefined_var;

class mu_1_Channel
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_Message mu_msg;
  mu_1_AgentType mu_sender;
  mu_1_AgentType mu_receiver;
  mu_0_boolean mu_empty;
  mu_1_Channel ( const char *n, int os ) { set_self(n,os); };
  mu_1_Channel ( void ) {};

  virtual ~mu_1_Channel(); 
friend int CompareWeight(mu_1_Channel& a, mu_1_Channel& b)
  {
    int w;
    w = CompareWeight(a.mu_msg, b.mu_msg);
    if (w!=0) return w;
    w = CompareWeight(a.mu_sender, b.mu_sender);
    if (w!=0) return w;
    w = CompareWeight(a.mu_receiver, b.mu_receiver);
    if (w!=0) return w;
    w = CompareWeight(a.mu_empty, b.mu_empty);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_Channel& a, mu_1_Channel& b)
  {
    int w;
    w = Compare(a.mu_msg, b.mu_msg);
    if (w!=0) return w;
    w = Compare(a.mu_sender, b.mu_sender);
    if (w!=0) return w;
    w = Compare(a.mu_receiver, b.mu_receiver);
    if (w!=0) return w;
    w = Compare(a.mu_empty, b.mu_empty);
    if (w!=0) return w;
  return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    mu_msg.MultisetSort();
    mu_sender.MultisetSort();
    mu_receiver.MultisetSort();
    mu_empty.MultisetSort();
  }
  void print_statistic()
  {
    mu_msg.print_statistic();
    mu_sender.print_statistic();
    mu_receiver.print_statistic();
    mu_empty.print_statistic();
  }
  void clear() {
    mu_msg.clear();
    mu_sender.clear();
    mu_receiver.clear();
    mu_empty.clear();
 };
  void undefine() {
    mu_msg.undefine();
    mu_sender.undefine();
    mu_receiver.undefine();
    mu_empty.undefine();
 };
  void reset() {
    mu_msg.reset();
    mu_sender.reset();
    mu_receiver.reset();
    mu_empty.reset();
 };
  void print() {
    mu_msg.print();
    mu_sender.print();
    mu_receiver.print();
    mu_empty.print();
  };
  void print_diff(state *prevstate) {
    mu_msg.print_diff(prevstate);
    mu_sender.print_diff(prevstate);
    mu_receiver.print_diff(prevstate);
    mu_empty.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_msg.to_state(thestate);
    mu_sender.to_state(thestate);
    mu_receiver.to_state(thestate);
    mu_empty.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_Channel& operator= (const mu_1_Channel& from) {
    mu_msg = from.mu_msg;
    mu_sender.value(from.mu_sender.value());
    mu_receiver.value(from.mu_receiver.value());
    mu_empty.value(from.mu_empty.value());
    return *this;
  };
};

  void mu_1_Channel::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_Channel::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_Channel::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_msg.set_self_2(name, ".msg", os + 0 ); else mu_msg.set_self_2(NULL, NULL, 0);
  if (name) mu_sender.set_self_2(name, ".sender", os + 88 ); else mu_sender.set_self_2(NULL, NULL, 0);
  if (name) mu_receiver.set_self_2(name, ".receiver", os + 96 ); else mu_receiver.set_self_2(NULL, NULL, 0);
  if (name) mu_empty.set_self_2(name, ".empty", os + 104 ); else mu_empty.set_self_2(NULL, NULL, 0);
}

mu_1_Channel::~mu_1_Channel()
{
}

/*** end record declaration ***/
mu_1_Channel mu_1_Channel_undefined_var;

class mu_1_RoleInit
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_AgentType mu_A;
  mu_1_AgentType mu_B;
  mu_1_NonceType mu_Na;
  mu_1_AliceStatus mu_st;
  mu_1_RoleInit ( const char *n, int os ) { set_self(n,os); };
  mu_1_RoleInit ( void ) {};

  virtual ~mu_1_RoleInit(); 
friend int CompareWeight(mu_1_RoleInit& a, mu_1_RoleInit& b)
  {
    int w;
    w = CompareWeight(a.mu_A, b.mu_A);
    if (w!=0) return w;
    w = CompareWeight(a.mu_B, b.mu_B);
    if (w!=0) return w;
    w = CompareWeight(a.mu_Na, b.mu_Na);
    if (w!=0) return w;
    w = CompareWeight(a.mu_st, b.mu_st);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_RoleInit& a, mu_1_RoleInit& b)
  {
    int w;
    w = Compare(a.mu_A, b.mu_A);
    if (w!=0) return w;
    w = Compare(a.mu_B, b.mu_B);
    if (w!=0) return w;
    w = Compare(a.mu_Na, b.mu_Na);
    if (w!=0) return w;
    w = Compare(a.mu_st, b.mu_st);
    if (w!=0) return w;
  return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    mu_A.MultisetSort();
    mu_B.MultisetSort();
    mu_Na.MultisetSort();
    mu_st.MultisetSort();
  }
  void print_statistic()
  {
    mu_A.print_statistic();
    mu_B.print_statistic();
    mu_Na.print_statistic();
    mu_st.print_statistic();
  }
  void clear() {
    mu_A.clear();
    mu_B.clear();
    mu_Na.clear();
    mu_st.clear();
 };
  void undefine() {
    mu_A.undefine();
    mu_B.undefine();
    mu_Na.undefine();
    mu_st.undefine();
 };
  void reset() {
    mu_A.reset();
    mu_B.reset();
    mu_Na.reset();
    mu_st.reset();
 };
  void print() {
    mu_A.print();
    mu_B.print();
    mu_Na.print();
    mu_st.print();
  };
  void print_diff(state *prevstate) {
    mu_A.print_diff(prevstate);
    mu_B.print_diff(prevstate);
    mu_Na.print_diff(prevstate);
    mu_st.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_A.to_state(thestate);
    mu_B.to_state(thestate);
    mu_Na.to_state(thestate);
    mu_st.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_RoleInit& operator= (const mu_1_RoleInit& from) {
    mu_A.value(from.mu_A.value());
    mu_B.value(from.mu_B.value());
    mu_Na.value(from.mu_Na.value());
    mu_st.value(from.mu_st.value());
    return *this;
  };
};

  void mu_1_RoleInit::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_RoleInit::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_RoleInit::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_A.set_self_2(name, ".A", os + 0 ); else mu_A.set_self_2(NULL, NULL, 0);
  if (name) mu_B.set_self_2(name, ".B", os + 8 ); else mu_B.set_self_2(NULL, NULL, 0);
  if (name) mu_Na.set_self_2(name, ".Na", os + 16 ); else mu_Na.set_self_2(NULL, NULL, 0);
  if (name) mu_st.set_self_2(name, ".st", os + 24 ); else mu_st.set_self_2(NULL, NULL, 0);
}

mu_1_RoleInit::~mu_1_RoleInit()
{
}

/*** end record declaration ***/
mu_1_RoleInit mu_1_RoleInit_undefined_var;

class mu_1_RoleResp
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_AgentType mu_B;
  mu_1_NonceType mu_Nb;
  mu_1_BobStatus mu_st;
  mu_1_RoleResp ( const char *n, int os ) { set_self(n,os); };
  mu_1_RoleResp ( void ) {};

  virtual ~mu_1_RoleResp(); 
friend int CompareWeight(mu_1_RoleResp& a, mu_1_RoleResp& b)
  {
    int w;
    w = CompareWeight(a.mu_B, b.mu_B);
    if (w!=0) return w;
    w = CompareWeight(a.mu_Nb, b.mu_Nb);
    if (w!=0) return w;
    w = CompareWeight(a.mu_st, b.mu_st);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_RoleResp& a, mu_1_RoleResp& b)
  {
    int w;
    w = Compare(a.mu_B, b.mu_B);
    if (w!=0) return w;
    w = Compare(a.mu_Nb, b.mu_Nb);
    if (w!=0) return w;
    w = Compare(a.mu_st, b.mu_st);
    if (w!=0) return w;
  return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    mu_B.MultisetSort();
    mu_Nb.MultisetSort();
    mu_st.MultisetSort();
  }
  void print_statistic()
  {
    mu_B.print_statistic();
    mu_Nb.print_statistic();
    mu_st.print_statistic();
  }
  void clear() {
    mu_B.clear();
    mu_Nb.clear();
    mu_st.clear();
 };
  void undefine() {
    mu_B.undefine();
    mu_Nb.undefine();
    mu_st.undefine();
 };
  void reset() {
    mu_B.reset();
    mu_Nb.reset();
    mu_st.reset();
 };
  void print() {
    mu_B.print();
    mu_Nb.print();
    mu_st.print();
  };
  void print_diff(state *prevstate) {
    mu_B.print_diff(prevstate);
    mu_Nb.print_diff(prevstate);
    mu_st.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_B.to_state(thestate);
    mu_Nb.to_state(thestate);
    mu_st.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_RoleResp& operator= (const mu_1_RoleResp& from) {
    mu_B.value(from.mu_B.value());
    mu_Nb.value(from.mu_Nb.value());
    mu_st.value(from.mu_st.value());
    return *this;
  };
};

  void mu_1_RoleResp::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_RoleResp::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_RoleResp::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_B.set_self_2(name, ".B", os + 0 ); else mu_B.set_self_2(NULL, NULL, 0);
  if (name) mu_Nb.set_self_2(name, ".Nb", os + 8 ); else mu_Nb.set_self_2(NULL, NULL, 0);
  if (name) mu_st.set_self_2(name, ".st", os + 16 ); else mu_st.set_self_2(NULL, NULL, 0);
}

mu_1_RoleResp::~mu_1_RoleResp()
{
}

/*** end record declaration ***/
mu_1_RoleResp mu_1_RoleResp_undefined_var;

class mu_1_RoleindexTyperuder
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_indexTyperuderStatus mu_st;
  mu_1_RoleindexTyperuder ( const char *n, int os ) { set_self(n,os); };
  mu_1_RoleindexTyperuder ( void ) {};

  virtual ~mu_1_RoleindexTyperuder(); 
friend int CompareWeight(mu_1_RoleindexTyperuder& a, mu_1_RoleindexTyperuder& b)
  {
    int w;
    w = CompareWeight(a.mu_st, b.mu_st);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_RoleindexTyperuder& a, mu_1_RoleindexTyperuder& b)
  {
    int w;
    w = Compare(a.mu_st, b.mu_st);
    if (w!=0) return w;
  return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    mu_st.MultisetSort();
  }
  void print_statistic()
  {
    mu_st.print_statistic();
  }
  void clear() {
    mu_st.clear();
 };
  void undefine() {
    mu_st.undefine();
 };
  void reset() {
    mu_st.reset();
 };
  void print() {
    mu_st.print();
  };
  void print_diff(state *prevstate) {
    mu_st.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_st.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_RoleindexTyperuder& operator= (const mu_1_RoleindexTyperuder& from) {
    mu_st.value(from.mu_st.value());
    return *this;
  };
};

  void mu_1_RoleindexTyperuder::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_RoleindexTyperuder::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_RoleindexTyperuder::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_st.set_self_2(name, ".st", os + 0 ); else mu_st.set_self_2(NULL, NULL, 0);
}

mu_1_RoleindexTyperuder::~mu_1_RoleindexTyperuder()
{
}

/*** end record declaration ***/
mu_1_RoleindexTyperuder mu_1_RoleindexTyperuder_undefined_var;

class mu_1_Event
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_0_boolean mu_send;
  mu_1_AgentType mu_sender;
  mu_1_AgentType mu_receiver;
  mu_1_NonceType mu_nonce;
  mu_1_Event ( const char *n, int os ) { set_self(n,os); };
  mu_1_Event ( void ) {};

  virtual ~mu_1_Event(); 
friend int CompareWeight(mu_1_Event& a, mu_1_Event& b)
  {
    int w;
    w = CompareWeight(a.mu_send, b.mu_send);
    if (w!=0) return w;
    w = CompareWeight(a.mu_sender, b.mu_sender);
    if (w!=0) return w;
    w = CompareWeight(a.mu_receiver, b.mu_receiver);
    if (w!=0) return w;
    w = CompareWeight(a.mu_nonce, b.mu_nonce);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_Event& a, mu_1_Event& b)
  {
    int w;
    w = Compare(a.mu_send, b.mu_send);
    if (w!=0) return w;
    w = Compare(a.mu_sender, b.mu_sender);
    if (w!=0) return w;
    w = Compare(a.mu_receiver, b.mu_receiver);
    if (w!=0) return w;
    w = Compare(a.mu_nonce, b.mu_nonce);
    if (w!=0) return w;
  return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    mu_send.MultisetSort();
    mu_sender.MultisetSort();
    mu_receiver.MultisetSort();
    mu_nonce.MultisetSort();
  }
  void print_statistic()
  {
    mu_send.print_statistic();
    mu_sender.print_statistic();
    mu_receiver.print_statistic();
    mu_nonce.print_statistic();
  }
  void clear() {
    mu_send.clear();
    mu_sender.clear();
    mu_receiver.clear();
    mu_nonce.clear();
 };
  void undefine() {
    mu_send.undefine();
    mu_sender.undefine();
    mu_receiver.undefine();
    mu_nonce.undefine();
 };
  void reset() {
    mu_send.reset();
    mu_sender.reset();
    mu_receiver.reset();
    mu_nonce.reset();
 };
  void print() {
    mu_send.print();
    mu_sender.print();
    mu_receiver.print();
    mu_nonce.print();
  };
  void print_diff(state *prevstate) {
    mu_send.print_diff(prevstate);
    mu_sender.print_diff(prevstate);
    mu_receiver.print_diff(prevstate);
    mu_nonce.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_send.to_state(thestate);
    mu_sender.to_state(thestate);
    mu_receiver.to_state(thestate);
    mu_nonce.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_Event& operator= (const mu_1_Event& from) {
    mu_send.value(from.mu_send.value());
    mu_sender.value(from.mu_sender.value());
    mu_receiver.value(from.mu_receiver.value());
    mu_nonce.value(from.mu_nonce.value());
    return *this;
  };
};

  void mu_1_Event::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_Event::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_Event::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_send.set_self_2(name, ".send", os + 0 ); else mu_send.set_self_2(NULL, NULL, 0);
  if (name) mu_sender.set_self_2(name, ".sender", os + 8 ); else mu_sender.set_self_2(NULL, NULL, 0);
  if (name) mu_receiver.set_self_2(name, ".receiver", os + 16 ); else mu_receiver.set_self_2(NULL, NULL, 0);
  if (name) mu_nonce.set_self_2(name, ".nonce", os + 24 ); else mu_nonce.set_self_2(NULL, NULL, 0);
}

mu_1_Event::~mu_1_Event()
{
}

/*** end record declaration ***/
mu_1_Event mu_1_Event_undefined_var;

class mu_1__type_0
{
 public:
  mu_1_Channel array[ 3 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_0 (const char *n, int os) { set_self(n, os); };
  mu_1__type_0 ( void ) {};
  virtual ~mu_1__type_0 ();
  mu_1_Channel& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 3 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_0& operator= (const mu_1__type_0& from)
  {
    for (int i = 0; i < 3; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_0& a, mu_1__type_0& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_0& a, mu_1__type_0& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<3; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<3; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 3; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 3; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 3; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 3; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 3; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 3; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_0::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_0::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_0::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 3; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 112 + os);
    delete[] s;
  }
};
mu_1__type_0::~mu_1__type_0()
{
}
/*** end array declaration ***/
mu_1__type_0 mu_1__type_0_undefined_var;

class mu_1__type_1
{
 public:
  mu_1_RoleInit array[ 1 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_1 (const char *n, int os) { set_self(n, os); };
  mu_1__type_1 ( void ) {};
  virtual ~mu_1__type_1 ();
  mu_1_RoleInit& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 1 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_1& operator= (const mu_1__type_1& from)
  {
      array[0] = from.array[0];
    return *this;
  }

friend int CompareWeight(mu_1__type_1& a, mu_1__type_1& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_1& a, mu_1__type_1& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<1; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<1; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 1; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 1; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 1; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 1; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 1; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 1; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_1::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_1::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_1::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 1; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 32 + os);
    delete[] s;
  }
};
mu_1__type_1::~mu_1__type_1()
{
}
/*** end array declaration ***/
mu_1__type_1 mu_1__type_1_undefined_var;

class mu_1__type_2
{
 public:
  mu_1_RoleResp array[ 1 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_2 (const char *n, int os) { set_self(n, os); };
  mu_1__type_2 ( void ) {};
  virtual ~mu_1__type_2 ();
  mu_1_RoleResp& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 1 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_2& operator= (const mu_1__type_2& from)
  {
      array[0] = from.array[0];
    return *this;
  }

friend int CompareWeight(mu_1__type_2& a, mu_1__type_2& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_2& a, mu_1__type_2& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<1; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<1; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 1; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 1; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 1; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 1; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 1; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 1; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_2::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_2::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_2::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 1; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 24 + os);
    delete[] s;
  }
};
mu_1__type_2::~mu_1__type_2()
{
}
/*** end array declaration ***/
mu_1__type_2 mu_1__type_2_undefined_var;

class mu_1__type_3
{
 public:
  mu_1_Message array[ 201 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_3 (const char *n, int os) { set_self(n, os); };
  mu_1__type_3 ( void ) {};
  virtual ~mu_1__type_3 ();
  mu_1_Message& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 0 ) && ( index <= 200 ) )
      return array[ index - 0 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 0 ];
#endif
  };
  mu_1__type_3& operator= (const mu_1__type_3& from)
  {
    for (int i = 0; i < 201; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_3& a, mu_1__type_3& b)
  {
    int w;
    for (int i=0; i<201; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_3& a, mu_1__type_3& b)
  {
    int w;
    for (int i=0; i<201; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<201; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<201; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 201; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 201; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 201; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 201; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 201; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 201; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_3::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_3::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_3::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 201; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 88 + os);
    delete[] s;
  }
};
mu_1__type_3::~mu_1__type_3()
{
}
/*** end array declaration ***/
mu_1__type_3 mu_1__type_3_undefined_var;

class mu_1__type_4: public mu__long
{
 public:
  inline int operator=(int val) { return mu__long::operator=(val); };
  inline int operator=(const mu_1__type_4& val) { return mu__long::operator=((int) val); };
  mu_1__type_4 (const char *name, int os): mu__long(0, 400, 9, name, os) {};
  mu_1__type_4 (void): mu__long(0, 400, 9) {};
  mu_1__type_4 (int val): mu__long(0, 400, 9, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1__type_4 mu_1__type_4_undefined_var;

class mu_1__type_5: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1__type_5& val) { return mu__byte::operator=((int) val); };
  mu_1__type_5 (const char *name, int os): mu__byte(0, 50, 6, name, os) {};
  mu_1__type_5 (void): mu__byte(0, 50, 6) {};
  mu_1__type_5 (int val): mu__byte(0, 50, 6, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1__type_5 mu_1__type_5_undefined_var;

class mu_1__type_6
{
 public:
  mu_0_boolean array[ 200 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_6 (const char *n, int os) { set_self(n, os); };
  mu_1__type_6 ( void ) {};
  virtual ~mu_1__type_6 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 200 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_6& operator= (const mu_1__type_6& from)
  {
    for (int i = 0; i < 200; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_6& a, mu_1__type_6& b)
  {
    int w;
    for (int i=0; i<200; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_6& a, mu_1__type_6& b)
  {
    int w;
    for (int i=0; i<200; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<200; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<200; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 200; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 200; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 200; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 200; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 200; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 200; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_6::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_6::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_6::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 200; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 8 + os);
    delete[] s;
  }
};
mu_1__type_6::~mu_1__type_6()
{
}
/*** end array declaration ***/
mu_1__type_6 mu_1__type_6_undefined_var;

class mu_1__type_7
{
 public:
  mu_0_boolean array[ 200 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_7 (const char *n, int os) { set_self(n, os); };
  mu_1__type_7 ( void ) {};
  virtual ~mu_1__type_7 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 200 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_7& operator= (const mu_1__type_7& from)
  {
    for (int i = 0; i < 200; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_7& a, mu_1__type_7& b)
  {
    int w;
    for (int i=0; i<200; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_7& a, mu_1__type_7& b)
  {
    int w;
    for (int i=0; i<200; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<200; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<200; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 200; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 200; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 200; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 200; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 200; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 200; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_7::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_7::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_7::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 200; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 8 + os);
    delete[] s;
  }
};
mu_1__type_7::~mu_1__type_7()
{
}
/*** end array declaration ***/
mu_1__type_7 mu_1__type_7_undefined_var;

class mu_1__type_8
{
 public:
  mu_1_TDeduction array[ 400 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_8 (const char *n, int os) { set_self(n, os); };
  mu_1__type_8 ( void ) {};
  virtual ~mu_1__type_8 ();
  mu_1_TDeduction& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 400 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_8& operator= (const mu_1__type_8& from)
  {
    for (int i = 0; i < 400; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_8& a, mu_1__type_8& b)
  {
    int w;
    for (int i=0; i<400; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_8& a, mu_1__type_8& b)
  {
    int w;
    for (int i=0; i<400; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<400; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<400; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 400; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 400; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 400; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 400; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 400; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 400; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_8::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_8::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_8::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 400; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 40 + os);
    delete[] s;
  }
};
mu_1__type_8::~mu_1__type_8()
{
}
/*** end array declaration ***/
mu_1__type_8 mu_1__type_8_undefined_var;

class mu_1__type_9
{
 public:
  mu_1_indexType array[ 200 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_9 (const char *n, int os) { set_self(n, os); };
  mu_1__type_9 ( void ) {};
  virtual ~mu_1__type_9 ();
  mu_1_indexType& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 200 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_9& operator= (const mu_1__type_9& from)
  {
    for (int i = 0; i < 200; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_9& a, mu_1__type_9& b)
  {
    int w;
    for (int i=0; i<200; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_9& a, mu_1__type_9& b)
  {
    int w;
    for (int i=0; i<200; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<200; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<200; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 200; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 200; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 200; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 200; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 200; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 200; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_9::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_9::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_9::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 200; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 8 + os);
    delete[] s;
  }
};
mu_1__type_9::~mu_1__type_9()
{
}
/*** end array declaration ***/
mu_1__type_9 mu_1__type_9_undefined_var;

class mu_1__type_10
{
 public:
  mu_1_indexType array[ 200 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_10 (const char *n, int os) { set_self(n, os); };
  mu_1__type_10 ( void ) {};
  virtual ~mu_1__type_10 ();
  mu_1_indexType& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 200 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_10& operator= (const mu_1__type_10& from)
  {
    for (int i = 0; i < 200; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_10& a, mu_1__type_10& b)
  {
    int w;
    for (int i=0; i<200; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_10& a, mu_1__type_10& b)
  {
    int w;
    for (int i=0; i<200; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<200; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<200; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 200; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 200; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 200; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 200; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 200; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 200; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_10::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_10::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_10::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 200; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 8 + os);
    delete[] s;
  }
};
mu_1__type_10::~mu_1__type_10()
{
}
/*** end array declaration ***/
mu_1__type_10 mu_1__type_10_undefined_var;

class mu_1__type_11
{
 public:
  mu_1_indexType array[ 200 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_11 (const char *n, int os) { set_self(n, os); };
  mu_1__type_11 ( void ) {};
  virtual ~mu_1__type_11 ();
  mu_1_indexType& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 200 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_11& operator= (const mu_1__type_11& from)
  {
    for (int i = 0; i < 200; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_11& a, mu_1__type_11& b)
  {
    int w;
    for (int i=0; i<200; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_11& a, mu_1__type_11& b)
  {
    int w;
    for (int i=0; i<200; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<200; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<200; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 200; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 200; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 200; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 200; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 200; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 200; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_11::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_11::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_11::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 200; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 8 + os);
    delete[] s;
  }
};
mu_1__type_11::~mu_1__type_11()
{
}
/*** end array declaration ***/
mu_1__type_11 mu_1__type_11_undefined_var;

class mu_1__type_12
{
 public:
  mu_1_indexType array[ 200 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_12 (const char *n, int os) { set_self(n, os); };
  mu_1__type_12 ( void ) {};
  virtual ~mu_1__type_12 ();
  mu_1_indexType& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 200 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_12& operator= (const mu_1__type_12& from)
  {
    for (int i = 0; i < 200; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_12& a, mu_1__type_12& b)
  {
    int w;
    for (int i=0; i<200; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_12& a, mu_1__type_12& b)
  {
    int w;
    for (int i=0; i<200; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<200; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<200; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 200; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 200; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 200; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 200; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 200; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 200; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_12::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_12::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_12::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 200; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 8 + os);
    delete[] s;
  }
};
mu_1__type_12::~mu_1__type_12()
{
}
/*** end array declaration ***/
mu_1__type_12 mu_1__type_12_undefined_var;

class mu_1__type_13
{
 public:
  mu_1_indexType array[ 200 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_13 (const char *n, int os) { set_self(n, os); };
  mu_1__type_13 ( void ) {};
  virtual ~mu_1__type_13 ();
  mu_1_indexType& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 200 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_13& operator= (const mu_1__type_13& from)
  {
    for (int i = 0; i < 200; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_13& a, mu_1__type_13& b)
  {
    int w;
    for (int i=0; i<200; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_13& a, mu_1__type_13& b)
  {
    int w;
    for (int i=0; i<200; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<200; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<200; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 200; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 200; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 200; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 200; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 200; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 200; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_13::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_13::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_13::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 200; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 8 + os);
    delete[] s;
  }
};
mu_1__type_13::~mu_1__type_13()
{
}
/*** end array declaration ***/
mu_1__type_13 mu_1__type_13_undefined_var;

class mu_1__type_14
{
 public:
  mu_1_Event array[ 50 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_14 (const char *n, int os) { set_self(n, os); };
  mu_1__type_14 ( void ) {};
  virtual ~mu_1__type_14 ();
  mu_1_Event& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 50 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_14& operator= (const mu_1__type_14& from)
  {
    for (int i = 0; i < 50; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_14& a, mu_1__type_14& b)
  {
    int w;
    for (int i=0; i<50; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_14& a, mu_1__type_14& b)
  {
    int w;
    for (int i=0; i<50; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<50; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<50; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 50; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 50; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 50; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 50; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 50; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 50; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_14::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_14::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_14::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 50; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 32 + os);
    delete[] s;
  }
};
mu_1__type_14::~mu_1__type_14()
{
}
/*** end array declaration ***/
mu_1__type_14 mu_1__type_14_undefined_var;

const int mu_aliceNum = 1;
const int mu_bobNum = 1;
const int mu_total_fact = 200;
const int mu_deductionsNum = 400;
const int mu_msgpassingNum = 3;
const int mu_eventNum = 50;
const int mu_Alice = 1;
const int mu_Bob = 2;
const int mu_indexTyperuder_ = 3;
const int mu_Na = 4;
const int mu_Na1 = 5;
const int mu_Nb = 6;
const int mu_Nb1 = 7;
const int mu_PK = 8;
const int mu_SK = 9;
const int mu_SymK = 10;
const int mu_A1 = 11;
const int mu_A2 = 12;
const int mu_A3 = 13;
const int mu_B1 = 14;
const int mu_B2 = 15;
const int mu_B3 = 16;
const int mu_waiting = 17;
const int mu_getmsg1 = 18;
const int mu_getmsg2 = 19;
const int mu_getmsg3 = 20;
const int mu_emitting1 = 21;
const int mu_emitting2 = 22;
const int mu_emitting3 = 23;
const int mu_null = 24;
const int mu_agent = 25;
const int mu_nonce = 26;
const int mu_key = 27;
const int mu_aenc = 28;
const int mu_senc = 29;
const int mu_concat = 30;
const int mu_hash = 31;
const int mu_encryptDed = 32;
const int mu_decrypt = 33;
const int mu_enpairDed = 34;
const int mu_depairDed = 35;
/*** Variable declaration ***/
mu_1__type_0 mu_ch("ch",0);

/*** Variable declaration ***/
mu_1__type_1 mu_alices("alices",336);

/*** Variable declaration ***/
mu_1__type_2 mu_bobs("bobs",368);

/*** Variable declaration ***/
mu_1_RoleindexTyperuder mu_indexTyperuder("indexTyperuder",392);

/*** Variable declaration ***/
mu_1__type_3 mu_msgs("msgs",400);

/*** Variable declaration ***/
mu_1_indexType mu_msg_end("msg_end",18088);

/*** Variable declaration ***/
mu_1__type_4 mu_ded_end("ded_end",18096);

/*** Variable declaration ***/
mu_1__type_5 mu_eve_end("eve_end",18128);

/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",18136);

/*** Variable declaration ***/
mu_1_TDeduction mu_de1("de1",18224);

/*** Variable declaration ***/
mu_1__type_6 mu_Spy_known("Spy_known",18264);

/*** Variable declaration ***/
mu_1__type_7 mu_emit("emit",19864);

/*** Variable declaration ***/
mu_1_KeyType mu_KEY("KEY",21464);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",21480);

/*** Variable declaration ***/
mu_1_Event mu_eve("eve",21568);

/*** Variable declaration ***/
mu_1_indexType mu_endn("endn",21600);

/*** Variable declaration ***/
mu_1_indexType mu_end1("end1",21608);

/*** Variable declaration ***/
mu_1_indexType mu_end2("end2",21616);

/*** Variable declaration ***/
mu_1__type_8 mu_Deductions("Deductions",21624);

/*** Variable declaration ***/
mu_1__type_9 mu_allMsgs("allMsgs",37624);

/*** Variable declaration ***/
mu_1__type_10 mu_allMsg1s("allMsg1s",39224);

/*** Variable declaration ***/
mu_1__type_11 mu_allMsg2s("allMsg2s",40824);

/*** Variable declaration ***/
mu_1__type_12 mu_allMsg3s("allMsg3s",42424);

/*** Variable declaration ***/
mu_1__type_13 mu_allMsg4s("allMsg4s",44024);

/*** Variable declaration ***/
mu_1_indexType mu_allMsgnum1("allMsgnum1",45624);

/*** Variable declaration ***/
mu_1_indexType mu_allMsgnum2("allMsgnum2",45632);

/*** Variable declaration ***/
mu_1_indexType mu_allMsgnum3("allMsgnum3",45640);

/*** Variable declaration ***/
mu_1__type_14 mu_systemEvent("systemEvent",45648);

void mu_findeve(const mu_1_AgentType& mu_S, const mu_1_AgentType& mu_R, const mu_1_NonceType& mu_N)
{
{
for(int mu_i = 1; mu_i <= 50; mu_i++) {
if ( (mu_systemEvent[mu_i].mu_send) == (mu_false) )
{
bool mu__boolexpr15;
bool mu__boolexpr16;
  if (!((mu_systemEvent[mu_i].mu_sender) == (mu_S))) mu__boolexpr16 = FALSE ;
  else {
  mu__boolexpr16 = ((mu_systemEvent[mu_i].mu_receiver) == (mu_R)) ; 
}
  if (!(mu__boolexpr16)) mu__boolexpr15 = FALSE ;
  else {
  mu__boolexpr15 = ((mu_systemEvent[mu_i].mu_nonce) == (mu_N)) ; 
}
if ( mu__boolexpr15 )
{
mu_systemEvent[mu_i].mu_send = mu_true;
}
else
{
mu_eve_end = (mu_eve_end) + (1);
if (mu_S.isundefined())
  mu_systemEvent[mu_eve_end].mu_sender.undefine();
else
  mu_systemEvent[mu_eve_end].mu_sender = mu_S;
if (mu_R.isundefined())
  mu_systemEvent[mu_eve_end].mu_receiver.undefine();
else
  mu_systemEvent[mu_eve_end].mu_receiver = mu_R;
if (mu_N.isundefined())
  mu_systemEvent[mu_eve_end].mu_nonce.undefine();
else
  mu_systemEvent[mu_eve_end].mu_nonce = mu_N;
mu_systemEvent[mu_eve_end].mu_send = mu_true;
}
}
};
};
};
/*** end procedure declaration ***/

void mu_lookup(mu_1_Message& mu_msg, mu_1_indexType& mu_index)
{
mu_index = 0;
{
for(int mu_i = 1; mu_i <= 200; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_msg.mu_msgType) )
{
if ( (mu_msgs[mu_i].mu_msgType) == (mu_agent) )
{
if ( (mu_msgs[mu_i].mu_ag) == (mu_msg.mu_ag) )
{
mu_index = mu_i;
}
}
else
{
if ( (mu_msgs[mu_i].mu_msgType) == (mu_nonce) )
{
if ( (mu_msgs[mu_i].mu_noncePart) == (mu_msg.mu_noncePart) )
{
mu_index = mu_i;
}
}
else
{
if ( (mu_msgs[mu_i].mu_msgType) == (mu_key) )
{
bool mu__boolexpr17;
  if (!((mu_msgs[mu_i].mu_k.mu_encTyp) == (mu_msg.mu_k.mu_encTyp))) mu__boolexpr17 = FALSE ;
  else {
  mu__boolexpr17 = ((mu_msgs[mu_i].mu_k.mu_ag) == (mu_msg.mu_k.mu_ag)) ; 
}
if ( mu__boolexpr17 )
{
mu_index = mu_i;
}
}
else
{
if ( (mu_msgs[mu_i].mu_msgType) == (mu_aenc) )
{
bool mu__boolexpr18;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_msg.mu_aencMsg))) mu__boolexpr18 = FALSE ;
  else {
  mu__boolexpr18 = ((mu_msgs[mu_i].mu_aencKey) == (mu_msg.mu_aencKey)) ; 
}
if ( mu__boolexpr18 )
{
mu_index = mu_i;
}
}
else
{
if ( (mu_msgs[mu_i].mu_msgType) == (mu_senc) )
{
bool mu__boolexpr19;
  if (!((mu_msgs[mu_i].mu_sencMsg) == (mu_msg.mu_sencMsg))) mu__boolexpr19 = FALSE ;
  else {
  mu__boolexpr19 = ((mu_msgs[mu_i].mu_sencKey) == (mu_msg.mu_sencKey)) ; 
}
if ( mu__boolexpr19 )
{
mu_index = mu_i;
}
}
else
{
if ( (mu_msgs[mu_i].mu_msgType) == (mu_concat) )
{
bool mu__boolexpr20;
  if (!((mu_msgs[mu_i].mu_concatPart1) == (mu_msg.mu_concatPart1))) mu__boolexpr20 = FALSE ;
  else {
  mu__boolexpr20 = ((mu_msgs[mu_i].mu_concatPart2) == (mu_msg.mu_concatPart2)) ; 
}
if ( mu__boolexpr20 )
{
mu_index = mu_i;
}
}
}
}
}
}
}
}
};
};
};
/*** end procedure declaration ***/

void mu_lookAdd(mu_1_Message& mu_msg, mu_1_indexType& mu_index)
{
mu_lookup ( mu_msg, mu_index );
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
mu_msgs[mu_msg_end] = mu_msg;
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
}
};
/*** end procedure declaration ***/

void mu_replace(mu_1_Message& mu_msg)
{
/*** Variable declaration ***/
mu_1_indexType mu_n1("n1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg0("msg0",8);

/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",96);

/*** Variable declaration ***/
mu_1_Message mu_msg2("msg2",184);

mu_endn = 0;
{
for(int mu_i = 1; mu_i <= 200; mu_i++) {
mu_allMsgs[mu_i] = 0;
};
};
if ( (mu_msg.mu_msgType) == (mu_agent) )
{
{
for(int mu_i = 1; mu_i <= 200; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_agent) )
{
mu_endn = (mu_endn) + (1);
mu_allMsgs[mu_endn] = mu_i;
}
};
};
}
else
{
if ( (mu_msg.mu_msgType) == (mu_nonce) )
{
{
for(int mu_i = 1; mu_i <= 200; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_nonce) )
{
mu_endn = (mu_endn) + (1);
mu_allMsgs[mu_endn] = mu_i;
}
};
};
}
else
{
if ( (mu_msg.mu_msgType) == (mu_key) )
{
{
for(int mu_i = 1; mu_i <= 200; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_key) )
{
mu_endn = (mu_endn) + (1);
mu_allMsgs[mu_endn] = mu_i;
}
};
};
}
else
{
if ( (mu_msg.mu_msgType) == (mu_aenc) )
{
mu_msg1 = mu_msgs[mu_msg.mu_aencKey];
mu_msg2 = mu_msgs[mu_msg.mu_aencMsg];
mu_replace ( mu_msg1 );
if (mu_endn.isundefined())
  mu_end1.undefine();
else
  mu_end1 = mu_endn;
{
for(int mu_i = 1; mu_i <= 200; mu_i++) {
mu_allMsg1s[mu_i] = mu_allMsgs[mu_i];
};
};
mu_replace ( mu_msg2 );
if (mu_endn.isundefined())
  mu_end2.undefine();
else
  mu_end2 = mu_endn;
{
for(int mu_i = 1; mu_i <= 200; mu_i++) {
mu_allMsg2s[mu_i] = mu_allMsgs[mu_i];
};
};
mu_endn = 0;
{
for(int mu_i = 1; mu_i <= 200; mu_i++) {
mu_allMsgs[mu_i] = 0;
};
};
{
for(int mu_i = 1; mu_i <= 200; mu_i++) {
{
for(int mu_j = 1; mu_j <= 200; mu_j++) {
bool mu__boolexpr21;
  if (!((mu_i) < ((mu_end1) + (1)))) mu__boolexpr21 = FALSE ;
  else {
  mu__boolexpr21 = ((mu_j) < ((mu_end2) + (1))) ; 
}
if ( mu__boolexpr21 )
{
mu_msg0.mu_msgType = mu_aenc;
mu_msg0.mu_aencKey = mu_allMsg1s[mu_i];
mu_msg0.mu_aencMsg = mu_allMsg2s[mu_j];
mu_lookAdd ( mu_msg0, mu_n1 );
mu_endn = (mu_endn) + (1);
if (mu_n1.isundefined())
  mu_allMsgs[mu_endn].undefine();
else
  mu_allMsgs[mu_endn] = mu_n1;
}
};
};
};
};
}
else
{
if ( (mu_msg.mu_msgType) == (mu_concat) )
{
mu_msg1 = mu_msgs[mu_msg.mu_concatPart1];
mu_msg2 = mu_msgs[mu_msg.mu_concatPart2];
mu_replace ( mu_msg1 );
if (mu_endn.isundefined())
  mu_end1.undefine();
else
  mu_end1 = mu_endn;
{
for(int mu_i = 1; mu_i <= 200; mu_i++) {
mu_allMsg3s[mu_i] = mu_allMsgs[mu_i];
};
};
mu_replace ( mu_msg2 );
if (mu_endn.isundefined())
  mu_end2.undefine();
else
  mu_end2 = mu_endn;
{
for(int mu_i = 1; mu_i <= 200; mu_i++) {
mu_allMsg4s[mu_i] = mu_allMsgs[mu_i];
};
};
mu_endn = 0;
{
for(int mu_i = 1; mu_i <= 200; mu_i++) {
mu_allMsgs[mu_i] = 0;
};
};
{
for(int mu_i = 1; mu_i <= 200; mu_i++) {
{
for(int mu_j = 1; mu_j <= 200; mu_j++) {
bool mu__boolexpr22;
  if (!((mu_i) < ((mu_end1) + (1)))) mu__boolexpr22 = FALSE ;
  else {
  mu__boolexpr22 = ((mu_j) < ((mu_end2) + (1))) ; 
}
if ( mu__boolexpr22 )
{
mu_msg0.mu_msgType = mu_concat;
mu_msg0.mu_concatPart1 = mu_allMsg3s[mu_i];
mu_msg0.mu_concatPart2 = mu_allMsg4s[mu_j];
mu_lookAdd ( mu_msg0, mu_n1 );
mu_endn = (mu_endn) + (1);
if (mu_n1.isundefined())
  mu_allMsgs[mu_endn].undefine();
else
  mu_allMsgs[mu_endn] = mu_n1;
}
};
};
};
};
}
}
}
}
}
};
/*** end procedure declaration ***/

void mu_inverse(mu_1_Message& mu_msgK, mu_1_Message& mu_msgk)
{
if ( (mu_msgK.mu_msgType) == (mu_key) )
{
mu_msgk.mu_msgType = mu_msgK.mu_msgType;
mu_msgk.mu_k.mu_ag = mu_msgK.mu_k.mu_ag;
mu_msgk.mu_k.mu_encTyp = mu_msgK.mu_k.mu_encTyp;
if ( (mu_msgK.mu_k.mu_encTyp) == (mu_PK) )
{
mu_msgk.mu_k.mu_encTyp = mu_SK;
}
else
{
if ( (mu_msgK.mu_k.mu_encTyp) == (mu_SK) )
{
mu_msgk.mu_k.mu_encTyp = mu_PK;
}
}
}
};
/*** end procedure declaration ***/

void mu_findded(mu_1_TDeduction& mu_ded, mu_0_boolean& mu_find)
{
mu_find = mu_false;
{
for(int mu_i = 1; mu_i <= 400; mu_i++) {
bool mu__boolexpr23;
bool mu__boolexpr24;
bool mu__boolexpr25;
  if (!((mu_Deductions[mu_i].mu_deduceKind) == (mu_ded.mu_deduceKind))) mu__boolexpr25 = FALSE ;
  else {
  mu__boolexpr25 = ((mu_Deductions[mu_i].mu_conclusion) == (mu_ded.mu_conclusion)) ; 
}
  if (!(mu__boolexpr25)) mu__boolexpr24 = FALSE ;
  else {
  mu__boolexpr24 = ((mu_Deductions[mu_i].mu_assumption1) == (mu_ded.mu_assumption1)) ; 
}
  if (!(mu__boolexpr24)) mu__boolexpr23 = FALSE ;
  else {
  mu__boolexpr23 = ((mu_Deductions[mu_i].mu_assumption2) == (mu_ded.mu_assumption2)) ; 
}
if ( mu__boolexpr23 )
{
mu_find = mu_true;
}
};
};
};
/*** end procedure declaration ***/

void mu_addded(mu_1_Message& mu_msg)
{
/*** Variable declaration ***/
mu_1_indexType mu_m1("m1",0);

/*** Variable declaration ***/
mu_1_indexType mu_m2("m2",8);

/*** Variable declaration ***/
mu_1_indexType mu_n1("n1",16);

/*** Variable declaration ***/
mu_1_indexType mu_n2("n2",24);

/*** Variable declaration ***/
mu_1_Message mu_msg0("msg0",32);

/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",120);

/*** Variable declaration ***/
mu_1_Message mu_msg2("msg2",208);

/*** Variable declaration ***/
mu_0_boolean mu_find1("find1",296);

if ( (mu_msg.mu_msgType) == (mu_aenc) )
{
mu_msg1 = mu_msgs[mu_msg.mu_aencKey];
mu_inverse ( mu_msg1, mu_msg0 );
mu_lookAdd ( mu_msg0, mu_n1 );
mu_msg2 = mu_msgs[mu_msg.mu_aencMsg];
mu_lookAdd ( mu_msg1, mu_m1 );
mu_lookAdd ( mu_msg2, mu_m2 );
mu_lookAdd ( mu_msg, mu_n2 );
mu_de1.clear();
mu_de1.mu_deduced = mu_false;
mu_de1.mu_deduceKind = mu_encryptDed;
if (mu_n2.isundefined())
  mu_de1.mu_conclusion.undefine();
else
  mu_de1.mu_conclusion = mu_n2;
if (mu_m1.isundefined())
  mu_de1.mu_assumption1.undefine();
else
  mu_de1.mu_assumption1 = mu_m1;
if (mu_m2.isundefined())
  mu_de1.mu_assumption2.undefine();
else
  mu_de1.mu_assumption2 = mu_m2;
mu_findded ( mu_de1, mu_find1 );
if ( (mu_find1) == (mu_false) )
{
mu_ded_end = (mu_ded_end) + (1);
mu_Deductions[mu_ded_end] = mu_de1;
}
mu_de1.clear();
mu_de1.mu_deduced = mu_false;
mu_de1.mu_deduceKind = mu_decrypt;
if (mu_m2.isundefined())
  mu_de1.mu_conclusion.undefine();
else
  mu_de1.mu_conclusion = mu_m2;
if (mu_n2.isundefined())
  mu_de1.mu_assumption1.undefine();
else
  mu_de1.mu_assumption1 = mu_n2;
if (mu_n1.isundefined())
  mu_de1.mu_assumption2.undefine();
else
  mu_de1.mu_assumption2 = mu_n1;
mu_findded ( mu_de1, mu_find1 );
if ( (mu_find1) == (mu_false) )
{
mu_ded_end = (mu_ded_end) + (1);
mu_Deductions[mu_ded_end] = mu_de1;
}
mu_addded ( mu_msg2 );
}
else
{
if ( (mu_msg.mu_msgType) == (mu_concat) )
{
mu_msg1 = mu_msgs[mu_msg.mu_concatPart1];
mu_msg2 = mu_msgs[mu_msg.mu_concatPart2];
mu_lookAdd ( mu_msg1, mu_m1 );
mu_lookAdd ( mu_msg2, mu_m2 );
mu_lookAdd ( mu_msg, mu_n2 );
mu_de1.clear();
mu_de1.mu_deduced = mu_false;
mu_de1.mu_deduceKind = mu_depairDed;
if (mu_m1.isundefined())
  mu_de1.mu_conclusion.undefine();
else
  mu_de1.mu_conclusion = mu_m1;
if (mu_n2.isundefined())
  mu_de1.mu_assumption1.undefine();
else
  mu_de1.mu_assumption1 = mu_n2;
if (mu_m2.isundefined())
  mu_de1.mu_assumption2.undefine();
else
  mu_de1.mu_assumption2 = mu_m2;
mu_findded ( mu_de1, mu_find1 );
if ( (mu_find1) == (mu_false) )
{
mu_ded_end = (mu_ded_end) + (1);
mu_Deductions[mu_ded_end] = mu_de1;
}
mu_de1.clear();
mu_de1.mu_deduced = mu_false;
mu_de1.mu_deduceKind = mu_depairDed;
if (mu_m2.isundefined())
  mu_de1.mu_conclusion.undefine();
else
  mu_de1.mu_conclusion = mu_m2;
if (mu_n2.isundefined())
  mu_de1.mu_assumption1.undefine();
else
  mu_de1.mu_assumption1 = mu_n2;
if (mu_m1.isundefined())
  mu_de1.mu_assumption2.undefine();
else
  mu_de1.mu_assumption2 = mu_m1;
mu_findded ( mu_de1, mu_find1 );
if ( (mu_find1) == (mu_false) )
{
mu_ded_end = (mu_ded_end) + (1);
mu_Deductions[mu_ded_end] = mu_de1;
}
mu_de1.clear();
mu_de1.mu_deduced = mu_false;
mu_de1.mu_deduceKind = mu_enpairDed;
if (mu_n2.isundefined())
  mu_de1.mu_conclusion.undefine();
else
  mu_de1.mu_conclusion = mu_n2;
if (mu_m1.isundefined())
  mu_de1.mu_assumption1.undefine();
else
  mu_de1.mu_assumption1 = mu_m1;
if (mu_m2.isundefined())
  mu_de1.mu_assumption2.undefine();
else
  mu_de1.mu_assumption2 = mu_m2;
mu_findded ( mu_de1, mu_find1 );
if ( (mu_find1) == (mu_false) )
{
mu_ded_end = (mu_ded_end) + (1);
mu_Deductions[mu_ded_end] = mu_de1;
}
mu_addded ( mu_msg1 );
mu_addded ( mu_msg2 );
}
}
};
/*** end procedure declaration ***/

void mu_get_mes(mu_1_Message& mu_msg, mu_1_indexType& mu_n1)
{
/*** Variable declaration ***/
mu_1_Message mu_m1("m1",0);

/*** Variable declaration ***/
mu_1_Message mu_m2("m2",88);

mu_lookAdd ( mu_msg, mu_n1 );
mu_replace ( mu_msg );
{
for(int mu_i = 1; mu_i <= 200; mu_i++) {
mu_addded ( mu_msgs[mu_allMsgs[mu_i]] );
};
};
};
/*** end procedure declaration ***/

void mu_addKnowledge(const mu_1_indexType& mu_msgNo)
{
/*** Variable declaration ***/
mu_1_DeductionsNums mu_i("i",0);

mu_Spy_known[mu_msgNo] = mu_true;
{
for(int mu_i = 1; mu_i <= 400; mu_i++) {
bool mu__boolexpr26;
bool mu__boolexpr27;
  if (!((mu_Spy_known[mu_Deductions[mu_i].mu_assumption1]) == (mu_true))) mu__boolexpr27 = FALSE ;
  else {
bool mu__boolexpr28;
  if ((mu_Spy_known[mu_Deductions[mu_i].mu_assumption2]) == (mu_true)) mu__boolexpr28 = TRUE ;
  else {
  mu__boolexpr28 = ((mu_Deductions[mu_i].mu_assumption2) == (0)) ; 
}
  mu__boolexpr27 = (mu__boolexpr28) ; 
}
  if (!(mu__boolexpr27)) mu__boolexpr26 = FALSE ;
  else {
  mu__boolexpr26 = ((mu_Spy_known[mu_Deductions[mu_i].mu_conclusion]) == (mu_false)) ; 
}
if ( mu__boolexpr26 )
{
mu_Spy_known[mu_Deductions[mu_i].mu_conclusion] = mu_true;
mu_Deductions[mu_i].mu_deduced = mu_true;
mu_addKnowledge ( (int)mu_Deductions[mu_i].mu_conclusion );
}
};
};
};
/*** end procedure declaration ***/

void mu_cons1(const mu_1_NonceType& mu_Na, const mu_1_AgentType& mu_A, const mu_1_AgentType& mu_B, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_num1("num1",0);

/*** Variable declaration ***/
mu_1_indexType mu_num2("num2",8);

/*** Variable declaration ***/
mu_1_KeyType mu_k1("k1",16);

mu_msg.clear();
mu_msg.mu_msgType = mu_nonce;
if (mu_Na.isundefined())
  mu_msg.mu_noncePart.undefine();
else
  mu_msg.mu_noncePart = mu_Na;
mu_lookAdd ( mu_msg, mu_num1 );
mu_msg.clear();
mu_msg.mu_msgType = mu_agent;
if (mu_A.isundefined())
  mu_msg.mu_ag.undefine();
else
  mu_msg.mu_ag = mu_A;
mu_lookAdd ( mu_msg, mu_num2 );
mu_msg.clear();
mu_msg.mu_msgType = mu_concat;
if (mu_num1.isundefined())
  mu_msg.mu_concatPart1.undefine();
else
  mu_msg.mu_concatPart1 = mu_num1;
if (mu_num2.isundefined())
  mu_msg.mu_concatPart2.undefine();
else
  mu_msg.mu_concatPart2 = mu_num2;
mu_lookAdd ( mu_msg, mu_num1 );
mu_msg.clear();
mu_k1.clear();
mu_msg.mu_msgType = mu_key;
if (mu_B.isundefined())
  mu_k1.mu_ag.undefine();
else
  mu_k1.mu_ag = mu_B;
mu_k1.mu_encTyp = mu_PK;
mu_msg.mu_k = mu_k1;
mu_lookAdd ( mu_msg, mu_num2 );
mu_msg.clear();
mu_msg.mu_msgType = mu_aenc;
if (mu_num1.isundefined())
  mu_msg.mu_aencMsg.undefine();
else
  mu_msg.mu_aencMsg = mu_num1;
if (mu_num2.isundefined())
  mu_msg.mu_aencKey.undefine();
else
  mu_msg.mu_aencKey = mu_num2;
mu_lookAdd ( mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_cons2(const mu_1_NonceType& mu_Na, const mu_1_NonceType& mu_Nb, const mu_1_AgentType& mu_A, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_num1("num1",0);

/*** Variable declaration ***/
mu_1_indexType mu_num2("num2",8);

/*** Variable declaration ***/
mu_1_KeyType mu_k1("k1",16);

mu_msg.clear();
mu_msg.mu_msgType = mu_nonce;
if (mu_Na.isundefined())
  mu_msg.mu_noncePart.undefine();
else
  mu_msg.mu_noncePart = mu_Na;
mu_lookAdd ( mu_msg, mu_num1 );
mu_msg.clear();
mu_msg.mu_msgType = mu_nonce;
if (mu_Nb.isundefined())
  mu_msg.mu_noncePart.undefine();
else
  mu_msg.mu_noncePart = mu_Nb;
mu_lookAdd ( mu_msg, mu_num2 );
mu_msg.clear();
mu_msg.mu_msgType = mu_concat;
if (mu_num1.isundefined())
  mu_msg.mu_concatPart1.undefine();
else
  mu_msg.mu_concatPart1 = mu_num1;
if (mu_num2.isundefined())
  mu_msg.mu_concatPart2.undefine();
else
  mu_msg.mu_concatPart2 = mu_num2;
mu_lookAdd ( mu_msg, mu_num1 );
mu_msg.clear();
mu_k1.clear();
mu_msg.mu_msgType = mu_key;
if (mu_A.isundefined())
  mu_k1.mu_ag.undefine();
else
  mu_k1.mu_ag = mu_A;
mu_k1.mu_encTyp = mu_PK;
mu_msg.mu_k = mu_k1;
mu_lookAdd ( mu_msg, mu_num2 );
mu_msg.clear();
mu_msg.mu_msgType = mu_aenc;
if (mu_num1.isundefined())
  mu_msg.mu_aencMsg.undefine();
else
  mu_msg.mu_aencMsg = mu_num1;
if (mu_num2.isundefined())
  mu_msg.mu_aencKey.undefine();
else
  mu_msg.mu_aencKey = mu_num2;
mu_lookAdd ( mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_cons3(const mu_1_NonceType& mu_Nb, const mu_1_AgentType& mu_B, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_num1("num1",0);

/*** Variable declaration ***/
mu_1_indexType mu_num2("num2",8);

/*** Variable declaration ***/
mu_1_KeyType mu_k1("k1",16);

mu_msg.clear();
mu_msg.mu_msgType = mu_nonce;
if (mu_Nb.isundefined())
  mu_msg.mu_noncePart.undefine();
else
  mu_msg.mu_noncePart = mu_Nb;
mu_lookAdd ( mu_msg, mu_num1 );
mu_msg.clear();
mu_k1.clear();
mu_msg.mu_msgType = mu_key;
if (mu_B.isundefined())
  mu_k1.mu_ag.undefine();
else
  mu_k1.mu_ag = mu_B;
mu_k1.mu_encTyp = mu_PK;
mu_msg.mu_k = mu_k1;
mu_lookAdd ( mu_msg, mu_num2 );
mu_msg.clear();
mu_msg.mu_msgType = mu_aenc;
if (mu_num1.isundefined())
  mu_msg.mu_aencMsg.undefine();
else
  mu_msg.mu_aencMsg = mu_num1;
if (mu_num2.isundefined())
  mu_msg.mu_aencKey.undefine();
else
  mu_msg.mu_aencKey = mu_num2;
mu_lookAdd ( mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_destruct1(mu_1_Message& mu_msg, mu_1_NonceType& mu_Na, mu_1_AgentType& mu_A, mu_1_AgentType& mu_B)
{
/*** Variable declaration ***/
mu_1_KeyType mu_k1("k1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",16);

/*** Variable declaration ***/
mu_1_Message mu_msgNum1("msgNum1",104);

/*** Variable declaration ***/
mu_1_Message mu_msgNum2("msgNum2",192);

mu_msg1.clear();
mu_k1.clear();
mu_k1 = mu_msgs[mu_msg.mu_aencKey].mu_k;
mu_B = mu_k1.mu_ag;
mu_msg1 = mu_msgs[mu_msg.mu_aencMsg];
mu_msgNum1 = mu_msgs[mu_msg1.mu_concatPart1];
mu_msgNum2 = mu_msgs[mu_msg1.mu_concatPart2];
mu_Na = mu_msgNum1.mu_noncePart;
mu_A = mu_msgNum2.mu_ag;
};
/*** end procedure declaration ***/

void mu_destruct2(mu_1_Message& mu_msg, mu_1_NonceType& mu_Na, mu_1_NonceType& mu_Nb, mu_1_AgentType& mu_A)
{
/*** Variable declaration ***/
mu_1_KeyType mu_k1("k1",0);

/*** Variable declaration ***/
mu_1_Message mu_msgNum1("msgNum1",16);

/*** Variable declaration ***/
mu_1_Message mu_msgNum2("msgNum2",104);

mu_msg1.clear();
mu_k1 = mu_msgs[mu_msg.mu_aencKey].mu_k;
mu_A = mu_k1.mu_ag;
mu_msg1 = mu_msgs[mu_msg.mu_aencMsg];
mu_msgNum1 = mu_msgs[mu_msg1.mu_concatPart1];
mu_msgNum2 = mu_msgs[mu_msg1.mu_concatPart2];
mu_Na = mu_msgNum1.mu_noncePart;
mu_Nb = mu_msgNum2.mu_noncePart;
};
/*** end procedure declaration ***/

void mu_destruct3(mu_1_Message& mu_msg, mu_1_NonceType& mu_Nb, mu_1_AgentType& mu_B)
{
/*** Variable declaration ***/
mu_1_KeyType mu_k1("k1",0);

mu_msg1.clear();
mu_k1 = mu_msgs[mu_msg.mu_aencKey].mu_k;
mu_B = mu_k1.mu_ag;
mu_msg1 = mu_msgs[mu_msg.mu_aencMsg];
mu_Nb = mu_msg1.mu_noncePart;
};
/*** end procedure declaration ***/





/********************
  The world
 ********************/
void world_class::clear()
{
  mu_ch.clear();
  mu_alices.clear();
  mu_bobs.clear();
  mu_indexTyperuder.clear();
  mu_msgs.clear();
  mu_msg_end.clear();
  mu_ded_end.clear();
  mu_eve_end.clear();
  mu_msg1.clear();
  mu_de1.clear();
  mu_Spy_known.clear();
  mu_emit.clear();
  mu_KEY.clear();
  mu_msg.clear();
  mu_eve.clear();
  mu_endn.clear();
  mu_end1.clear();
  mu_end2.clear();
  mu_Deductions.clear();
  mu_allMsgs.clear();
  mu_allMsg1s.clear();
  mu_allMsg2s.clear();
  mu_allMsg3s.clear();
  mu_allMsg4s.clear();
  mu_allMsgnum1.clear();
  mu_allMsgnum2.clear();
  mu_allMsgnum3.clear();
  mu_systemEvent.clear();
}
void world_class::undefine()
{
  mu_ch.undefine();
  mu_alices.undefine();
  mu_bobs.undefine();
  mu_indexTyperuder.undefine();
  mu_msgs.undefine();
  mu_msg_end.undefine();
  mu_ded_end.undefine();
  mu_eve_end.undefine();
  mu_msg1.undefine();
  mu_de1.undefine();
  mu_Spy_known.undefine();
  mu_emit.undefine();
  mu_KEY.undefine();
  mu_msg.undefine();
  mu_eve.undefine();
  mu_endn.undefine();
  mu_end1.undefine();
  mu_end2.undefine();
  mu_Deductions.undefine();
  mu_allMsgs.undefine();
  mu_allMsg1s.undefine();
  mu_allMsg2s.undefine();
  mu_allMsg3s.undefine();
  mu_allMsg4s.undefine();
  mu_allMsgnum1.undefine();
  mu_allMsgnum2.undefine();
  mu_allMsgnum3.undefine();
  mu_systemEvent.undefine();
}
void world_class::reset()
{
  mu_ch.reset();
  mu_alices.reset();
  mu_bobs.reset();
  mu_indexTyperuder.reset();
  mu_msgs.reset();
  mu_msg_end.reset();
  mu_ded_end.reset();
  mu_eve_end.reset();
  mu_msg1.reset();
  mu_de1.reset();
  mu_Spy_known.reset();
  mu_emit.reset();
  mu_KEY.reset();
  mu_msg.reset();
  mu_eve.reset();
  mu_endn.reset();
  mu_end1.reset();
  mu_end2.reset();
  mu_Deductions.reset();
  mu_allMsgs.reset();
  mu_allMsg1s.reset();
  mu_allMsg2s.reset();
  mu_allMsg3s.reset();
  mu_allMsg4s.reset();
  mu_allMsgnum1.reset();
  mu_allMsgnum2.reset();
  mu_allMsgnum3.reset();
  mu_systemEvent.reset();
}
void world_class::print()
{
  static int num_calls = 0; /* to ward off recursive calls. */
  if ( num_calls == 0 ) {
    num_calls++;
  mu_ch.print();
  mu_alices.print();
  mu_bobs.print();
  mu_indexTyperuder.print();
  mu_msgs.print();
  mu_msg_end.print();
  mu_ded_end.print();
  mu_eve_end.print();
  mu_msg1.print();
  mu_de1.print();
  mu_Spy_known.print();
  mu_emit.print();
  mu_KEY.print();
  mu_msg.print();
  mu_eve.print();
  mu_endn.print();
  mu_end1.print();
  mu_end2.print();
  mu_Deductions.print();
  mu_allMsgs.print();
  mu_allMsg1s.print();
  mu_allMsg2s.print();
  mu_allMsg3s.print();
  mu_allMsg4s.print();
  mu_allMsgnum1.print();
  mu_allMsgnum2.print();
  mu_allMsgnum3.print();
  mu_systemEvent.print();
    num_calls--;
}
}
void world_class::print_statistic()
{
  static int num_calls = 0; /* to ward off recursive calls. */
  if ( num_calls == 0 ) {
    num_calls++;
  mu_ch.print_statistic();
  mu_alices.print_statistic();
  mu_bobs.print_statistic();
  mu_indexTyperuder.print_statistic();
  mu_msgs.print_statistic();
  mu_msg_end.print_statistic();
  mu_ded_end.print_statistic();
  mu_eve_end.print_statistic();
  mu_msg1.print_statistic();
  mu_de1.print_statistic();
  mu_Spy_known.print_statistic();
  mu_emit.print_statistic();
  mu_KEY.print_statistic();
  mu_msg.print_statistic();
  mu_eve.print_statistic();
  mu_endn.print_statistic();
  mu_end1.print_statistic();
  mu_end2.print_statistic();
  mu_Deductions.print_statistic();
  mu_allMsgs.print_statistic();
  mu_allMsg1s.print_statistic();
  mu_allMsg2s.print_statistic();
  mu_allMsg3s.print_statistic();
  mu_allMsg4s.print_statistic();
  mu_allMsgnum1.print_statistic();
  mu_allMsgnum2.print_statistic();
  mu_allMsgnum3.print_statistic();
  mu_systemEvent.print_statistic();
    num_calls--;
}
}
void world_class::print_diff( state *prevstate )
{
  if ( prevstate != NULL )
  {
    mu_ch.print_diff(prevstate);
    mu_alices.print_diff(prevstate);
    mu_bobs.print_diff(prevstate);
    mu_indexTyperuder.print_diff(prevstate);
    mu_msgs.print_diff(prevstate);
    mu_msg_end.print_diff(prevstate);
    mu_ded_end.print_diff(prevstate);
    mu_eve_end.print_diff(prevstate);
    mu_msg1.print_diff(prevstate);
    mu_de1.print_diff(prevstate);
    mu_Spy_known.print_diff(prevstate);
    mu_emit.print_diff(prevstate);
    mu_KEY.print_diff(prevstate);
    mu_msg.print_diff(prevstate);
    mu_eve.print_diff(prevstate);
    mu_endn.print_diff(prevstate);
    mu_end1.print_diff(prevstate);
    mu_end2.print_diff(prevstate);
    mu_Deductions.print_diff(prevstate);
    mu_allMsgs.print_diff(prevstate);
    mu_allMsg1s.print_diff(prevstate);
    mu_allMsg2s.print_diff(prevstate);
    mu_allMsg3s.print_diff(prevstate);
    mu_allMsg4s.print_diff(prevstate);
    mu_allMsgnum1.print_diff(prevstate);
    mu_allMsgnum2.print_diff(prevstate);
    mu_allMsgnum3.print_diff(prevstate);
    mu_systemEvent.print_diff(prevstate);
  }
  else
print();
}
void world_class::to_state(state *newstate)
{
  mu_ch.to_state( newstate );
  mu_alices.to_state( newstate );
  mu_bobs.to_state( newstate );
  mu_indexTyperuder.to_state( newstate );
  mu_msgs.to_state( newstate );
  mu_msg_end.to_state( newstate );
  mu_ded_end.to_state( newstate );
  mu_eve_end.to_state( newstate );
  mu_msg1.to_state( newstate );
  mu_de1.to_state( newstate );
  mu_Spy_known.to_state( newstate );
  mu_emit.to_state( newstate );
  mu_KEY.to_state( newstate );
  mu_msg.to_state( newstate );
  mu_eve.to_state( newstate );
  mu_endn.to_state( newstate );
  mu_end1.to_state( newstate );
  mu_end2.to_state( newstate );
  mu_Deductions.to_state( newstate );
  mu_allMsgs.to_state( newstate );
  mu_allMsg1s.to_state( newstate );
  mu_allMsg2s.to_state( newstate );
  mu_allMsg3s.to_state( newstate );
  mu_allMsg4s.to_state( newstate );
  mu_allMsgnum1.to_state( newstate );
  mu_allMsgnum2.to_state( newstate );
  mu_allMsgnum3.to_state( newstate );
  mu_systemEvent.to_state( newstate );
}
void world_class::setstate(state *thestate)
{
}


/********************
  Rule declarations
 ********************/
/******************** RuleBase0 ********************/
class RuleBase0
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_bobNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 200) + 1);
    r = r / 200;
    return tsprintf("indexTyperuderEmittingMsg3, j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_bobNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 200) + 1);
    r = r / 200;
bool mu__boolexpr29;
bool mu__boolexpr30;
  if (!((mu_indexTyperuder.mu_st) == (mu_getmsg3))) mu__boolexpr30 = FALSE ;
  else {
  mu__boolexpr30 = ((mu_ch[3].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr30)) mu__boolexpr29 = FALSE ;
  else {
  mu__boolexpr29 = ((mu_allMsgs[mu_i]) > (0)) ; 
}
    return mu__boolexpr29;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 0;
    static mu_1_bobNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 200) + 1);
    r = r / 200;
    while (what_rule < 200 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr31;
bool mu__boolexpr32;
  if (!((mu_indexTyperuder.mu_st) == (mu_getmsg3))) mu__boolexpr32 = FALSE ;
  else {
  mu__boolexpr32 = ((mu_ch[3].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr32)) mu__boolexpr31 = FALSE ;
  else {
  mu__boolexpr31 = ((mu_allMsgs[mu_i]) > (0)) ; 
}
	      if (mu__boolexpr31) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 0;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 200) + 1);
    r = r / 200;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_bobNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 200) + 1);
    r = r / 200;
bool mu__boolexpr33;
  if (!(mu_Spy_known[mu_allMsgs[mu_i]])) mu__boolexpr33 = FALSE ;
  else {
  mu__boolexpr33 = ((mu_emit[mu_allMsgs[mu_i]]) == (mu_false)) ; 
}
if ( mu__boolexpr33 )
{
mu_ch[3].clear();
mu_ch[3].mu_empty = mu_false;
mu_ch[3].mu_msg = mu_msgs[mu_allMsgs[mu_i]];
mu_ch[3].mu_sender = mu_indexTyperuder_;
mu_ch[3].mu_receiver = mu_bobs[mu_j].mu_B;
mu_emit[mu_allMsgs[mu_i]] = mu_true;
mu_indexTyperuder.mu_st = mu_emitting3;
cout << "   3'I->B\n";
mu_ch[3].mu_msg.print();
}
  };

};
/******************** RuleBase1 ********************/
class RuleBase1
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_aliceNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 200) + 1);
    r = r / 200;
    return tsprintf("indexTyperuderEmittingMsg2, j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_aliceNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 200) + 1);
    r = r / 200;
bool mu__boolexpr34;
bool mu__boolexpr35;
  if (!((mu_indexTyperuder.mu_st) == (mu_getmsg2))) mu__boolexpr35 = FALSE ;
  else {
  mu__boolexpr35 = ((mu_ch[2].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr35)) mu__boolexpr34 = FALSE ;
  else {
  mu__boolexpr34 = ((mu_allMsgs[mu_i]) > (0)) ; 
}
    return mu__boolexpr34;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 200;
    static mu_1_aliceNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 200) + 1);
    r = r / 200;
    while (what_rule < 400 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr36;
bool mu__boolexpr37;
  if (!((mu_indexTyperuder.mu_st) == (mu_getmsg2))) mu__boolexpr37 = FALSE ;
  else {
  mu__boolexpr37 = ((mu_ch[2].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr37)) mu__boolexpr36 = FALSE ;
  else {
  mu__boolexpr36 = ((mu_allMsgs[mu_i]) > (0)) ; 
}
	      if (mu__boolexpr36) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 200;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 200) + 1);
    r = r / 200;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_aliceNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 200) + 1);
    r = r / 200;
bool mu__boolexpr38;
  if (!(mu_Spy_known[mu_allMsgs[mu_i]])) mu__boolexpr38 = FALSE ;
  else {
  mu__boolexpr38 = ((mu_emit[mu_allMsgs[mu_i]]) == (mu_false)) ; 
}
if ( mu__boolexpr38 )
{
mu_ch[2].clear();
mu_ch[2].mu_empty = mu_false;
mu_ch[2].mu_msg = mu_msgs[mu_allMsgs[mu_i]];
mu_ch[2].mu_sender = mu_indexTyperuder_;
mu_ch[2].mu_receiver = mu_alices[mu_j].mu_A;
mu_emit[mu_allMsgs[mu_i]] = mu_true;
mu_indexTyperuder.mu_st = mu_emitting2;
cout << "   2'I->A\n";
mu_ch[2].mu_msg.print();
}
  };

};
/******************** RuleBase2 ********************/
class RuleBase2
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_bobNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 200) + 1);
    r = r / 200;
    return tsprintf("indexTyperuderEmittingMsg1, j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_bobNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 200) + 1);
    r = r / 200;
bool mu__boolexpr39;
bool mu__boolexpr40;
  if (!((mu_indexTyperuder.mu_st) == (mu_getmsg1))) mu__boolexpr40 = FALSE ;
  else {
  mu__boolexpr40 = ((mu_ch[1].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr40)) mu__boolexpr39 = FALSE ;
  else {
  mu__boolexpr39 = ((mu_allMsgs[mu_i]) > (0)) ; 
}
    return mu__boolexpr39;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 400;
    static mu_1_bobNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 200) + 1);
    r = r / 200;
    while (what_rule < 600 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr41;
bool mu__boolexpr42;
  if (!((mu_indexTyperuder.mu_st) == (mu_getmsg1))) mu__boolexpr42 = FALSE ;
  else {
  mu__boolexpr42 = ((mu_ch[1].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr42)) mu__boolexpr41 = FALSE ;
  else {
  mu__boolexpr41 = ((mu_allMsgs[mu_i]) > (0)) ; 
}
	      if (mu__boolexpr41) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 400;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 200) + 1);
    r = r / 200;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_bobNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 200) + 1);
    r = r / 200;
bool mu__boolexpr43;
  if (!(mu_Spy_known[mu_allMsgs[mu_i]])) mu__boolexpr43 = FALSE ;
  else {
  mu__boolexpr43 = ((mu_emit[mu_allMsgs[mu_i]]) == (mu_false)) ; 
}
if ( mu__boolexpr43 )
{
mu_ch[1].mu_msg.clear();
mu_ch[1].mu_empty = mu_false;
mu_ch[1].mu_msg = mu_msgs[mu_allMsgs[mu_i]];
mu_ch[1].mu_sender = mu_indexTyperuder_;
mu_ch[1].mu_receiver = mu_bobs[mu_j].mu_B;
mu_emit[mu_allMsgs[mu_i]] = mu_true;
mu_indexTyperuder.mu_st = mu_emitting1;
cout << "   1'I->B\n";
mu_ch[1].mu_msg.print();
}
  };

};
/******************** RuleBase3 ********************/
class RuleBase3
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("indexTyperuderGetMsg3");
  }
  bool Condition(unsigned r)
  {
bool mu__boolexpr44;
bool mu__boolexpr45;
  if (!((mu_indexTyperuder.mu_st) == (mu_emitting2))) mu__boolexpr45 = FALSE ;
  else {
  mu__boolexpr45 = ((mu_ch[3].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr45)) mu__boolexpr44 = FALSE ;
  else {
  mu__boolexpr44 = ((mu_ch[3].mu_receiver) == (mu_indexTyperuder_)) ; 
}
    return mu__boolexpr44;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 600;
    while (what_rule < 601 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr46;
bool mu__boolexpr47;
  if (!((mu_indexTyperuder.mu_st) == (mu_emitting2))) mu__boolexpr47 = FALSE ;
  else {
  mu__boolexpr47 = ((mu_ch[3].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr47)) mu__boolexpr46 = FALSE ;
  else {
  mu__boolexpr46 = ((mu_ch[3].mu_receiver) == (mu_indexTyperuder_)) ; 
}
	      if (mu__boolexpr46) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 600;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",0);

mu_get_mes ( mu_ch[3].mu_msg, mu_msgNo );
mu_ch[3].mu_empty = mu_true;
mu_indexTyperuder.mu_st = mu_getmsg3;
if ( !(mu_Spy_known[mu_msgNo]) )
{
mu_addKnowledge ( mu_msgNo );
}
  };

};
/******************** RuleBase4 ********************/
class RuleBase4
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("indexTyperuderGetMsg2");
  }
  bool Condition(unsigned r)
  {
bool mu__boolexpr48;
bool mu__boolexpr49;
  if (!((mu_indexTyperuder.mu_st) == (mu_emitting1))) mu__boolexpr49 = FALSE ;
  else {
  mu__boolexpr49 = ((mu_ch[2].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr49)) mu__boolexpr48 = FALSE ;
  else {
  mu__boolexpr48 = ((mu_ch[2].mu_receiver) == (mu_indexTyperuder_)) ; 
}
    return mu__boolexpr48;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 601;
    while (what_rule < 602 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr50;
bool mu__boolexpr51;
  if (!((mu_indexTyperuder.mu_st) == (mu_emitting1))) mu__boolexpr51 = FALSE ;
  else {
  mu__boolexpr51 = ((mu_ch[2].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr51)) mu__boolexpr50 = FALSE ;
  else {
  mu__boolexpr50 = ((mu_ch[2].mu_receiver) == (mu_indexTyperuder_)) ; 
}
	      if (mu__boolexpr50) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 601;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",0);

mu_get_mes ( mu_ch[2].mu_msg, mu_msgNo );
mu_ch[2].mu_empty = mu_true;
mu_indexTyperuder.mu_st = mu_getmsg2;
if ( !(mu_Spy_known[mu_msgNo]) )
{
mu_addKnowledge ( mu_msgNo );
}
  };

};
/******************** RuleBase5 ********************/
class RuleBase5
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("indexTyperuderGetMsg1");
  }
  bool Condition(unsigned r)
  {
bool mu__boolexpr52;
bool mu__boolexpr53;
  if (!((mu_indexTyperuder.mu_st) == (mu_waiting))) mu__boolexpr53 = FALSE ;
  else {
  mu__boolexpr53 = ((mu_ch[1].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr53)) mu__boolexpr52 = FALSE ;
  else {
  mu__boolexpr52 = ((mu_ch[1].mu_receiver) == (mu_indexTyperuder_)) ; 
}
    return mu__boolexpr52;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 602;
    while (what_rule < 603 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr54;
bool mu__boolexpr55;
  if (!((mu_indexTyperuder.mu_st) == (mu_waiting))) mu__boolexpr55 = FALSE ;
  else {
  mu__boolexpr55 = ((mu_ch[1].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr55)) mu__boolexpr54 = FALSE ;
  else {
  mu__boolexpr54 = ((mu_ch[1].mu_receiver) == (mu_indexTyperuder_)) ; 
}
	      if (mu__boolexpr54) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 602;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",0);

mu_get_mes ( mu_ch[1].mu_msg, mu_msgNo );
mu_ch[1].mu_empty = mu_true;
mu_indexTyperuder.mu_st = mu_getmsg1;
if ( !(mu_Spy_known[mu_msgNo]) )
{
mu_addKnowledge ( mu_msgNo );
}
  };

};
/******************** RuleBase6 ********************/
class RuleBase6
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_bobNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf("roleB2 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_bobNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr56;
bool mu__boolexpr57;
bool mu__boolexpr58;
  if (!((mu_bobs[mu_i].mu_st) == (mu_B2))) mu__boolexpr58 = FALSE ;
  else {
  mu__boolexpr58 = ((mu_ch[3].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr58)) mu__boolexpr57 = FALSE ;
  else {
  mu__boolexpr57 = ((mu_indexTyperuder.mu_st) == (mu_emitting3)) ; 
}
  if (!(mu__boolexpr57)) mu__boolexpr56 = FALSE ;
  else {
  mu__boolexpr56 = ((mu_ch[3].mu_receiver) == (mu_bobs[mu_i].mu_B)) ; 
}
    return mu__boolexpr56;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 603;
    static mu_1_bobNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 604 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr59;
bool mu__boolexpr60;
bool mu__boolexpr61;
  if (!((mu_bobs[mu_i].mu_st) == (mu_B2))) mu__boolexpr61 = FALSE ;
  else {
  mu__boolexpr61 = ((mu_ch[3].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr61)) mu__boolexpr60 = FALSE ;
  else {
  mu__boolexpr60 = ((mu_indexTyperuder.mu_st) == (mu_emitting3)) ; 
}
  if (!(mu__boolexpr60)) mu__boolexpr59 = FALSE ;
  else {
  mu__boolexpr59 = ((mu_ch[3].mu_receiver) == (mu_bobs[mu_i].mu_B)) ; 
}
	      if (mu__boolexpr59) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 603;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_bobNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_1_AgentType mu_loc_B("loc_B",0);

/*** Variable declaration ***/
mu_1_NonceType mu_loc_Nb("loc_Nb",8);

mu_msg.clear();
mu_msg = mu_ch[3].mu_msg;
mu_destruct3 ( mu_msg, mu_loc_Nb, mu_loc_B );
bool mu__boolexpr62;
  if (!((mu_loc_B) == (mu_bobs[mu_i].mu_B))) mu__boolexpr62 = FALSE ;
  else {
  mu__boolexpr62 = ((mu_loc_Nb) == (mu_bobs[mu_i].mu_Nb)) ; 
}
if ( mu__boolexpr62 )
{
mu_bobs[mu_i].mu_st = mu_B3;
cout << "\nend\n";
mu_msg.print();
}
  };

};
/******************** RuleBase7 ********************/
class RuleBase7
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_bobNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf("roleB1 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_bobNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr63;
bool mu__boolexpr64;
bool mu__boolexpr65;
  if (!((mu_bobs[mu_i].mu_st) == (mu_B1))) mu__boolexpr65 = FALSE ;
  else {
  mu__boolexpr65 = ((mu_ch[1].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr65)) mu__boolexpr64 = FALSE ;
  else {
  mu__boolexpr64 = ((mu_indexTyperuder.mu_st) == (mu_emitting1)) ; 
}
  if (!(mu__boolexpr64)) mu__boolexpr63 = FALSE ;
  else {
  mu__boolexpr63 = ((mu_ch[1].mu_receiver) == (mu_bobs[mu_i].mu_B)) ; 
}
    return mu__boolexpr63;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 604;
    static mu_1_bobNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 605 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr66;
bool mu__boolexpr67;
bool mu__boolexpr68;
  if (!((mu_bobs[mu_i].mu_st) == (mu_B1))) mu__boolexpr68 = FALSE ;
  else {
  mu__boolexpr68 = ((mu_ch[1].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr68)) mu__boolexpr67 = FALSE ;
  else {
  mu__boolexpr67 = ((mu_indexTyperuder.mu_st) == (mu_emitting1)) ; 
}
  if (!(mu__boolexpr67)) mu__boolexpr66 = FALSE ;
  else {
  mu__boolexpr66 = ((mu_ch[1].mu_receiver) == (mu_bobs[mu_i].mu_B)) ; 
}
	      if (mu__boolexpr66) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 604;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_bobNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_1_AgentType mu_loc_A("loc_A",0);

/*** Variable declaration ***/
mu_1_AgentType mu_loc_B("loc_B",8);

/*** Variable declaration ***/
mu_1_NonceType mu_loc_Na("loc_Na",16);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",24);

mu_msg.clear();
mu_msg = mu_ch[1].mu_msg;
mu_destruct1 ( mu_msg, mu_loc_Na, mu_loc_A, mu_loc_B );
if ( (mu_loc_B) == (mu_bobs[mu_i].mu_B) )
{
mu_ch[1].mu_empty = mu_true;
mu_cons2 ( mu_loc_Na, mu_bobs[mu_i].mu_Nb, mu_loc_A, mu_msg, mu_msgNo );
mu_ch[2].mu_msg = mu_msg;
mu_ch[2].mu_empty = mu_false;
mu_bobs[mu_i].mu_st = mu_B2;
mu_ch[2].mu_receiver = mu_indexTyperuder_;
mu_ch[2].mu_sender = mu_bobs[mu_i].mu_B;
cout << "2.B->I\n";
mu_ch[2].mu_msg.print();
}
  };

};
/******************** RuleBase8 ********************/
class RuleBase8
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_aliceNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf("roleA2 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_aliceNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr69;
bool mu__boolexpr70;
bool mu__boolexpr71;
  if (!((mu_alices[mu_i].mu_st) == (mu_A2))) mu__boolexpr71 = FALSE ;
  else {
  mu__boolexpr71 = ((mu_ch[2].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr71)) mu__boolexpr70 = FALSE ;
  else {
  mu__boolexpr70 = ((mu_indexTyperuder.mu_st) == (mu_emitting2)) ; 
}
  if (!(mu__boolexpr70)) mu__boolexpr69 = FALSE ;
  else {
  mu__boolexpr69 = ((mu_ch[2].mu_receiver) == (mu_alices[mu_i].mu_A)) ; 
}
    return mu__boolexpr69;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 605;
    static mu_1_aliceNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 606 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr72;
bool mu__boolexpr73;
bool mu__boolexpr74;
  if (!((mu_alices[mu_i].mu_st) == (mu_A2))) mu__boolexpr74 = FALSE ;
  else {
  mu__boolexpr74 = ((mu_ch[2].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr74)) mu__boolexpr73 = FALSE ;
  else {
  mu__boolexpr73 = ((mu_indexTyperuder.mu_st) == (mu_emitting2)) ; 
}
  if (!(mu__boolexpr73)) mu__boolexpr72 = FALSE ;
  else {
  mu__boolexpr72 = ((mu_ch[2].mu_receiver) == (mu_alices[mu_i].mu_A)) ; 
}
	      if (mu__boolexpr72) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 605;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_aliceNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_1_AgentType mu_loc_A("loc_A",0);

/*** Variable declaration ***/
mu_1_AgentType mu_loc_B("loc_B",8);

/*** Variable declaration ***/
mu_1_NonceType mu_loc_Na("loc_Na",16);

/*** Variable declaration ***/
mu_1_NonceType mu_loc_Nb("loc_Nb",24);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",32);

mu_msg.clear();
mu_msg = mu_ch[2].mu_msg;
mu_destruct2 ( mu_msg, mu_loc_Na, mu_loc_Nb, mu_loc_A );
bool mu__boolexpr75;
  if (!((mu_loc_A) == (mu_alices[mu_i].mu_A))) mu__boolexpr75 = FALSE ;
  else {
  mu__boolexpr75 = ((mu_loc_Na) == (mu_alices[mu_i].mu_Na)) ; 
}
if ( mu__boolexpr75 )
{
mu_ch[2].mu_empty = mu_true;
mu_cons3 ( mu_loc_Nb, mu_alices[mu_i].mu_B, mu_msg, mu_msgNo );
mu_ch[3].mu_msg = mu_msg;
mu_alices[mu_i].mu_st = mu_A3;
mu_ch[3].mu_receiver = mu_indexTyperuder_;
mu_ch[3].mu_sender = mu_alices[mu_i].mu_A;
mu_ch[3].mu_empty = mu_false;
cout << "3.A->I\n";
mu_ch[3].mu_msg.print();
}
  };

};
/******************** RuleBase9 ********************/
class RuleBase9
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_aliceNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf("roleA1 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_aliceNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr76;
  if (!((mu_alices[mu_i].mu_st) == (mu_A1))) mu__boolexpr76 = FALSE ;
  else {
  mu__boolexpr76 = ((mu_ch[1].mu_empty) == (mu_true)) ; 
}
    return mu__boolexpr76;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 606;
    static mu_1_aliceNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 607 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr77;
  if (!((mu_alices[mu_i].mu_st) == (mu_A1))) mu__boolexpr77 = FALSE ;
  else {
  mu__boolexpr77 = ((mu_ch[1].mu_empty) == (mu_true)) ; 
}
	      if (mu__boolexpr77) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 606;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_aliceNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",88);

mu_msg.clear();
mu_cons1 ( mu_alices[mu_i].mu_Na, mu_alices[mu_i].mu_A, mu_alices[mu_i].mu_B, mu_msg, mu_msgNo );
mu_ch[1].mu_empty = mu_false;
mu_ch[1].mu_msg = mu_msg;
mu_ch[1].mu_sender = mu_alices[mu_i].mu_A;
mu_ch[1].mu_receiver = mu_indexTyperuder_;
mu_alices[mu_i].mu_st = mu_A2;
cout << "1.A->I\n";
mu_ch[1].mu_msg.print();
  };

};
class NextStateGenerator
{
  RuleBase0 R0;
  RuleBase1 R1;
  RuleBase2 R2;
  RuleBase3 R3;
  RuleBase4 R4;
  RuleBase5 R5;
  RuleBase6 R6;
  RuleBase7 R7;
  RuleBase8 R8;
  RuleBase9 R9;
public:
void SetNextEnabledRule(unsigned & what_rule)
{
  category = CONDITION;
  if (what_rule<200)
    { R0.NextRule(what_rule);
      if (what_rule<200) return; }
  if (what_rule>=200 && what_rule<400)
    { R1.NextRule(what_rule);
      if (what_rule<400) return; }
  if (what_rule>=400 && what_rule<600)
    { R2.NextRule(what_rule);
      if (what_rule<600) return; }
  if (what_rule>=600 && what_rule<601)
    { R3.NextRule(what_rule);
      if (what_rule<601) return; }
  if (what_rule>=601 && what_rule<602)
    { R4.NextRule(what_rule);
      if (what_rule<602) return; }
  if (what_rule>=602 && what_rule<603)
    { R5.NextRule(what_rule);
      if (what_rule<603) return; }
  if (what_rule>=603 && what_rule<604)
    { R6.NextRule(what_rule);
      if (what_rule<604) return; }
  if (what_rule>=604 && what_rule<605)
    { R7.NextRule(what_rule);
      if (what_rule<605) return; }
  if (what_rule>=605 && what_rule<606)
    { R8.NextRule(what_rule);
      if (what_rule<606) return; }
  if (what_rule>=606 && what_rule<607)
    { R9.NextRule(what_rule);
      if (what_rule<607) return; }
}
bool Condition(unsigned r)
{
  category = CONDITION;
  if (r<=199) return R0.Condition(r-0);
  if (r>=200 && r<=399) return R1.Condition(r-200);
  if (r>=400 && r<=599) return R2.Condition(r-400);
  if (r>=600 && r<=600) return R3.Condition(r-600);
  if (r>=601 && r<=601) return R4.Condition(r-601);
  if (r>=602 && r<=602) return R5.Condition(r-602);
  if (r>=603 && r<=603) return R6.Condition(r-603);
  if (r>=604 && r<=604) return R7.Condition(r-604);
  if (r>=605 && r<=605) return R8.Condition(r-605);
  if (r>=606 && r<=606) return R9.Condition(r-606);
Error.Notrace("Internal: NextStateGenerator -- checking condition for nonexisting rule.");
return 0;}
void Code(unsigned r)
{
  if (r<=199) { R0.Code(r-0); return; } 
  if (r>=200 && r<=399) { R1.Code(r-200); return; } 
  if (r>=400 && r<=599) { R2.Code(r-400); return; } 
  if (r>=600 && r<=600) { R3.Code(r-600); return; } 
  if (r>=601 && r<=601) { R4.Code(r-601); return; } 
  if (r>=602 && r<=602) { R5.Code(r-602); return; } 
  if (r>=603 && r<=603) { R6.Code(r-603); return; } 
  if (r>=604 && r<=604) { R7.Code(r-604); return; } 
  if (r>=605 && r<=605) { R8.Code(r-605); return; } 
  if (r>=606 && r<=606) { R9.Code(r-606); return; } 
}
int Priority(unsigned short r)
{
  if (r<=199) { return R0.Priority(); } 
  if (r>=200 && r<=399) { return R1.Priority(); } 
  if (r>=400 && r<=599) { return R2.Priority(); } 
  if (r>=600 && r<=600) { return R3.Priority(); } 
  if (r>=601 && r<=601) { return R4.Priority(); } 
  if (r>=602 && r<=602) { return R5.Priority(); } 
  if (r>=603 && r<=603) { return R6.Priority(); } 
  if (r>=604 && r<=604) { return R7.Priority(); } 
  if (r>=605 && r<=605) { return R8.Priority(); } 
  if (r>=606 && r<=606) { return R9.Priority(); } 
return 0;}
char * Name(unsigned r)
{
  if (r<=199) return R0.Name(r-0);
  if (r>=200 && r<=399) return R1.Name(r-200);
  if (r>=400 && r<=599) return R2.Name(r-400);
  if (r>=600 && r<=600) return R3.Name(r-600);
  if (r>=601 && r<=601) return R4.Name(r-601);
  if (r>=602 && r<=602) return R5.Name(r-602);
  if (r>=603 && r<=603) return R6.Name(r-603);
  if (r>=604 && r<=604) return R7.Name(r-604);
  if (r>=605 && r<=605) return R8.Name(r-605);
  if (r>=606 && r<=606) return R9.Name(r-606);
  return NULL;
}
};
const unsigned numrules = 607;

/********************
  parameter
 ********************/
#define RULES_IN_WORLD 607


/********************
  Startstate records
 ********************/
/******************** StartStateBase0 ********************/
class StartStateBase0
{
public:
  char * Name(unsigned short r)
  {
    return tsprintf("Startstate 0");
  }
  void Code(unsigned short r)
  {
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_alices[mu_i].mu_st = mu_A1;
mu_alices[mu_i].mu_B = mu_indexTyperuder_;
};
};
mu_alices[1].mu_Na = mu_Na;
mu_alices[1].mu_A = mu_Alice;
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_bobs[mu_i].mu_st = mu_B1;
};
};
mu_bobs[1].mu_B = mu_Bob;
mu_bobs[1].mu_Nb = mu_Nb;
mu_indexTyperuder.mu_st = mu_waiting;
{
for(int mu_i = 1; mu_i <= 200; mu_i++) {
mu_Spy_known[mu_i] = mu_false;
};
};
{
for(int mu_i = 1; mu_i <= 200; mu_i++) {
mu_emit[mu_i] = mu_false;
};
};
{
for(int mu_i = 1; mu_i <= 3; mu_i++) {
mu_ch[mu_i].clear();
mu_ch[mu_i].mu_empty = mu_true;
};
};
mu_systemEvent.clear();
{
for(int mu_i = 1; mu_i <= 50; mu_i++) {
mu_systemEvent[mu_i].mu_send = mu_false;
};
};
mu_eve_end = 0;
mu_msgs.clear();
{
for(int mu_i = 0; mu_i <= 200; mu_i++) {
mu_msg1.clear();
mu_msg1.mu_msgType = mu_null;
mu_msgs[mu_i] = mu_msg1;
};
};
mu_Spy_known[1] = mu_true;
mu_Spy_known[2] = mu_true;
mu_Spy_known[3] = mu_true;
mu_Spy_known[4] = mu_true;
mu_Spy_known[5] = mu_true;
mu_Spy_known[6] = mu_true;
mu_Spy_known[7] = mu_true;
mu_msg1.clear();
mu_msg1.mu_msgType = mu_agent;
mu_msg1.mu_ag = mu_indexTyperuder_;
mu_msgs[1] = mu_msg1;
mu_msg1.clear();
mu_KEY.clear();
mu_msg1.mu_msgType = mu_key;
mu_KEY.mu_encTyp = mu_PK;
mu_KEY.mu_ag = mu_Alice;
mu_msg1.mu_k = mu_KEY;
mu_msgs[2] = mu_msg1;
mu_msg1.clear();
mu_KEY.clear();
mu_msg1.mu_msgType = mu_key;
mu_KEY.mu_encTyp = mu_PK;
mu_KEY.mu_ag = mu_Bob;
mu_msg1.mu_k = mu_KEY;
mu_msgs[3] = mu_msg1;
mu_msg1.clear();
mu_KEY.clear();
mu_msg1.mu_msgType = mu_key;
mu_KEY.mu_encTyp = mu_PK;
mu_KEY.mu_ag = mu_indexTyperuder_;
mu_msg1.mu_k = mu_KEY;
mu_msgs[4] = mu_msg1;
mu_msg1.clear();
mu_KEY.clear();
mu_msg1.mu_msgType = mu_key;
mu_KEY.mu_encTyp = mu_SK;
mu_KEY.mu_ag = mu_indexTyperuder_;
mu_msg1.mu_k = mu_KEY;
mu_msgs[5] = mu_msg1;
mu_msg1.clear();
mu_msg1.mu_msgType = mu_nonce;
mu_msg1.mu_noncePart = mu_Na1;
mu_msgs[6] = mu_msg1;
mu_msg1.clear();
mu_msg1.mu_msgType = mu_nonce;
mu_msg1.mu_noncePart = mu_Nb1;
mu_msgs[7] = mu_msg1;
mu_endn = 0;
mu_msg_end = 7;
mu_ded_end = 0;
mu_Deductions.clear();
  };

};
class StartStateGenerator
{
  StartStateBase0 S0;
public:
void Code(unsigned short r)
{
  if (r<=0) { S0.Code(r-0); return; }
}
char * Name(unsigned short r)
{
  if (r<=0) return S0.Name(r-0);
  return NULL;
}
};
const rulerec startstates[] = {
{ NULL, NULL, NULL, FALSE},
};
unsigned short StartStateManager::numstartstates = 1;

/********************
  Invariant records
 ********************/
const rulerec invariants[] = {
{ NULL, NULL, NULL, FALSE }};
const unsigned short numinvariants = 0;

/********************
  Normal/Canonicalization for scalarset
 ********************/
/*
allMsgnum2:NoScalarset
allMsg4s:NoScalarset
allMsg3s:NoScalarset
allMsg2s:NoScalarset
allMsg1s:NoScalarset
allMsgs:NoScalarset
Deductions:NoScalarset
end2:NoScalarset
endn:NoScalarset
msg:NoScalarset
emit:NoScalarset
Spy_known:NoScalarset
de1:NoScalarset
eve_end:NoScalarset
ded_end:NoScalarset
msg_end:NoScalarset
bobs:NoScalarset
alices:NoScalarset
ch:NoScalarset
indexTyperuder:NoScalarset
msgs:NoScalarset
msg1:NoScalarset
KEY:NoScalarset
eve:NoScalarset
end1:NoScalarset
allMsgnum1:NoScalarset
allMsgnum3:NoScalarset
systemEvent:NoScalarset
*/

/********************
Code for symmetry
 ********************/

/********************
 Permutation Set Class
 ********************/
class PermSet
{
public:
  // book keeping
  enum PresentationType {Simple, Explicit};
  PresentationType Presentation;

  void ResetToSimple();
  void ResetToExplicit();
  void SimpleToExplicit();
  void SimpleToOne();
  bool NextPermutation();

  void Print_in_size()
  { int ret=0; for (int i=0; i<count; i++) if (in[i]) ret++; cout << "in_size:" << ret << "\n"; }


  /********************
   Simple and efficient representation
   ********************/
  bool AlreadyOnlyOneRemain;
  bool MoreThanOneRemain();


  /********************
   Explicit representation
  ********************/
  unsigned long size;
  unsigned long count;
  // in will be of product of factorial sizes for fast canonicalize
  // in will be of size 1 for reduced local memory canonicalize
  bool * in;

  // auxiliary for explicit representation

  // in/perm/revperm will be of factorial size for fast canonicalize
  // they will be of size 1 for reduced local memory canonicalize
  // second range will be size of the scalarset
  // procedure for explicit representation
  // General procedure
  PermSet();
  bool In(int i) const { return in[i]; };
  void Add(int i) { for (int j=0; j<i; j++) in[j] = FALSE;};
  void Remove(int i) { in[i] = FALSE; };
};
bool PermSet::MoreThanOneRemain()
{
  int i,j;
  if (AlreadyOnlyOneRemain)
    return FALSE;
  else {
  }
  AlreadyOnlyOneRemain = TRUE;
  return FALSE;
}
PermSet::PermSet()
: Presentation(Simple)
{
  int i,j,k;
  if (  args->sym_alg.mode == argsym_alg::Exhaustive_Fast_Canonicalize) {

  /********************
   declaration of class variables
  ********************/
  in = new bool[1];

    // Set perm and revperm

    // setting up combination of permutations
    // for different scalarset
    int carry;
    size = 1;
    count = 1;
    for (i=0; i<1; i++)
      {
        carry = 1;
        in[i]= TRUE;
    }
  }
  else
  {

  /********************
   declaration of class variables
  ********************/
  in = new bool[1];
  in[0] = TRUE;
  }
}
void PermSet::ResetToSimple()
{
  int i;

  AlreadyOnlyOneRemain = FALSE;
  Presentation = Simple;
}
void PermSet::ResetToExplicit()
{
  for (int i=0; i<1; i++) in[i] = TRUE;
  Presentation = Explicit;
}
void PermSet::SimpleToExplicit()
{
  int i,j,k;
  int start, class_size;

  // Setup range for mapping

  // To be In or not to be

  // setup explicit representation 
  // Set perm and revperm
  for (i=0; i<1; i++)
    {
      in[i] = TRUE;
    }
  Presentation = Explicit;
  if (args->test_parameter1.value==0) Print_in_size();
}
void PermSet::SimpleToOne()
{
  int i,j,k;
  int class_size;
  int start;


  // Setup range for mapping
  Presentation = Explicit;
}
bool PermSet::NextPermutation()
{
  bool nexted = FALSE;
  int start, end; 
  int class_size;
  int temp;
  int j,k;

  // algorithm
  // for each class
  //   if forall in the same class reverse_sorted, 
  //     { sort again; goto next class }
  //   else
  //     {
  //       nexted = TRUE;
  //       for (j from l to r)
  // 	       if (for all j+ are reversed sorted)
  // 	         {
  // 	           swap j, j+1
  // 	           sort all j+ again
  // 	           break;
  // 	         }
  //     }
if (!nexted) return FALSE;
  return TRUE;
}

/********************
 Symmetry Class
 ********************/
class SymmetryClass
{
  PermSet Perm;
  bool BestInitialized;
  state BestPermutedState;

  // utilities
  void SetBestResult(int i, state* temp);
  void ResetBestResult() {BestInitialized = FALSE;};

public:
  // initializer
  SymmetryClass() : Perm(), BestInitialized(FALSE) {};
  ~SymmetryClass() {};

  void Normalize(state* s);

  void Exhaustive_Fast_Canonicalize(state *s);
  void Heuristic_Fast_Canonicalize(state *s);
  void Heuristic_Small_Mem_Canonicalize(state *s);
  void Heuristic_Fast_Normalize(state *s);

  void MultisetSort(state* s);
};


/********************
 Symmetry Class Members
 ********************/
void SymmetryClass::MultisetSort(state* s)
{
        mu_allMsgnum2.MultisetSort();
        mu_allMsg4s.MultisetSort();
        mu_allMsg3s.MultisetSort();
        mu_allMsg2s.MultisetSort();
        mu_allMsg1s.MultisetSort();
        mu_allMsgs.MultisetSort();
        mu_Deductions.MultisetSort();
        mu_end2.MultisetSort();
        mu_endn.MultisetSort();
        mu_msg.MultisetSort();
        mu_emit.MultisetSort();
        mu_Spy_known.MultisetSort();
        mu_de1.MultisetSort();
        mu_eve_end.MultisetSort();
        mu_ded_end.MultisetSort();
        mu_msg_end.MultisetSort();
        mu_bobs.MultisetSort();
        mu_alices.MultisetSort();
        mu_ch.MultisetSort();
        mu_indexTyperuder.MultisetSort();
        mu_msgs.MultisetSort();
        mu_msg1.MultisetSort();
        mu_KEY.MultisetSort();
        mu_eve.MultisetSort();
        mu_end1.MultisetSort();
        mu_allMsgnum1.MultisetSort();
        mu_allMsgnum3.MultisetSort();
        mu_systemEvent.MultisetSort();
}
void SymmetryClass::Normalize(state* s)
{
  switch (args->sym_alg.mode) {
  case argsym_alg::Exhaustive_Fast_Canonicalize:
    Exhaustive_Fast_Canonicalize(s);
    break;
  case argsym_alg::Heuristic_Fast_Canonicalize:
    Heuristic_Fast_Canonicalize(s);
    break;
  case argsym_alg::Heuristic_Small_Mem_Canonicalize:
    Heuristic_Small_Mem_Canonicalize(s);
    break;
  case argsym_alg::Heuristic_Fast_Normalize:
    Heuristic_Fast_Normalize(s);
    break;
  default:
    Heuristic_Fast_Canonicalize(s);
  }
}

/********************
 Permute and Canonicalize function for different types
 ********************/
void mu_1_indexType::Permute(PermSet& Perm, int i) {};
void mu_1_indexType::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_indexType::Canonicalize(PermSet& Perm) {};
void mu_1_indexType::SimpleLimit(PermSet& Perm) {};
void mu_1_indexType::ArrayLimit(PermSet& Perm) {};
void mu_1_indexType::Limit(PermSet& Perm) {};
void mu_1_indexType::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_aliceNums::Permute(PermSet& Perm, int i) {};
void mu_1_aliceNums::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_aliceNums::Canonicalize(PermSet& Perm) {};
void mu_1_aliceNums::SimpleLimit(PermSet& Perm) {};
void mu_1_aliceNums::ArrayLimit(PermSet& Perm) {};
void mu_1_aliceNums::Limit(PermSet& Perm) {};
void mu_1_aliceNums::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_bobNums::Permute(PermSet& Perm, int i) {};
void mu_1_bobNums::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_bobNums::Canonicalize(PermSet& Perm) {};
void mu_1_bobNums::SimpleLimit(PermSet& Perm) {};
void mu_1_bobNums::ArrayLimit(PermSet& Perm) {};
void mu_1_bobNums::Limit(PermSet& Perm) {};
void mu_1_bobNums::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_msgLen::Permute(PermSet& Perm, int i) {};
void mu_1_msgLen::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_msgLen::Canonicalize(PermSet& Perm) {};
void mu_1_msgLen::SimpleLimit(PermSet& Perm) {};
void mu_1_msgLen::ArrayLimit(PermSet& Perm) {};
void mu_1_msgLen::Limit(PermSet& Perm) {};
void mu_1_msgLen::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_DeductionsNums::Permute(PermSet& Perm, int i) {};
void mu_1_DeductionsNums::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_DeductionsNums::Canonicalize(PermSet& Perm) {};
void mu_1_DeductionsNums::SimpleLimit(PermSet& Perm) {};
void mu_1_DeductionsNums::ArrayLimit(PermSet& Perm) {};
void mu_1_DeductionsNums::Limit(PermSet& Perm) {};
void mu_1_DeductionsNums::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_msgpassingNums::Permute(PermSet& Perm, int i) {};
void mu_1_msgpassingNums::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_msgpassingNums::Canonicalize(PermSet& Perm) {};
void mu_1_msgpassingNums::SimpleLimit(PermSet& Perm) {};
void mu_1_msgpassingNums::ArrayLimit(PermSet& Perm) {};
void mu_1_msgpassingNums::Limit(PermSet& Perm) {};
void mu_1_msgpassingNums::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_eventNums::Permute(PermSet& Perm, int i) {};
void mu_1_eventNums::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_eventNums::Canonicalize(PermSet& Perm) {};
void mu_1_eventNums::SimpleLimit(PermSet& Perm) {};
void mu_1_eventNums::ArrayLimit(PermSet& Perm) {};
void mu_1_eventNums::Limit(PermSet& Perm) {};
void mu_1_eventNums::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_AgentType::Permute(PermSet& Perm, int i) {};
void mu_1_AgentType::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_AgentType::Canonicalize(PermSet& Perm) {};
void mu_1_AgentType::SimpleLimit(PermSet& Perm) {};
void mu_1_AgentType::ArrayLimit(PermSet& Perm) {};
void mu_1_AgentType::Limit(PermSet& Perm) {};
void mu_1_AgentType::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_NonceType::Permute(PermSet& Perm, int i) {};
void mu_1_NonceType::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_NonceType::Canonicalize(PermSet& Perm) {};
void mu_1_NonceType::SimpleLimit(PermSet& Perm) {};
void mu_1_NonceType::ArrayLimit(PermSet& Perm) {};
void mu_1_NonceType::Limit(PermSet& Perm) {};
void mu_1_NonceType::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_EncryptType::Permute(PermSet& Perm, int i) {};
void mu_1_EncryptType::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_EncryptType::Canonicalize(PermSet& Perm) {};
void mu_1_EncryptType::SimpleLimit(PermSet& Perm) {};
void mu_1_EncryptType::ArrayLimit(PermSet& Perm) {};
void mu_1_EncryptType::Limit(PermSet& Perm) {};
void mu_1_EncryptType::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_KeyType::Permute(PermSet& Perm, int i)
{
};
void mu_1_KeyType::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_KeyType::Canonicalize(PermSet& Perm)
{
};
void mu_1_KeyType::SimpleLimit(PermSet& Perm){}
void mu_1_KeyType::ArrayLimit(PermSet& Perm){}
void mu_1_KeyType::Limit(PermSet& Perm)
{
};
void mu_1_KeyType::MultisetLimit(PermSet& Perm)
{
};
void mu_1_AliceStatus::Permute(PermSet& Perm, int i) {};
void mu_1_AliceStatus::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_AliceStatus::Canonicalize(PermSet& Perm) {};
void mu_1_AliceStatus::SimpleLimit(PermSet& Perm) {};
void mu_1_AliceStatus::ArrayLimit(PermSet& Perm) {};
void mu_1_AliceStatus::Limit(PermSet& Perm) {};
void mu_1_AliceStatus::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_BobStatus::Permute(PermSet& Perm, int i) {};
void mu_1_BobStatus::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_BobStatus::Canonicalize(PermSet& Perm) {};
void mu_1_BobStatus::SimpleLimit(PermSet& Perm) {};
void mu_1_BobStatus::ArrayLimit(PermSet& Perm) {};
void mu_1_BobStatus::Limit(PermSet& Perm) {};
void mu_1_BobStatus::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_indexTyperuderStatus::Permute(PermSet& Perm, int i) {};
void mu_1_indexTyperuderStatus::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_indexTyperuderStatus::Canonicalize(PermSet& Perm) {};
void mu_1_indexTyperuderStatus::SimpleLimit(PermSet& Perm) {};
void mu_1_indexTyperuderStatus::ArrayLimit(PermSet& Perm) {};
void mu_1_indexTyperuderStatus::Limit(PermSet& Perm) {};
void mu_1_indexTyperuderStatus::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_MsgType::Permute(PermSet& Perm, int i) {};
void mu_1_MsgType::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_MsgType::Canonicalize(PermSet& Perm) {};
void mu_1_MsgType::SimpleLimit(PermSet& Perm) {};
void mu_1_MsgType::ArrayLimit(PermSet& Perm) {};
void mu_1_MsgType::Limit(PermSet& Perm) {};
void mu_1_MsgType::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_Message::Permute(PermSet& Perm, int i)
{
};
void mu_1_Message::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_Message::Canonicalize(PermSet& Perm)
{
};
void mu_1_Message::SimpleLimit(PermSet& Perm){}
void mu_1_Message::ArrayLimit(PermSet& Perm){}
void mu_1_Message::Limit(PermSet& Perm)
{
};
void mu_1_Message::MultisetLimit(PermSet& Perm)
{
};
void mu_1_DeduceType::Permute(PermSet& Perm, int i) {};
void mu_1_DeduceType::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_DeduceType::Canonicalize(PermSet& Perm) {};
void mu_1_DeduceType::SimpleLimit(PermSet& Perm) {};
void mu_1_DeduceType::ArrayLimit(PermSet& Perm) {};
void mu_1_DeduceType::Limit(PermSet& Perm) {};
void mu_1_DeduceType::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_TDeduction::Permute(PermSet& Perm, int i)
{
};
void mu_1_TDeduction::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_TDeduction::Canonicalize(PermSet& Perm)
{
};
void mu_1_TDeduction::SimpleLimit(PermSet& Perm){}
void mu_1_TDeduction::ArrayLimit(PermSet& Perm){}
void mu_1_TDeduction::Limit(PermSet& Perm)
{
};
void mu_1_TDeduction::MultisetLimit(PermSet& Perm)
{
};
void mu_1_Channel::Permute(PermSet& Perm, int i)
{
};
void mu_1_Channel::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_Channel::Canonicalize(PermSet& Perm)
{
};
void mu_1_Channel::SimpleLimit(PermSet& Perm){}
void mu_1_Channel::ArrayLimit(PermSet& Perm){}
void mu_1_Channel::Limit(PermSet& Perm)
{
};
void mu_1_Channel::MultisetLimit(PermSet& Perm)
{
};
void mu_1_RoleInit::Permute(PermSet& Perm, int i)
{
};
void mu_1_RoleInit::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_RoleInit::Canonicalize(PermSet& Perm)
{
};
void mu_1_RoleInit::SimpleLimit(PermSet& Perm){}
void mu_1_RoleInit::ArrayLimit(PermSet& Perm){}
void mu_1_RoleInit::Limit(PermSet& Perm)
{
};
void mu_1_RoleInit::MultisetLimit(PermSet& Perm)
{
};
void mu_1_RoleResp::Permute(PermSet& Perm, int i)
{
};
void mu_1_RoleResp::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_RoleResp::Canonicalize(PermSet& Perm)
{
};
void mu_1_RoleResp::SimpleLimit(PermSet& Perm){}
void mu_1_RoleResp::ArrayLimit(PermSet& Perm){}
void mu_1_RoleResp::Limit(PermSet& Perm)
{
};
void mu_1_RoleResp::MultisetLimit(PermSet& Perm)
{
};
void mu_1_RoleindexTyperuder::Permute(PermSet& Perm, int i)
{
};
void mu_1_RoleindexTyperuder::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_RoleindexTyperuder::Canonicalize(PermSet& Perm)
{
};
void mu_1_RoleindexTyperuder::SimpleLimit(PermSet& Perm){}
void mu_1_RoleindexTyperuder::ArrayLimit(PermSet& Perm){}
void mu_1_RoleindexTyperuder::Limit(PermSet& Perm)
{
};
void mu_1_RoleindexTyperuder::MultisetLimit(PermSet& Perm)
{
};
void mu_1_Event::Permute(PermSet& Perm, int i)
{
};
void mu_1_Event::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_Event::Canonicalize(PermSet& Perm)
{
};
void mu_1_Event::SimpleLimit(PermSet& Perm){}
void mu_1_Event::ArrayLimit(PermSet& Perm){}
void mu_1_Event::Limit(PermSet& Perm)
{
};
void mu_1_Event::MultisetLimit(PermSet& Perm)
{
};
void mu_1__type_0::Permute(PermSet& Perm, int i)
{
  static mu_1__type_0 temp("Permute_mu_1__type_0",-1);
  int j;
  for (j=0; j<3; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_0::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_0::Canonicalize(PermSet& Perm){};
void mu_1__type_0::SimpleLimit(PermSet& Perm){}
void mu_1__type_0::ArrayLimit(PermSet& Perm) {}
void mu_1__type_0::Limit(PermSet& Perm){}
void mu_1__type_0::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_1::Permute(PermSet& Perm, int i)
{
  static mu_1__type_1 temp("Permute_mu_1__type_1",-1);
  int j;
  for (j=0; j<1; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_1::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_1::Canonicalize(PermSet& Perm){};
void mu_1__type_1::SimpleLimit(PermSet& Perm){}
void mu_1__type_1::ArrayLimit(PermSet& Perm) {}
void mu_1__type_1::Limit(PermSet& Perm){}
void mu_1__type_1::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_2::Permute(PermSet& Perm, int i)
{
  static mu_1__type_2 temp("Permute_mu_1__type_2",-1);
  int j;
  for (j=0; j<1; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_2::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_2::Canonicalize(PermSet& Perm){};
void mu_1__type_2::SimpleLimit(PermSet& Perm){}
void mu_1__type_2::ArrayLimit(PermSet& Perm) {}
void mu_1__type_2::Limit(PermSet& Perm){}
void mu_1__type_2::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_3::Permute(PermSet& Perm, int i)
{
  static mu_1__type_3 temp("Permute_mu_1__type_3",-1);
  int j;
  for (j=0; j<201; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_3::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_3::Canonicalize(PermSet& Perm){};
void mu_1__type_3::SimpleLimit(PermSet& Perm){}
void mu_1__type_3::ArrayLimit(PermSet& Perm) {}
void mu_1__type_3::Limit(PermSet& Perm){}
void mu_1__type_3::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_4::Permute(PermSet& Perm, int i) {};
void mu_1__type_4::SimpleCanonicalize(PermSet& Perm) {};
void mu_1__type_4::Canonicalize(PermSet& Perm) {};
void mu_1__type_4::SimpleLimit(PermSet& Perm) {};
void mu_1__type_4::ArrayLimit(PermSet& Perm) {};
void mu_1__type_4::Limit(PermSet& Perm) {};
void mu_1__type_4::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1__type_5::Permute(PermSet& Perm, int i) {};
void mu_1__type_5::SimpleCanonicalize(PermSet& Perm) {};
void mu_1__type_5::Canonicalize(PermSet& Perm) {};
void mu_1__type_5::SimpleLimit(PermSet& Perm) {};
void mu_1__type_5::ArrayLimit(PermSet& Perm) {};
void mu_1__type_5::Limit(PermSet& Perm) {};
void mu_1__type_5::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1__type_6::Permute(PermSet& Perm, int i)
{
  static mu_1__type_6 temp("Permute_mu_1__type_6",-1);
  int j;
  for (j=0; j<200; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_6::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_6::Canonicalize(PermSet& Perm){};
void mu_1__type_6::SimpleLimit(PermSet& Perm){}
void mu_1__type_6::ArrayLimit(PermSet& Perm) {}
void mu_1__type_6::Limit(PermSet& Perm){}
void mu_1__type_6::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_7::Permute(PermSet& Perm, int i)
{
  static mu_1__type_7 temp("Permute_mu_1__type_7",-1);
  int j;
  for (j=0; j<200; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_7::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_7::Canonicalize(PermSet& Perm){};
void mu_1__type_7::SimpleLimit(PermSet& Perm){}
void mu_1__type_7::ArrayLimit(PermSet& Perm) {}
void mu_1__type_7::Limit(PermSet& Perm){}
void mu_1__type_7::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_8::Permute(PermSet& Perm, int i)
{
  static mu_1__type_8 temp("Permute_mu_1__type_8",-1);
  int j;
  for (j=0; j<400; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_8::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_8::Canonicalize(PermSet& Perm){};
void mu_1__type_8::SimpleLimit(PermSet& Perm){}
void mu_1__type_8::ArrayLimit(PermSet& Perm) {}
void mu_1__type_8::Limit(PermSet& Perm){}
void mu_1__type_8::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_9::Permute(PermSet& Perm, int i)
{
  static mu_1__type_9 temp("Permute_mu_1__type_9",-1);
  int j;
  for (j=0; j<200; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_9::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_9::Canonicalize(PermSet& Perm){};
void mu_1__type_9::SimpleLimit(PermSet& Perm){}
void mu_1__type_9::ArrayLimit(PermSet& Perm) {}
void mu_1__type_9::Limit(PermSet& Perm){}
void mu_1__type_9::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_10::Permute(PermSet& Perm, int i)
{
  static mu_1__type_10 temp("Permute_mu_1__type_10",-1);
  int j;
  for (j=0; j<200; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_10::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_10::Canonicalize(PermSet& Perm){};
void mu_1__type_10::SimpleLimit(PermSet& Perm){}
void mu_1__type_10::ArrayLimit(PermSet& Perm) {}
void mu_1__type_10::Limit(PermSet& Perm){}
void mu_1__type_10::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_11::Permute(PermSet& Perm, int i)
{
  static mu_1__type_11 temp("Permute_mu_1__type_11",-1);
  int j;
  for (j=0; j<200; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_11::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_11::Canonicalize(PermSet& Perm){};
void mu_1__type_11::SimpleLimit(PermSet& Perm){}
void mu_1__type_11::ArrayLimit(PermSet& Perm) {}
void mu_1__type_11::Limit(PermSet& Perm){}
void mu_1__type_11::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_12::Permute(PermSet& Perm, int i)
{
  static mu_1__type_12 temp("Permute_mu_1__type_12",-1);
  int j;
  for (j=0; j<200; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_12::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_12::Canonicalize(PermSet& Perm){};
void mu_1__type_12::SimpleLimit(PermSet& Perm){}
void mu_1__type_12::ArrayLimit(PermSet& Perm) {}
void mu_1__type_12::Limit(PermSet& Perm){}
void mu_1__type_12::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_13::Permute(PermSet& Perm, int i)
{
  static mu_1__type_13 temp("Permute_mu_1__type_13",-1);
  int j;
  for (j=0; j<200; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_13::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_13::Canonicalize(PermSet& Perm){};
void mu_1__type_13::SimpleLimit(PermSet& Perm){}
void mu_1__type_13::ArrayLimit(PermSet& Perm) {}
void mu_1__type_13::Limit(PermSet& Perm){}
void mu_1__type_13::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_14::Permute(PermSet& Perm, int i)
{
  static mu_1__type_14 temp("Permute_mu_1__type_14",-1);
  int j;
  for (j=0; j<50; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_14::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_14::Canonicalize(PermSet& Perm){};
void mu_1__type_14::SimpleLimit(PermSet& Perm){}
void mu_1__type_14::ArrayLimit(PermSet& Perm) {}
void mu_1__type_14::Limit(PermSet& Perm){}
void mu_1__type_14::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };

/********************
 Auxiliary function for error trace printing
 ********************/
bool match(state* ns, StatePtr p)
{
  int i;
  static PermSet Perm;
  static state temp;
  StateCopy(&temp, ns);
  if (args->symmetry_reduction.value)
    {
      if (  args->sym_alg.mode == argsym_alg::Exhaustive_Fast_Canonicalize) {
        Perm.ResetToExplicit();
        for (i=0; i<Perm.count; i++)
          if (Perm.In(i))
            {
              if (ns != workingstate)
                  StateCopy(workingstate, ns);
              
              mu_allMsgnum2.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_allMsgnum2.MultisetSort();
              mu_allMsg4s.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_allMsg4s.MultisetSort();
              mu_allMsg3s.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_allMsg3s.MultisetSort();
              mu_allMsg2s.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_allMsg2s.MultisetSort();
              mu_allMsg1s.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_allMsg1s.MultisetSort();
              mu_allMsgs.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_allMsgs.MultisetSort();
              mu_Deductions.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_Deductions.MultisetSort();
              mu_end2.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_end2.MultisetSort();
              mu_endn.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_endn.MultisetSort();
              mu_msg.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_msg.MultisetSort();
              mu_emit.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_emit.MultisetSort();
              mu_Spy_known.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_Spy_known.MultisetSort();
              mu_de1.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_de1.MultisetSort();
              mu_eve_end.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_eve_end.MultisetSort();
              mu_ded_end.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_ded_end.MultisetSort();
              mu_msg_end.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_msg_end.MultisetSort();
              mu_bobs.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_bobs.MultisetSort();
              mu_alices.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_alices.MultisetSort();
              mu_ch.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_ch.MultisetSort();
              mu_indexTyperuder.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_indexTyperuder.MultisetSort();
              mu_msgs.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_msgs.MultisetSort();
              mu_msg1.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_msg1.MultisetSort();
              mu_KEY.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_KEY.MultisetSort();
              mu_eve.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_eve.MultisetSort();
              mu_end1.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_end1.MultisetSort();
              mu_allMsgnum1.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_allMsgnum1.MultisetSort();
              mu_allMsgnum3.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_allMsgnum3.MultisetSort();
              mu_systemEvent.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_systemEvent.MultisetSort();
            if (p.compare(workingstate)) {
              StateCopy(workingstate,&temp); return TRUE; }
          }
        StateCopy(workingstate,&temp);
        return FALSE;
      }
      else {
        Perm.ResetToSimple();
        Perm.SimpleToOne();
        if (ns != workingstate)
          StateCopy(workingstate, ns);

          mu_allMsgnum2.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_allMsgnum2.MultisetSort();
          mu_allMsg4s.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_allMsg4s.MultisetSort();
          mu_allMsg3s.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_allMsg3s.MultisetSort();
          mu_allMsg2s.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_allMsg2s.MultisetSort();
          mu_allMsg1s.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_allMsg1s.MultisetSort();
          mu_allMsgs.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_allMsgs.MultisetSort();
          mu_Deductions.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_Deductions.MultisetSort();
          mu_end2.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_end2.MultisetSort();
          mu_endn.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_endn.MultisetSort();
          mu_msg.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_msg.MultisetSort();
          mu_emit.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_emit.MultisetSort();
          mu_Spy_known.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_Spy_known.MultisetSort();
          mu_de1.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_de1.MultisetSort();
          mu_eve_end.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_eve_end.MultisetSort();
          mu_ded_end.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_ded_end.MultisetSort();
          mu_msg_end.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_msg_end.MultisetSort();
          mu_bobs.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_bobs.MultisetSort();
          mu_alices.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_alices.MultisetSort();
          mu_ch.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_ch.MultisetSort();
          mu_indexTyperuder.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_indexTyperuder.MultisetSort();
          mu_msgs.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_msgs.MultisetSort();
          mu_msg1.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_msg1.MultisetSort();
          mu_KEY.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_KEY.MultisetSort();
          mu_eve.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_eve.MultisetSort();
          mu_end1.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_end1.MultisetSort();
          mu_allMsgnum1.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_allMsgnum1.MultisetSort();
          mu_allMsgnum3.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_allMsgnum3.MultisetSort();
          mu_systemEvent.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_systemEvent.MultisetSort();
        if (p.compare(workingstate)) {
          StateCopy(workingstate,&temp); return TRUE; }

        while (Perm.NextPermutation())
          {
            if (ns != workingstate)
              StateCopy(workingstate, ns);
              
              mu_allMsgnum2.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_allMsgnum2.MultisetSort();
              mu_allMsg4s.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_allMsg4s.MultisetSort();
              mu_allMsg3s.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_allMsg3s.MultisetSort();
              mu_allMsg2s.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_allMsg2s.MultisetSort();
              mu_allMsg1s.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_allMsg1s.MultisetSort();
              mu_allMsgs.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_allMsgs.MultisetSort();
              mu_Deductions.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_Deductions.MultisetSort();
              mu_end2.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_end2.MultisetSort();
              mu_endn.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_endn.MultisetSort();
              mu_msg.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_msg.MultisetSort();
              mu_emit.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_emit.MultisetSort();
              mu_Spy_known.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_Spy_known.MultisetSort();
              mu_de1.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_de1.MultisetSort();
              mu_eve_end.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_eve_end.MultisetSort();
              mu_ded_end.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_ded_end.MultisetSort();
              mu_msg_end.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_msg_end.MultisetSort();
              mu_bobs.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_bobs.MultisetSort();
              mu_alices.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_alices.MultisetSort();
              mu_ch.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_ch.MultisetSort();
              mu_indexTyperuder.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_indexTyperuder.MultisetSort();
              mu_msgs.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_msgs.MultisetSort();
              mu_msg1.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_msg1.MultisetSort();
              mu_KEY.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_KEY.MultisetSort();
              mu_eve.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_eve.MultisetSort();
              mu_end1.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_end1.MultisetSort();
              mu_allMsgnum1.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_allMsgnum1.MultisetSort();
              mu_allMsgnum3.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_allMsgnum3.MultisetSort();
              mu_systemEvent.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_systemEvent.MultisetSort();
            if (p.compare(workingstate)) {
              StateCopy(workingstate,&temp); return TRUE; }
          }
        StateCopy(workingstate,&temp);
        return FALSE;
      }
    }
  if (!args->symmetry_reduction.value
      && args->multiset_reduction.value)
    {
      if (ns != workingstate)
          StateCopy(workingstate, ns);
      mu_allMsgnum2.MultisetSort();
      mu_allMsg4s.MultisetSort();
      mu_allMsg3s.MultisetSort();
      mu_allMsg2s.MultisetSort();
      mu_allMsg1s.MultisetSort();
      mu_allMsgs.MultisetSort();
      mu_Deductions.MultisetSort();
      mu_end2.MultisetSort();
      mu_endn.MultisetSort();
      mu_msg.MultisetSort();
      mu_emit.MultisetSort();
      mu_Spy_known.MultisetSort();
      mu_de1.MultisetSort();
      mu_eve_end.MultisetSort();
      mu_ded_end.MultisetSort();
      mu_msg_end.MultisetSort();
      mu_bobs.MultisetSort();
      mu_alices.MultisetSort();
      mu_ch.MultisetSort();
      mu_indexTyperuder.MultisetSort();
      mu_msgs.MultisetSort();
      mu_msg1.MultisetSort();
      mu_KEY.MultisetSort();
      mu_eve.MultisetSort();
      mu_end1.MultisetSort();
      mu_allMsgnum1.MultisetSort();
      mu_allMsgnum3.MultisetSort();
      mu_systemEvent.MultisetSort();
      if (p.compare(workingstate)) {
        StateCopy(workingstate,&temp); return TRUE; }
      StateCopy(workingstate,&temp);
      return FALSE;
    }
  return (p.compare(ns));
}

/********************
 Canonicalization by fast exhaustive generation of
 all permutations
 ********************/
void SymmetryClass::Exhaustive_Fast_Canonicalize(state* s)
{
  int i;
  static state temp;
  Perm.ResetToExplicit();

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_allMsgnum2.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_allMsgnum2.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_allMsg4s.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_allMsg4s.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_allMsg3s.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_allMsg3s.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_allMsg2s.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_allMsg2s.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_allMsg1s.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_allMsg1s.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_allMsgs.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_allMsgs.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_Deductions.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_Deductions.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_end2.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_end2.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_endn.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_endn.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_msg.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_msg.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_emit.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_emit.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_Spy_known.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_Spy_known.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_de1.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_de1.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_eve_end.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_eve_end.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_ded_end.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_ded_end.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_msg_end.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_msg_end.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_bobs.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_bobs.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_alices.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_alices.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_ch.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_ch.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_indexTyperuder.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_indexTyperuder.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_msgs.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_msgs.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_msg1.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_msg1.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_KEY.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_KEY.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_eve.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_eve.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_end1.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_end1.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_allMsgnum1.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_allMsgnum1.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_allMsgnum3.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_allMsgnum3.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_systemEvent.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_systemEvent.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

};

/********************
 Canonicalization by fast simple variable canonicalization,
 fast simple scalarset array canonicalization,
 fast restriction on permutation set with simple scalarset array of scalarset,
 and fast exhaustive generation of
 all permutations for other variables
 ********************/
void SymmetryClass::Heuristic_Fast_Canonicalize(state* s)
{
  int i;
  static state temp;

  Perm.ResetToSimple();

};

/********************
 Canonicalization by fast simple variable canonicalization,
 fast simple scalarset array canonicalization,
 fast restriction on permutation set with simple scalarset array of scalarset,
 and fast exhaustive generation of
 all permutations for other variables
 and use less local memory
 ********************/
void SymmetryClass::Heuristic_Small_Mem_Canonicalize(state* s)
{
  unsigned long cycle;
  static state temp;

  Perm.ResetToSimple();

};

/********************
 Normalization by fast simple variable canonicalization,
 fast simple scalarset array canonicalization,
 fast restriction on permutation set with simple scalarset array of scalarset,
 and for all other variables, pick any remaining permutation
 ********************/
void SymmetryClass::Heuristic_Fast_Normalize(state* s)
{
  int i;
  static state temp;

  Perm.ResetToSimple();

};

/********************
  Include
 ********************/
#include "mu_epilog.hpp"