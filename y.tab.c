/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 1



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     T_Void = 258,
     T_Bool = 259,
     T_Int = 260,
     T_Double = 261,
     T_String = 262,
     T_Class = 263,
     T_LessEqual = 264,
     T_GreaterEqual = 265,
     T_Equal = 266,
     T_NotEqual = 267,
     T_Dims = 268,
     T_Increment = 269,
     T_Decrement = 270,
     T_And = 271,
     T_Or = 272,
     T_Null = 273,
     T_Extends = 274,
     T_This = 275,
     T_Interface = 276,
     T_Implements = 277,
     T_While = 278,
     T_For = 279,
     T_If = 280,
     T_Else = 281,
     T_Return = 282,
     T_Break = 283,
     T_Switch = 284,
     T_Case = 285,
     T_Default = 286,
     T_New = 287,
     T_NewArray = 288,
     T_Print = 289,
     T_ReadInteger = 290,
     T_ReadLine = 291,
     T_Identifier = 292,
     T_StringConstant = 293,
     T_IntConstant = 294,
     T_DoubleConstant = 295,
     T_BoolConstant = 296,
     UMINUS = 297,
     IFX = 298
   };
#endif
/* Tokens.  */
#define T_Void 258
#define T_Bool 259
#define T_Int 260
#define T_Double 261
#define T_String 262
#define T_Class 263
#define T_LessEqual 264
#define T_GreaterEqual 265
#define T_Equal 266
#define T_NotEqual 267
#define T_Dims 268
#define T_Increment 269
#define T_Decrement 270
#define T_And 271
#define T_Or 272
#define T_Null 273
#define T_Extends 274
#define T_This 275
#define T_Interface 276
#define T_Implements 277
#define T_While 278
#define T_For 279
#define T_If 280
#define T_Else 281
#define T_Return 282
#define T_Break 283
#define T_Switch 284
#define T_Case 285
#define T_Default 286
#define T_New 287
#define T_NewArray 288
#define T_Print 289
#define T_ReadInteger 290
#define T_ReadLine 291
#define T_Identifier 292
#define T_StringConstant 293
#define T_IntConstant 294
#define T_DoubleConstant 295
#define T_BoolConstant 296
#define UMINUS 297
#define IFX 298




/* Copy the first part of user declarations.  */
#line 11 "parser.y"


/* Just like lex, the text within this first region delimited by %{ and %}
 * is assumed to be C/C++ code and will be copied verbatim to the y.tab.c
 * file ahead of the definitions of the yyparse() function. Add other header
 * file inclusions or C++ variable declarations/prototypes that are needed
 * by your code here.
 */
#include "scanner.h" // for yylex
#include "parser.h"
#include "errors.h"

