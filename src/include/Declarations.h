#ifndef DECLARATIONS_H
#define DECLARATIONS_H


typedef int MoreauObj;

typedef struct MoreauBoolean MoreauBoolean;
typedef struct MoreauFunction MoreauFunction;
typedef struct MoreauNumber MoreauNumber;
typedef struct MoreauError MoreauError;
typedef struct MoreauFlowControl MoreauFlowControl;
typedef struct MoreauList MoreauList	;
typedef struct MoreauSymbol MoreauSymbol;
typedef struct MoreauMacro MoreauMacro;

typedef struct MoreauToken MoreauToken;
typedef struct MoreauParseTree MoreauParseTree;

typedef struct Scope Scope;
typedef struct VarBinding VarBinding;
typedef struct ScopeStack ScopeStack;
typedef struct Argument Argument;

typedef struct MoreauMemHeap MoreauMemHeap;

typedef struct Position Position;
typedef struct CharList CharList;

#endif 