void yyerror(const char *msg); // standard error-handling routine



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 41 "parser.y"
{
    Program *program;
    
    int integerConstant;
    bool boolConstant;
    char *stringConstant;
    double doubleConstant;
    char identifier[MaxIdentLen+1]; // +1 for terminating null
    Decl *decl;
    List<Decl*> *declList;
    VarDecl *vardecl;
    ClassDecl *classdecl;
    InterfaceDecl *interfacedecl;
    FnDecl *fndecl;
    Expr *expr;
    Expr *optexpr;
    List<Expr*> *exprs;
    
    Type *simpletype;
    NamedType *namedtype;
    ArrayType *arraytype;
    List<NamedType*> *implements;
    List<VarDecl*> *vardecls;
    
    StmtBlock *stmtblock;
    Stmt *stmt;
    IfStmt *ifstmt;
    WhileStmt *whilestmt;
    ForStmt *forstmt;
    ReturnStmt *rtnstmt;
    BreakStmt *brkstmt;
    PrintStmt *pntstmt;
    SwitchStmt *switchstmt;
    CaseStmt *casestmt;
    DefaultStmt *defaultstmt;
    List<Stmt*> *stmts;
    List<CaseStmt*> *casestmts;
    
    EmptyExpr *emptyExpr;
    IntConstant *intconst;
    DoubleConstant *doubleconst;
    BoolConstant *boolconst;
    StringConstant *stringconst;
    NullConstant *nullconst;
    
    ArithmeticExpr *arithmeticexpr;
    RelationalExpr *relationalexpr;
    EqualityExpr *equalityexpr;
    LogicalExpr *logicalexpr;
    AssignExpr *assignexpr;
    PostfixExpr *postfixexpr;
    
    LValue *lvalue;
    ArrayAccess *arrayaccess;
    FieldAccess *fieldaccess;
    Call *call;    
    
}
/* Line 193 of yacc.c.  */
#line 257 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 282 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
    YYLTYPE yyls;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  22
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   642

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  54
/* YYNRULES -- Number of rules.  */
#define YYNRULES  126
/* YYNRULES -- Number of states.  */
#define YYNSTATES  237

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   298

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    50,     2,     2,     2,    49,     2,     2,
      56,    57,    47,    45,    58,    46,    53,    48,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    61,    55,
      43,    42,    44,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    52,     2,    62,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    59,     2,    60,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    51,    54
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    12,    14,    16,    18,
      22,    24,    26,    28,    30,    32,    34,    36,    39,    46,
      53,    55,    56,    61,    64,    72,    79,    82,    83,    86,
      87,    91,    93,    96,    98,   100,   102,   108,   113,   116,
     118,   125,   132,   137,   141,   144,   145,   148,   150,   152,
     154,   156,   158,   160,   162,   164,   166,   169,   178,   181,
     183,   188,   192,   196,   197,   203,   211,   217,   227,   231,
     234,   240,   242,   243,   247,   249,   251,   253,   255,   257,
     259,   263,   265,   267,   269,   271,   273,   277,   281,   286,
     293,   297,   301,   305,   309,   313,   317,   320,   324,   328,
     332,   336,   340,   344,   348,   352,   355,   358,   361,   363,
     365,   367,   371,   376,   381,   388,   390,   391,   393,   395,
     397,   399,   401,   403,   405,   407,   409
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      64,     0,    -1,    65,    -1,    65,    66,    -1,    66,    -1,
      67,    -1,    71,    -1,    74,    -1,    80,    -1,    68,    37,
      55,    -1,     5,    -1,     6,    -1,     4,    -1,     7,    -1,
      69,    -1,    70,    -1,    37,    -1,    68,    13,    -1,    68,
      37,    56,    72,    57,    83,    -1,     3,    37,    56,    72,
      57,    83,    -1,    73,    -1,    -1,    73,    58,    68,    37,
      -1,    68,    37,    -1,     8,    37,    75,    76,    59,    78,
      60,    -1,     8,    37,    75,    76,    59,    60,    -1,    19,
      69,    -1,    -1,    22,    77,    -1,    -1,    77,    58,    69,
      -1,    69,    -1,    78,    79,    -1,    79,    -1,    67,    -1,
      71,    -1,    21,    37,    59,    81,    60,    -1,    21,    37,
      59,    60,    -1,    81,    82,    -1,    82,    -1,    68,    37,
      56,    72,    57,    55,    -1,     3,    37,    56,    72,    57,
      55,    -1,    59,    84,    85,    60,    -1,    59,    84,    60,
      -1,    84,    67,    -1,    -1,    85,    86,    -1,    86,    -1,
      91,    -1,    92,    -1,    93,    -1,    94,    -1,    87,    -1,
      95,    -1,    96,    -1,    83,    -1,    97,    55,    -1,    29,
      56,    99,    57,    59,    88,    90,    60,    -1,    88,    89,
      -1,    89,    -1,    30,   112,    61,    85,    -1,    30,   112,
      61,    -1,    31,    61,    85,    -1,    -1,    25,    56,    99,
      57,    86,    -1,    25,    56,    99,    57,    86,    26,    86,
      -1,    23,    56,    99,    57,    86,    -1,    24,    56,    97,
      55,    99,    55,    97,    57,    86,    -1,    27,    97,    55,
      -1,    28,    55,    -1,    34,    56,    98,    57,    55,    -1,
      99,    -1,    -1,    98,    58,    99,    -1,    99,    -1,   100,
      -1,   106,    -1,   111,    -1,    20,    -1,   109,    -1,    56,
      99,    57,    -1,   101,    -1,   102,    -1,   103,    -1,   104,
      -1,   105,    -1,    35,    56,    57,    -1,    36,    56,    57,
      -1,    32,    56,    37,    57,    -1,    33,    56,    99,    58,
      68,    57,    -1,   106,    42,    99,    -1,    99,    45,    99,
      -1,    99,    46,    99,    -1,    99,    47,    99,    -1,    99,
      48,    99,    -1,    99,    49,    99,    -1,    46,    99,    -1,
      99,    43,    99,    -1,    99,    44,    99,    -1,    99,     9,
      99,    -1,    99,    10,    99,    -1,    99,    11,    99,    -1,
      99,    12,    99,    -1,    99,    16,    99,    -1,    99,    17,
      99,    -1,    50,    99,    -1,   106,    14,    -1,   106,    15,
      -1,   107,    -1,   108,    -1,    37,    -1,    99,    53,    37,
      -1,    99,    52,    99,    62,    -1,    37,    56,   110,    57,
      -1,    99,    53,    37,    56,   110,    57,    -1,    98,    -1,
      -1,   112,    -1,   113,    -1,   114,    -1,   115,    -1,   116,
      -1,    39,    -1,    40,    -1,    41,    -1,    38,    -1,    18,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   205,   205,   217,   218,   221,   222,   223,   224,   227,
     230,   231,   232,   233,   234,   235,   237,   239,   242,   243,
     245,   246,   248,   249,   251,   252,   254,   255,   257,   258,
     260,   261,   263,   264,   266,   267,   269,   270,   272,   273,
     275,   276,   278,   279,   281,   282,   284,   285,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   297,   299,   300,
     302,   303,   305,   306,   308,   309,   311,   313,   315,   317,
     319,   321,   322,   324,   325,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     343,   345,   346,   347,   348,   349,   350,   352,   353,   354,
     355,   357,   358,   360,   361,   362,   364,   365,   367,   368,
     371,   372,   374,   376,   377,   379,   380,   382,   383,   384,
     385,   386,   388,   390,   392,   394,   396
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_Void", "T_Bool", "T_Int", "T_Double",
  "T_String", "T_Class", "T_LessEqual", "T_GreaterEqual", "T_Equal",
  "T_NotEqual", "T_Dims", "T_Increment", "T_Decrement", "T_And", "T_Or",
  "T_Null", "T_Extends", "T_This", "T_Interface", "T_Implements",
  "T_While", "T_For", "T_If", "T_Else", "T_Return", "T_Break", "T_Switch",
  "T_Case", "T_Default", "T_New", "T_NewArray", "T_Print", "T_ReadInteger",
  "T_ReadLine", "T_Identifier", "T_StringConstant", "T_IntConstant",
  "T_DoubleConstant", "T_BoolConstant", "'='", "'<'", "'>'", "'+'", "'-'",
  "'*'", "'/'", "'%'", "'!'", "UMINUS", "'['", "'.'", "IFX", "';'", "'('",
  "')'", "','", "'{'", "'}'", "':'", "']'", "$accept", "Program",
  "DeclList", "Decl", "VarDecl", "Type", "NamedType", "ArrayType",
  "FnDecl", "Formals", "Variables", "ClassDecl", "Extend", "Impl",
  "Implements", "Fields", "Field", "InterfaceDecl", "Prototypes",
  "Prototype", "StmtBlock", "VarDecls", "Stmts", "Stmt", "SwitchStmt",
  "Cases", "Case", "Default", "IfStmt", "WhileStmt", "ForStmt",
  "ReturnStmt", "BreakStmt", "PrintStmt", "OptExpr", "Exprs", "Expr",
  "AssignExpr", "ArithmeticExpr", "RelationalExpr", "EqualityExpr",
  "LogicalExpr", "PostfixExpr", "LValue", "FieldAccess", "ArrayAccess",
  "Call", "Actuals", "Constant", "IntConstant", "DoubleConstant",
  "BoolConstant", "StringConstant", "NullConstant", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,    61,    60,    62,    43,    45,    42,    47,    37,
      33,   297,    91,    46,   298,    59,    40,    41,    44,   123,
     125,    58,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    63,    64,    65,    65,    66,    66,    66,    66,    67,
      68,    68,    68,    68,    68,    68,    69,    70,    71,    71,
      72,    72,    73,    73,    74,    74,    75,    75,    76,    76,
      77,    77,    78,    78,    79,    79,    80,    80,    81,    81,
      82,    82,    83,    83,    84,    84,    85,    85,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    87,    88,    88,
      89,    89,    90,    90,    91,    91,    92,    93,    94,    95,
      96,    97,    97,    98,    98,    99,    99,    99,    99,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,    99,
     100,   101,   101,   101,   101,   101,   101,   102,   102,   102,
     102,   103,   103,   104,   104,   104,   105,   105,   106,   106,
     107,   107,   108,   109,   109,   110,   110,   111,   111,   111,
     111,   111,   112,   113,   114,   115,   116
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     2,     6,     6,
       1,     0,     4,     2,     7,     6,     2,     0,     2,     0,
       3,     1,     2,     1,     1,     1,     5,     4,     2,     1,
       6,     6,     4,     3,     2,     0,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     8,     2,     1,
       4,     3,     3,     0,     5,     7,     5,     9,     3,     2,
       5,     1,     0,     3,     1,     1,     1,     1,     1,     1,
       3,     1,     1,     1,     1,     1,     3,     3,     4,     6,
       3,     3,     3,     3,     3,     3,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     2,     1,     1,
       1,     3,     4,     4,     6,     1,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    12,    10,    11,    13,     0,     0,    16,     0,
       2,     4,     5,     0,    14,    15,     6,     7,     8,     0,
      27,     0,     1,     3,    17,     0,    21,     0,    29,     0,
       9,    21,     0,     0,    20,    26,     0,     0,     0,    37,
       0,     0,    39,     0,    23,     0,     0,    31,    28,     0,
       0,     0,    36,    38,     0,    45,    19,     0,     0,    25,
      34,    35,     0,    33,    21,    21,    18,    72,    22,    30,
      24,    32,     0,     0,   126,    78,     0,     0,     0,    72,
       0,     0,     0,     0,     0,     0,     0,   110,   125,   122,
     123,   124,     0,     0,     0,    43,    44,     0,    55,    72,
      47,    52,    48,    49,    50,    51,    53,    54,     0,    71,
      75,    81,    82,    83,    84,    85,    76,   108,   109,    79,
      77,   117,   118,   119,   120,   121,     0,     0,     0,    72,
       0,   110,     0,    69,     0,     0,     0,     0,     0,     0,
     116,    96,   105,     0,     0,    42,    46,    56,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   106,   107,     0,    41,    40,     0,     0,
       0,    68,     0,     0,     0,     0,    74,    86,    87,   115,
       0,    80,    99,   100,   101,   102,   103,   104,    97,    98,
      91,    92,    93,    94,    95,     0,   111,    90,    72,     0,
      72,     0,    88,     0,     0,     0,   113,   112,   116,    66,
       0,    64,     0,     0,    70,    73,     0,    72,    72,     0,
      63,    59,    89,   114,     0,    65,     0,     0,    58,     0,
      72,    61,    72,    57,    67,    60,    62
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    33,
      34,    17,    28,    37,    48,    62,    63,    18,    41,    42,
      98,    67,    99,   100,   101,   220,   221,   229,   102,   103,
     104,   105,   106,   107,   108,   179,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   180,   120,   121,
     122,   123,   124,   125
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -96
static const yytype_int16 yypact[] =
{
     106,   -35,   -96,   -96,   -96,   -96,    -5,     6,   -96,    59,
     106,   -96,   -96,    -1,   -96,   -96,   -96,   -96,   -96,   -11,
      60,    31,   -96,   -96,   -96,    44,    12,    26,    84,    18,
     -96,    12,    24,    61,    68,   -96,    26,    63,   101,   -96,
      45,    23,   -96,   111,   -96,    86,    12,   -96,   112,    82,
     113,   115,   -96,   -96,    86,   -96,   -96,    67,    26,   -96,
     -96,   -96,    88,   -96,    12,    12,   -96,   126,   -96,   -96,
     -96,   -96,   118,   121,   -96,   -96,   123,   124,   125,   586,
     128,   135,   136,   137,   140,   141,   146,    -2,   -96,   -96,
     -96,   -96,   586,   586,   586,   -96,   -96,    71,   -96,   478,
     -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   129,   375,
     -96,   -96,   -96,   -96,   -96,   -96,    -8,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,   148,   149,   586,   586,
     586,   158,   160,   -96,   586,   181,   586,   586,   162,   163,
     586,    64,    64,   234,   173,   -96,   -96,   -96,   586,   586,
     586,   586,   586,   586,   586,   586,   586,   586,   586,   586,
     586,   586,   192,   -96,   -96,   586,   -96,   -96,   249,   184,
     298,   -96,   313,   191,   189,    79,   375,   -96,   -96,   194,
     196,   -96,   164,   164,   431,   431,   442,   386,   164,   164,
      49,    49,    64,    64,    64,   178,   193,   375,   561,   586,
     561,   195,   -96,    12,   200,   586,   -96,   -96,   586,   -96,
     362,   230,   227,     0,   -96,   375,   205,   586,   561,   224,
      98,   -96,   -96,   -96,   207,   -96,   206,   208,   -96,   210,
     561,   521,   561,   -96,   -96,   521,   521
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -96,   -96,   -96,   258,    85,   -26,     4,   -96,    58,   -17,
     -96,   -96,   -96,   -96,   -96,   -96,   209,   -96,   -96,   231,
     -12,   -96,   -75,   -95,   -96,   -96,    53,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,   -78,   138,   -84,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,   -96,    66,   -96,    57,
     -96,   -96,   -96,   -96
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -73
static const yytype_int16 yytable[] =
{
      32,   132,    19,    40,   146,    32,   163,   164,   141,   142,
     143,   -16,    24,    24,    43,    40,     2,     3,     4,     5,
      57,    38,     2,     3,     4,     5,    38,     2,     3,     4,
       5,    35,    20,    56,   165,   -16,    25,    24,    32,    32,
      47,    97,    66,    21,   168,    26,   170,    72,    73,     8,
     172,   169,   174,   176,   140,     8,   176,   222,    24,    22,
       8,    44,    69,     8,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,    39,    27,
      24,   197,    51,    52,    24,     1,     2,     3,     4,     5,
      29,     1,     2,     3,     4,     5,   158,   159,   160,    30,
      31,   161,   162,   209,    68,   211,    36,    61,   144,     1,
       2,     3,     4,     5,     6,   210,   161,   162,    45,     8,
      61,   215,    49,   225,   176,     8,    46,     7,   219,   227,
       2,     3,     4,     5,    60,   234,   204,   205,    50,   224,
     146,   146,    59,     8,    74,    55,    75,    60,    70,    76,
      77,    78,    96,    79,    80,    81,   235,   236,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    54,    64,
      58,    65,    92,   -73,   -73,   126,    93,   213,   127,   128,
     129,   130,    94,   133,   147,    55,    95,   148,   149,   150,
     151,   134,   135,   136,   152,   153,   137,   138,   148,   149,
     150,   151,   139,   166,   167,   152,   153,   -73,   -73,   156,
     157,   158,   159,   160,   140,   171,   161,   162,   173,   177,
     178,   154,   155,   156,   157,   158,   159,   160,    30,   196,
     161,   162,   154,   155,   156,   157,   158,   159,   160,   199,
     207,   161,   162,   148,   149,   150,   151,   203,   202,   208,
     152,   153,   205,   206,   212,   214,   218,   219,   148,   149,
     150,   151,   223,    89,   230,   152,   153,   231,    23,   232,
     233,    71,    53,   228,   216,   175,   226,   154,   155,   156,
     157,   158,   159,   160,     0,     0,   161,   162,     0,     0,
       0,   181,   154,   155,   156,   157,   158,   159,   160,     0,
       0,   161,   162,     0,     0,     0,   198,   148,   149,   150,
     151,     0,     0,     0,   152,   153,     0,     0,     0,     0,
       0,     0,   148,   149,   150,   151,     0,     0,     0,   152,
     153,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   154,   155,   156,   157,   158,   159,   160,     0,     0,
     161,   162,     0,     0,     0,   200,   154,   155,   156,   157,
     158,   159,   160,     0,     0,   161,   162,     0,     0,     0,
     201,   148,   149,   150,   151,     0,     0,     0,   152,   153,
       0,     0,     0,     0,   148,   149,   150,   151,     0,     0,
       0,   152,   153,     0,     0,   148,   149,   150,   151,     0,
       0,     0,   152,     0,     0,   154,   155,   156,   157,   158,
     159,   160,     0,     0,   161,   162,     0,   217,   154,   155,
     156,   157,   158,   159,   160,     0,     0,   161,   162,   154,
     155,   156,   157,   158,   159,   160,     0,     0,   161,   162,
     148,   149,   -73,   -73,     0,     0,     0,     0,     0,     0,
       0,   148,   149,   150,   151,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   154,   155,   156,   157,   158,   159,
     160,     0,     0,   161,   162,   154,   155,   156,   157,   158,
     159,   160,     0,     0,   161,   162,    74,     0,    75,     0,
       0,    76,    77,    78,     0,    79,    80,    81,     0,     0,
      82,    83,    84,    85,    86,   131,    88,    89,    90,    91,
       0,     0,     0,     0,    92,     0,     0,     0,    93,     0,
       0,     0,     0,     0,    94,     0,     0,    55,   145,    74,
       0,    75,     0,     0,    76,    77,    78,     0,    79,    80,
      81,     0,     0,    82,    83,    84,    85,    86,   131,    88,
      89,    90,    91,     0,     0,     0,     0,    92,     0,     0,
       0,    93,     0,     0,     0,     0,   -72,    94,     0,    74,
      55,    75,     0,     0,    76,    77,    78,     0,    79,    80,
      81,     0,     0,    82,    83,    84,    85,    86,   131,    88,
      89,    90,    91,     0,    74,     0,    75,    92,     0,     0,
       0,    93,     0,     0,     0,     0,     0,    94,    82,    83,
      55,    85,    86,   131,    88,    89,    90,    91,     0,     0,
       0,     0,    92,     0,     0,     0,    93,     0,     0,     0,
       0,     0,    94
};

static const yytype_int16 yycheck[] =
{
      26,    79,    37,    29,    99,    31,    14,    15,    92,    93,
      94,    13,    13,    13,    31,    41,     4,     5,     6,     7,
      46,     3,     4,     5,     6,     7,     3,     4,     5,     6,
       7,    27,    37,    45,    42,    37,    37,    13,    64,    65,
      36,    67,    54,    37,   128,    56,   130,    64,    65,    37,
     134,   129,   136,   137,    56,    37,   140,    57,    13,     0,
      37,    37,    58,    37,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,    60,    19,
      13,   165,    37,    60,    13,     3,     4,     5,     6,     7,
      59,     3,     4,     5,     6,     7,    47,    48,    49,    55,
      56,    52,    53,   198,    37,   200,    22,    49,    37,     3,
       4,     5,     6,     7,     8,   199,    52,    53,    57,    37,
      62,   205,    59,   218,   208,    37,    58,    21,    30,    31,
       4,     5,     6,     7,    49,   230,    57,    58,    37,   217,
     235,   236,    60,    37,    18,    59,    20,    62,    60,    23,
      24,    25,    67,    27,    28,    29,   231,   232,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    57,    56,
      58,    56,    46,     9,    10,    57,    50,   203,    57,    56,
      56,    56,    56,    55,    55,    59,    60,     9,    10,    11,
      12,    56,    56,    56,    16,    17,    56,    56,     9,    10,
      11,    12,    56,    55,    55,    16,    17,    43,    44,    45,
      46,    47,    48,    49,    56,    55,    52,    53,    37,    57,
      57,    43,    44,    45,    46,    47,    48,    49,    55,    37,
      52,    53,    43,    44,    45,    46,    47,    48,    49,    55,
      62,    52,    53,     9,    10,    11,    12,    58,    57,    56,
      16,    17,    58,    57,    59,    55,    26,    30,     9,    10,
      11,    12,    57,    39,    57,    16,    17,    61,    10,    61,
      60,    62,    41,   220,   208,   137,   219,    43,    44,    45,
      46,    47,    48,    49,    -1,    -1,    52,    53,    -1,    -1,
      -1,    57,    43,    44,    45,    46,    47,    48,    49,    -1,
      -1,    52,    53,    -1,    -1,    -1,    57,     9,    10,    11,
      12,    -1,    -1,    -1,    16,    17,    -1,    -1,    -1,    -1,
      -1,    -1,     9,    10,    11,    12,    -1,    -1,    -1,    16,
      17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    44,    45,    46,    47,    48,    49,    -1,    -1,
      52,    53,    -1,    -1,    -1,    57,    43,    44,    45,    46,
      47,    48,    49,    -1,    -1,    52,    53,    -1,    -1,    -1,
      57,     9,    10,    11,    12,    -1,    -1,    -1,    16,    17,
      -1,    -1,    -1,    -1,     9,    10,    11,    12,    -1,    -1,
      -1,    16,    17,    -1,    -1,     9,    10,    11,    12,    -1,
      -1,    -1,    16,    -1,    -1,    43,    44,    45,    46,    47,
      48,    49,    -1,    -1,    52,    53,    -1,    55,    43,    44,
      45,    46,    47,    48,    49,    -1,    -1,    52,    53,    43,
      44,    45,    46,    47,    48,    49,    -1,    -1,    52,    53,
       9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    44,    45,    46,    47,    48,
      49,    -1,    -1,    52,    53,    43,    44,    45,    46,    47,
      48,    49,    -1,    -1,    52,    53,    18,    -1,    20,    -1,
      -1,    23,    24,    25,    -1,    27,    28,    29,    -1,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      -1,    -1,    -1,    -1,    46,    -1,    -1,    -1,    50,    -1,
      -1,    -1,    -1,    -1,    56,    -1,    -1,    59,    60,    18,
      -1,    20,    -1,    -1,    23,    24,    25,    -1,    27,    28,
      29,    -1,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,    46,    -1,    -1,
      -1,    50,    -1,    -1,    -1,    -1,    55,    56,    -1,    18,
      59,    20,    -1,    -1,    23,    24,    25,    -1,    27,    28,
      29,    -1,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    -1,    18,    -1,    20,    46,    -1,    -1,
      -1,    50,    -1,    -1,    -1,    -1,    -1,    56,    32,    33,
      59,    35,    36,    37,    38,    39,    40,    41,    -1,    -1,
      -1,    -1,    46,    -1,    -1,    -1,    50,    -1,    -1,    -1,
      -1,    -1,    56
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,    21,    37,    64,
      65,    66,    67,    68,    69,    70,    71,    74,    80,    37,
      37,    37,     0,    66,    13,    37,    56,    19,    75,    59,
      55,    56,    68,    72,    73,    69,    22,    76,     3,    60,
      68,    81,    82,    72,    37,    57,    58,    69,    77,    59,
      37,    37,    60,    82,    57,    59,    83,    68,    58,    60,
      67,    71,    78,    79,    56,    56,    83,    84,    37,    69,
      60,    79,    72,    72,    18,    20,    23,    24,    25,    27,
      28,    29,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    46,    50,    56,    60,    67,    68,    83,    85,
      86,    87,    91,    92,    93,    94,    95,    96,    97,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     111,   112,   113,   114,   115,   116,    57,    57,    56,    56,
      56,    37,    97,    55,    56,    56,    56,    56,    56,    56,
      56,    99,    99,    99,    37,    60,    86,    55,     9,    10,
      11,    12,    16,    17,    43,    44,    45,    46,    47,    48,
      49,    52,    53,    14,    15,    42,    55,    55,    99,    97,
      99,    55,    99,    37,    99,    98,    99,    57,    57,    98,
     110,    57,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,    99,    99,    99,    37,    99,    57,    55,
      57,    57,    57,    58,    57,    58,    57,    62,    56,    86,
      99,    86,    59,    68,    55,    99,   110,    55,    26,    30,
      88,    89,    57,    57,    97,    86,   112,    31,    89,    90,
      57,    61,    61,    60,    86,    85,    85
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;
/* Location data for the look-ahead symbol.  */
YYLTYPE yylloc;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;

  /* The location stack.  */
  YYLTYPE yylsa[YYINITDEPTH];
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;
  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[2];

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;
  yylsp = yyls;
#if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 0;
#endif

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);
	yyls = yyls1;
	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);
	YYSTACK_RELOCATE (yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;
  *++yylsp = yylloc;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 205 "parser.y"
    { 
                                      (yylsp[(1) - (1)]); 
                                      /* pp2: The @1 is needed to convince 
                                       * yacc to set up yylloc. You can remove 
                                       * it once you have other uses of @n*/
                                      Program *program = new Program((yyvsp[(1) - (1)].declList));
                                      // if no errors, advance to next phase
                                      if (ReportError::NumErrors() == 0) 
                                          program->Print(0);
                                    }
    break;

  case 3:
#line 217 "parser.y"
    { ((yyval.declList)=(yyvsp[(1) - (2)].declList))->Append((yyvsp[(2) - (2)].decl)); }
    break;

  case 4:
#line 218 "parser.y"
    { ((yyval.declList) = new List<Decl*>)->Append((yyvsp[(1) - (1)].decl)); }
    break;

  case 5:
#line 221 "parser.y"
    {(yyval.decl)=(yyvsp[(1) - (1)].vardecl);}
    break;

  case 6:
#line 222 "parser.y"
    {(yyval.decl)=(yyvsp[(1) - (1)].fndecl);}
    break;

  case 7:
#line 223 "parser.y"
    {(yyval.decl)=(yyvsp[(1) - (1)].classdecl);}
    break;

  case 8:
#line 224 "parser.y"
    {(yyval.decl)=(yyvsp[(1) - (1)].interfacedecl);}
    break;

  case 9:
#line 227 "parser.y"
    {(yyval.vardecl) = new VarDecl(new Identifier((yylsp[(2) - (3)]),(yyvsp[(2) - (3)].identifier)),(yyvsp[(1) - (3)].simpletype));}
    break;

  case 10:
#line 230 "parser.y"
    {(yyval.simpletype)=Type::intType;}
    break;

  case 11:
#line 231 "parser.y"
    {(yyval.simpletype)=Type::doubleType;}
    break;

  case 12:
#line 232 "parser.y"
    {(yyval.simpletype)=Type::boolType;}
    break;

  case 13:
#line 233 "parser.y"
    {(yyval.simpletype)=Type::stringType;}
    break;

  case 14:
#line 234 "parser.y"
    {(yyval.simpletype)=(yyvsp[(1) - (1)].namedtype);}
    break;

  case 15:
#line 235 "parser.y"
    {(yyval.simpletype)=(yyvsp[(1) - (1)].arraytype);}
    break;

  case 16:
#line 237 "parser.y"
    {(yyval.namedtype)= new NamedType(new Identifier((yylsp[(1) - (1)]),(yyvsp[(1) - (1)].identifier)));}
    break;

  case 17:
#line 239 "parser.y"
    {(yyval.arraytype)=new ArrayType((yylsp[(1) - (2)]),(yyvsp[(1) - (2)].simpletype));}
    break;

  case 18:
#line 242 "parser.y"
    {(yyval.fndecl)=new FnDecl(new Identifier((yylsp[(2) - (6)]),(yyvsp[(2) - (6)].identifier)),(yyvsp[(1) - (6)].simpletype),(yyvsp[(4) - (6)].vardecls));(yyval.fndecl)->SetFunctionBody((yyvsp[(6) - (6)].stmtblock));}
    break;

  case 19:
#line 243 "parser.y"
    {(yyval.fndecl)=new FnDecl(new Identifier((yylsp[(2) - (6)]),(yyvsp[(2) - (6)].identifier)), Type::voidType,(yyvsp[(4) - (6)].vardecls));(yyval.fndecl)->SetFunctionBody((yyvsp[(6) - (6)].stmtblock));}
    break;

  case 21:
#line 246 "parser.y"
    {(yyval.vardecls)=new List<VarDecl*>;}
    break;

  case 22:
#line 248 "parser.y"
    {((yyval.vardecls)=(yyvsp[(1) - (4)].vardecls))->Append(new VarDecl(new Identifier((yylsp[(4) - (4)]), (yyvsp[(4) - (4)].identifier)),(yyvsp[(3) - (4)].simpletype)));}
    break;

  case 23:
#line 249 "parser.y"
    {((yyval.vardecls)=new List<VarDecl*>)->Append(new VarDecl(new Identifier((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].identifier)), (yyvsp[(1) - (2)].simpletype)));}
    break;

  case 24:
#line 251 "parser.y"
    {(yyval.classdecl)= new ClassDecl(new Identifier((yylsp[(2) - (7)]),(yyvsp[(2) - (7)].identifier)),(yyvsp[(3) - (7)].namedtype),(yyvsp[(4) - (7)].implements),(yyvsp[(6) - (7)].declList));}
    break;

  case 25:
#line 252 "parser.y"
    {(yyval.classdecl)=new ClassDecl(new Identifier((yylsp[(2) - (6)]),(yyvsp[(2) - (6)].identifier)),(yyvsp[(3) - (6)].namedtype),(yyvsp[(4) - (6)].implements),new List<Decl*>);}
    break;

  case 26:
#line 254 "parser.y"
    {(yyval.namedtype)=(yyvsp[(2) - (2)].namedtype);}
    break;

  case 27:
#line 255 "parser.y"
    {(yyval.namedtype)=NULL;}
    break;

  case 28:
#line 257 "parser.y"
    {(yyval.implements)=(yyvsp[(2) - (2)].implements);}
    break;

  case 29:
#line 258 "parser.y"
    {(yyval.implements)=new List<NamedType*>;}
    break;

  case 30:
#line 260 "parser.y"
    {((yyval.implements)=(yyvsp[(1) - (3)].implements))->Append((yyvsp[(3) - (3)].namedtype));}
    break;

  case 31:
#line 261 "parser.y"
    {(yyval.implements)=new List<NamedType*>;}
    break;

  case 32:
#line 263 "parser.y"
    {((yyval.declList)=(yyvsp[(1) - (2)].declList))->Append((yyvsp[(2) - (2)].decl));}
    break;

  case 33:
#line 264 "parser.y"
    {((yyval.declList)=new List<Decl*>)->Append((yyvsp[(1) - (1)].decl));}
    break;

  case 36:
#line 269 "parser.y"
    {(yyval.interfacedecl)=new InterfaceDecl(new Identifier((yylsp[(2) - (5)]),(yyvsp[(2) - (5)].identifier)),(yyvsp[(4) - (5)].declList));}
    break;

  case 37:
#line 270 "parser.y"
    {(yyval.interfacedecl)=new InterfaceDecl(new Identifier((yylsp[(2) - (4)]),(yyvsp[(2) - (4)].identifier)),new List<Decl*>);}
    break;

  case 38:
#line 272 "parser.y"
    {((yyval.declList)=(yyvsp[(1) - (2)].declList))->Append((yyvsp[(2) - (2)].decl));}
    break;

  case 39:
#line 273 "parser.y"
    {((yyval.declList)=new List<Decl*>)->Append((yyvsp[(1) - (1)].decl));}
    break;

  case 40:
#line 275 "parser.y"
    {(yyval.decl)=new FnDecl(new Identifier((yylsp[(2) - (6)]),(yyvsp[(2) - (6)].identifier)),(yyvsp[(1) - (6)].simpletype),(yyvsp[(4) - (6)].vardecls));}
    break;

  case 41:
#line 276 "parser.y"
    {(yyval.decl)=new FnDecl(new Identifier((yylsp[(2) - (6)]),(yyvsp[(2) - (6)].identifier)), Type::voidType,(yyvsp[(4) - (6)].vardecls));}
    break;

  case 42:
#line 278 "parser.y"
    {(yyval.stmtblock)=new StmtBlock((yyvsp[(2) - (4)].vardecls),(yyvsp[(3) - (4)].stmts));}
    break;

  case 43:
#line 279 "parser.y"
    {(yyval.stmtblock)=new StmtBlock((yyvsp[(2) - (3)].vardecls),new List<Stmt*>);}
    break;

  case 44:
#line 281 "parser.y"
    {((yyval.vardecls)=(yyvsp[(1) - (2)].vardecls))->Append((yyvsp[(2) - (2)].vardecl)); }
    break;

  case 45:
#line 282 "parser.y"
    {(yyval.vardecls)=new List<VarDecl*>;}
    break;

  case 46:
#line 284 "parser.y"
    {((yyval.stmts)=(yyvsp[(1) - (2)].stmts))->Append((yyvsp[(2) - (2)].stmt));}
    break;

  case 47:
#line 285 "parser.y"
    {((yyval.stmts)=new List<Stmt*>)->Append((yyvsp[(1) - (1)].stmt));}
    break;

  case 48:
#line 287 "parser.y"
    {(yyval.stmt)=(yyvsp[(1) - (1)].ifstmt);}
    break;

  case 49:
#line 288 "parser.y"
    {(yyval.stmt)=(yyvsp[(1) - (1)].whilestmt);}
    break;

  case 50:
#line 289 "parser.y"
    {(yyval.stmt)=(yyvsp[(1) - (1)].forstmt);}
    break;

  case 51:
#line 290 "parser.y"
    {(yyval.stmt)=(yyvsp[(1) - (1)].rtnstmt);}
    break;

  case 52:
#line 291 "parser.y"
    {(yyval.stmt)=(yyvsp[(1) - (1)].switchstmt);}
    break;

  case 53:
#line 292 "parser.y"
    {(yyval.stmt)=(yyvsp[(1) - (1)].brkstmt);}
    break;

  case 54:
#line 293 "parser.y"
    {(yyval.stmt)=(yyvsp[(1) - (1)].pntstmt);}
    break;

  case 55:
#line 294 "parser.y"
    {(yyval.stmt)=(yyvsp[(1) - (1)].stmtblock);}
    break;

  case 56:
#line 295 "parser.y"
    {(yyval.stmt)=(yyvsp[(1) - (2)].expr);}
    break;

  case 57:
#line 297 "parser.y"
    {(yyval.switchstmt)=new SwitchStmt((yyvsp[(3) - (8)].expr),(yyvsp[(6) - (8)].casestmts),(yyvsp[(7) - (8)].defaultstmt));}
    break;

  case 58:
#line 299 "parser.y"
    {((yyval.casestmts)=(yyvsp[(1) - (2)].casestmts))->Append((yyvsp[(2) - (2)].casestmt));}
    break;

  case 59:
#line 300 "parser.y"
    {((yyval.casestmts)=new List<CaseStmt*>)->Append((yyvsp[(1) - (1)].casestmt));}
    break;

  case 60:
#line 302 "parser.y"
    {(yyval.casestmt)=new CaseStmt((yyvsp[(2) - (4)].intconst),(yyvsp[(4) - (4)].stmts));}
    break;

  case 61:
#line 303 "parser.y"
    {(yyval.casestmt)=new CaseStmt((yyvsp[(2) - (3)].intconst), new List<Stmt*>); }
    break;

  case 62:
#line 305 "parser.y"
    {(yyval.defaultstmt)=new DefaultStmt((yyvsp[(3) - (3)].stmts));}
    break;

  case 63:
#line 306 "parser.y"
    {(yyval.defaultstmt)=NULL;}
    break;

  case 64:
#line 308 "parser.y"
    {(yyval.ifstmt)=new IfStmt((yyvsp[(3) - (5)].expr),(yyvsp[(5) - (5)].stmt),NULL);}
    break;

  case 65:
#line 309 "parser.y"
    {(yyval.ifstmt)=new IfStmt((yyvsp[(3) - (7)].expr),(yyvsp[(5) - (7)].stmt),(yyvsp[(7) - (7)].stmt));}
    break;

  case 66:
#line 311 "parser.y"
    {(yyval.whilestmt)=new WhileStmt((yyvsp[(3) - (5)].expr),(yyvsp[(5) - (5)].stmt));}
    break;

  case 67:
#line 313 "parser.y"
    {(yyval.forstmt)= new ForStmt((yyvsp[(3) - (9)].expr),(yyvsp[(5) - (9)].expr),(yyvsp[(7) - (9)].expr),(yyvsp[(9) - (9)].stmt));}
    break;

  case 68:
#line 315 "parser.y"
    {(yyval.rtnstmt)=new ReturnStmt((yylsp[(2) - (3)]),(yyvsp[(2) - (3)].expr));}
    break;

  case 69:
#line 317 "parser.y"
    {(yyval.brkstmt)=new BreakStmt((yylsp[(1) - (2)]));}
    break;

  case 70:
#line 319 "parser.y"
    {(yyval.pntstmt)=new PrintStmt((yyvsp[(3) - (5)].exprs));}
    break;

  case 72:
#line 322 "parser.y"
    {(yyval.expr)= new EmptyExpr();}
    break;

  case 73:
#line 324 "parser.y"
    {((yyval.exprs)=(yyvsp[(1) - (3)].exprs))->Append((yyvsp[(3) - (3)].expr));}
    break;

  case 74:
#line 325 "parser.y"
    {((yyval.exprs)= new List<Expr*>)->Append((yyvsp[(1) - (1)].expr));}
    break;

  case 75:
#line 327 "parser.y"
    {(yyval.expr)=(yyvsp[(1) - (1)].assignexpr);}
    break;

  case 76:
#line 328 "parser.y"
    {(yyval.expr)=(yyvsp[(1) - (1)].lvalue);}
    break;

  case 78:
#line 330 "parser.y"
    {(yyval.expr)=new This((yylsp[(1) - (1)]));}
    break;

  case 79:
#line 331 "parser.y"
    {(yyval.expr)=(yyvsp[(1) - (1)].call);}
    break;

  case 80:
#line 332 "parser.y"
    {(yyval.expr)=(yyvsp[(2) - (3)].expr);}
    break;

  case 81:
#line 333 "parser.y"
    {(yyval.expr)=(yyvsp[(1) - (1)].arithmeticexpr);}
    break;

  case 82:
#line 334 "parser.y"
    {(yyval.expr)=(yyvsp[(1) - (1)].relationalexpr);}
    break;

  case 83:
#line 335 "parser.y"
    {(yyval.expr)=(yyvsp[(1) - (1)].equalityexpr);}
    break;

  case 84:
#line 336 "parser.y"
    {(yyval.expr)=(yyvsp[(1) - (1)].logicalexpr);}
    break;

  case 85:
#line 337 "parser.y"
    {(yyval.expr)=(yyvsp[(1) - (1)].postfixexpr);}
    break;

  case 86:
#line 338 "parser.y"
    {(yyval.expr)=new ReadIntegerExpr(Join((yylsp[(1) - (3)]),(yylsp[(3) - (3)])));}
    break;

  case 87:
#line 339 "parser.y"
    {(yyval.expr)=new ReadLineExpr(Join((yylsp[(1) - (3)]),(yylsp[(3) - (3)])));}
    break;

  case 88:
#line 340 "parser.y"
    {(yyval.expr)= new NewExpr(Join((yylsp[(1) - (4)]),(yylsp[(4) - (4)])), new NamedType(new Identifier((yylsp[(3) - (4)]),(yyvsp[(3) - (4)].identifier))));}
    break;

  case 89:
#line 341 "parser.y"
    {(yyval.expr)=new NewArrayExpr(Join((yylsp[(1) - (6)]),(yylsp[(6) - (6)])),(yyvsp[(3) - (6)].expr),(yyvsp[(5) - (6)].simpletype));}
    break;

  case 90:
#line 343 "parser.y"
    {(yyval.assignexpr)=new AssignExpr((yyvsp[(1) - (3)].lvalue), new Operator((yylsp[(2) - (3)]),"="),(yyvsp[(3) - (3)].expr));}
    break;

  case 91:
#line 345 "parser.y"
    {(yyval.arithmeticexpr)= new ArithmeticExpr((yyvsp[(1) - (3)].expr), new Operator((yylsp[(2) - (3)]), "+"), (yyvsp[(3) - (3)].expr));}
    break;

  case 92:
#line 346 "parser.y"
    {(yyval.arithmeticexpr)= new ArithmeticExpr((yyvsp[(1) - (3)].expr), new Operator((yylsp[(2) - (3)]), "-"), (yyvsp[(3) - (3)].expr));}
    break;

  case 93:
#line 347 "parser.y"
    {(yyval.arithmeticexpr)= new ArithmeticExpr((yyvsp[(1) - (3)].expr), new Operator((yylsp[(2) - (3)]), "*"), (yyvsp[(3) - (3)].expr));}
    break;

  case 94:
#line 348 "parser.y"
    {(yyval.arithmeticexpr)= new ArithmeticExpr((yyvsp[(1) - (3)].expr), new Operator((yylsp[(2) - (3)]), "/"), (yyvsp[(3) - (3)].expr));}
    break;

  case 95:
#line 349 "parser.y"
    {(yyval.arithmeticexpr)= new ArithmeticExpr((yyvsp[(1) - (3)].expr), new Operator((yylsp[(2) - (3)]), "%"), (yyvsp[(3) - (3)].expr));}
    break;

  case 96:
#line 350 "parser.y"
    {(yyval.arithmeticexpr)=new ArithmeticExpr(new Operator((yylsp[(1) - (2)]),"-"),(yyvsp[(2) - (2)].expr));}
    break;

  case 97:
#line 352 "parser.y"
    {(yyval.relationalexpr)= new RelationalExpr((yyvsp[(1) - (3)].expr),new Operator((yylsp[(2) - (3)]),"<"),(yyvsp[(3) - (3)].expr));}
    break;

  case 98:
#line 353 "parser.y"
    {(yyval.relationalexpr)= new RelationalExpr((yyvsp[(1) - (3)].expr),new Operator((yylsp[(2) - (3)]),">"),(yyvsp[(3) - (3)].expr));}
    break;

  case 99:
#line 354 "parser.y"
    {(yyval.relationalexpr)= new RelationalExpr((yyvsp[(1) - (3)].expr),new Operator((yylsp[(2) - (3)]),"<="),(yyvsp[(3) - (3)].expr));}
    break;

  case 100:
#line 355 "parser.y"
    {(yyval.relationalexpr)= new RelationalExpr((yyvsp[(1) - (3)].expr),new Operator((yylsp[(2) - (3)]),">="),(yyvsp[(3) - (3)].expr));}
    break;

  case 101:
#line 357 "parser.y"
    {(yyval.equalityexpr)= new EqualityExpr((yyvsp[(1) - (3)].expr), new Operator((yylsp[(2) - (3)]),"=="),(yyvsp[(3) - (3)].expr));}
    break;

  case 102:
#line 358 "parser.y"
    {(yyval.equalityexpr)= new EqualityExpr((yyvsp[(1) - (3)].expr), new Operator((yylsp[(2) - (3)]),"!="),(yyvsp[(3) - (3)].expr));}
    break;

  case 103:
#line 360 "parser.y"
    {(yyval.logicalexpr)=new LogicalExpr((yyvsp[(1) - (3)].expr), new Operator((yylsp[(2) - (3)]),"&&"),(yyvsp[(3) - (3)].expr));}
    break;

  case 104:
#line 361 "parser.y"
    {(yyval.logicalexpr)=new LogicalExpr((yyvsp[(1) - (3)].expr), new Operator((yylsp[(2) - (3)]),"||"),(yyvsp[(3) - (3)].expr));}
    break;

  case 105:
#line 362 "parser.y"
    {(yyval.logicalexpr)=new LogicalExpr(new Operator((yylsp[(1) - (2)]),"!"),(yyvsp[(2) - (2)].expr));}
    break;

  case 106:
#line 364 "parser.y"
    {(yyval.postfixexpr)=new PostfixExpr(Join((yylsp[(1) - (2)]), (yylsp[(2) - (2)])), (yyvsp[(1) - (2)].lvalue), new Operator((yylsp[(2) - (2)]), "++"));}
    break;

  case 107:
#line 365 "parser.y"
    {(yyval.postfixexpr)=new PostfixExpr(Join((yylsp[(1) - (2)]), (yylsp[(2) - (2)])), (yyvsp[(1) - (2)].lvalue), new Operator((yylsp[(2) - (2)]), "--"));}
    break;

  case 108:
#line 367 "parser.y"
    {(yyval.lvalue)=(yyvsp[(1) - (1)].fieldaccess);}
    break;

  case 109:
#line 368 "parser.y"
    {(yyval.lvalue)=(yyvsp[(1) - (1)].arrayaccess);}
    break;

  case 110:
#line 371 "parser.y"
    {(yyval.fieldaccess)=new FieldAccess(NULL,new Identifier((yylsp[(1) - (1)]),(yyvsp[(1) - (1)].identifier)));}
    break;

  case 111:
#line 372 "parser.y"
    {(yyval.fieldaccess)=new FieldAccess((yyvsp[(1) - (3)].expr),new Identifier((yylsp[(3) - (3)]),(yyvsp[(3) - (3)].identifier)));}
    break;

  case 112:
#line 374 "parser.y"
    {(yyval.arrayaccess)=new ArrayAccess(Join((yylsp[(1) - (4)]),(yylsp[(4) - (4)])),(yyvsp[(1) - (4)].expr),(yyvsp[(3) - (4)].expr));}
    break;

  case 113:
#line 376 "parser.y"
    {(yyval.call) = new Call(Join((yylsp[(1) - (4)]), (yylsp[(4) - (4)])), NULL, new Identifier((yylsp[(1) - (4)]), (yyvsp[(1) - (4)].identifier)), (yyvsp[(3) - (4)].exprs));}
    break;

  case 114:
#line 377 "parser.y"
    {(yyval.call) = new Call(Join((yylsp[(1) - (6)]), (yylsp[(6) - (6)])), (yyvsp[(1) - (6)].expr), new Identifier((yylsp[(3) - (6)]), (yyvsp[(3) - (6)].identifier)), (yyvsp[(5) - (6)].exprs));}
    break;

  case 116:
#line 380 "parser.y"
    {(yyval.exprs)=new List<Expr*>;}
    break;

  case 117:
#line 382 "parser.y"
    {(yyval.expr)=(yyvsp[(1) - (1)].intconst);}
    break;

  case 118:
#line 383 "parser.y"
    {(yyval.expr)=(yyvsp[(1) - (1)].doubleconst);}
    break;

  case 119:
#line 384 "parser.y"
    {(yyval.expr)=(yyvsp[(1) - (1)].boolconst);}
    break;

  case 120:
#line 385 "parser.y"
    {(yyval.expr)=(yyvsp[(1) - (1)].stringconst);}
    break;

  case 121:
#line 386 "parser.y"
    {(yyval.expr)=(yyvsp[(1) - (1)].nullconst);}
    break;

  case 122:
#line 388 "parser.y"
    {(yyval.intconst)= new IntConstant((yylsp[(1) - (1)]),(yyvsp[(1) - (1)].integerConstant));}
    break;

  case 123:
#line 390 "parser.y"
    {(yyval.doubleconst)= new DoubleConstant((yylsp[(1) - (1)]),(yyvsp[(1) - (1)].doubleConstant));}
    break;

  case 124:
#line 392 "parser.y"
    {(yyval.boolconst)=new BoolConstant((yylsp[(1) - (1)]),(yyvsp[(1) - (1)].boolConstant));}
    break;

  case 125:
#line 394 "parser.y"
    {(yyval.stringconst) = new StringConstant((yylsp[(1) - (1)]),(yyvsp[(1) - (1)].stringConstant));}
    break;

  case 126:
#line 396 "parser.y"
    {(yyval.nullconst)=new NullConstant((yylsp[(1) - (1)]));}
    break;


/* Line 1267 of yacc.c.  */
#line 2413 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }

  yyerror_range[0] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval, &yylloc);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[0] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;

      yyerror_range[0] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;

  yyerror_range[1] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the look-ahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, &yylloc);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 398 "parser.y"


/* The closing %% above marks the end of the Rules section and the beginning
 * of the User Subroutines section. All text from here to the end of the
 * file is copied verbatim to the end of the generated y.tab.c file.
 * This section is where you put definitions of helper functions.
 */

/* Function: InitParser
 * --------------------
 * This function will be called before any calls to yyparse().  It is designed
 * to give you an opportunity to do anything that must be done to initialize
 * the parser (set global variables, configure starting state, etc.). One
 * thing it already does for you is assign the value of the global variable
 * yydebug that controls whether yacc prints debugging information about
 * parser actions (shift/reduce) and contents of state stack during parser.
 * If set to false, no information is printed. Setting it to true will give
 * you a running trail that might be helpful when debugging your parser.
 * Please be sure the variable is set to false when submitting your final
 * version.
 */
void InitParser()
{
   PrintDebug("parser", "Initializing parser");
   yydebug = false;
}

