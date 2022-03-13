/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 2 "new.y"
 
   /* Definition section */
  #include<stdio.h> 
  int flag=0; 
  #include <string.h>
  #include <ctype.h>
#include <stdarg.h>
#include <stdlib.h>
// #define YYSTYPE int
extern int yylex(void);
extern int line_num;
extern FILE *yyin;
extern int yylineno;
extern char *yytext;
char *prev;
FILE *fp;
char st[100][10];
char st2[100][10];
char st2if[100][10];
char postFix[100][10];
char Address[100][10];
int top5=0;
int top=0;
int top22=0;
int top22if=0;
int top4=0;
char temp[4]="t00";
char places[4]="L02";
char places2[4]="L00";
char placesLoop[4]="L00";
char placesLoopEnd[4]="L00";
char noPlaces[4]="A00";
char noPlacesChange[4]="A00";
char stateVar[100][10];
char endVar[100][10];
int sv=0;
int ev=0;
int pt=1;



#line 112 "new.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_NEW_TAB_H_INCLUDED
# define YY_YY_NEW_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    NUMBER = 258,
    kw_PROGRAM = 259,
    kw_IMPLICIT = 260,
    kw_NONE = 261,
    kw_LEN = 262,
    kw_KIND = 263,
    kw_RESULT = 264,
    kw_INTENT = 265,
    kw_IN = 266,
    kw_OUT = 267,
    kw_DIMENSION = 268,
    kw_POINTER = 269,
    kw_PRINT = 270,
    kw_READ = 271,
    kw_IF = 272,
    kw_ELSE = 273,
    kw_END = 274,
    kw_THEN = 275,
    kw_DO = 276,
    kw_WHILE = 277,
    kw_CONTINUE = 278,
    kw_GOTO = 279,
    kw_RETURN = 280,
    kw_SELECT = 281,
    kw_CASE = 282,
    kw_FUNCTION = 283,
    dt_INT = 284,
    dt_COMPLEX = 285,
    dt_LOGICALS = 286,
    dt_CHARACTER = 287,
    dt_REAL = 288,
    kw_TYPE = 289,
    ct_INT = 290,
    ct_REAL = 291,
    ct_CHARACTER = 292,
    ct_COMPLEX = 293,
    ct_LOGICALS = 294,
    IDENTIFIER = 295,
    sp_COLON = 296,
    sp_SEMICOLON = 297,
    sp_LB = 298,
    sp_RB = 299,
    sp_CURLYLB = 300,
    sp_CURLYRB = 301,
    sp_SQUARELB = 302,
    sp_SQUARERB = 303,
    sp_COMMA = 304,
    sp_STOP = 305,
    sp_AND = 306,
    op_EQUAL = 307,
    op_ADD = 308,
    op_SUB = 309,
    op_MUL = 310,
    op_DIV = 311,
    op_EQUALITY = 312,
    op_RELATIONAL = 313,
    op_NOTEQUALITY = 314,
    op_GREATER = 315,
    op_LESSER = 316,
    op_GREATEREQUAL = 317,
    op_LESSEREQUAL = 318,
    op_AND = 319,
    op_OR = 320,
    op_NOT = 321,
    op_EQV = 322,
    op_NEQV = 323,
    op_MODULUS = 324,
    nl = 325,
    COMMENT = 326,
    inval = 327
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_NEW_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   197

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  73
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  76
/* YYNRULES -- Number of rules.  */
#define YYNRULES  135
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  222

#define YYUNDEFTOK  2
#define YYMAXUTOK   327


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   133,   133,   138,   138,   139,   140,   140,   142,   143,
     145,   146,   147,   148,   148,   150,   150,   153,   153,   161,
     162,   165,   166,   171,   172,   174,   176,   177,   178,   179,
     180,   182,   182,   188,   193,   195,   200,   200,   204,   205,
     207,   211,   212,   212,   213,   213,   214,   214,   214,   225,
     225,   226,   226,   231,   232,   234,   234,   234,   240,   240,
     241,   241,   241,   247,   247,   250,   251,   252,   253,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   270,   271,   271,   276,   277,   277,   277,   282,   283,
     284,   285,   286,   287,   288,   289,   291,   292,   294,   294,
     298,   299,   300,   306,   320,   320,   320,   320,   320,   320,
     328,   328,   336,   337,   338,   338,   338,   338,   342,   343,
     343,   345,   345,   348,   348,   348,   348,   348,   356,   357,
     358,   366,   366,   371,   371,   374
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMBER", "kw_PROGRAM", "kw_IMPLICIT",
  "kw_NONE", "kw_LEN", "kw_KIND", "kw_RESULT", "kw_INTENT", "kw_IN",
  "kw_OUT", "kw_DIMENSION", "kw_POINTER", "kw_PRINT", "kw_READ", "kw_IF",
  "kw_ELSE", "kw_END", "kw_THEN", "kw_DO", "kw_WHILE", "kw_CONTINUE",
  "kw_GOTO", "kw_RETURN", "kw_SELECT", "kw_CASE", "kw_FUNCTION", "dt_INT",
  "dt_COMPLEX", "dt_LOGICALS", "dt_CHARACTER", "dt_REAL", "kw_TYPE",
  "ct_INT", "ct_REAL", "ct_CHARACTER", "ct_COMPLEX", "ct_LOGICALS",
  "IDENTIFIER", "sp_COLON", "sp_SEMICOLON", "sp_LB", "sp_RB", "sp_CURLYLB",
  "sp_CURLYRB", "sp_SQUARELB", "sp_SQUARERB", "sp_COMMA", "sp_STOP",
  "sp_AND", "op_EQUAL", "op_ADD", "op_SUB", "op_MUL", "op_DIV",
  "op_EQUALITY", "op_RELATIONAL", "op_NOTEQUALITY", "op_GREATER",
  "op_LESSER", "op_GREATEREQUAL", "op_LESSEREQUAL", "op_AND", "op_OR",
  "op_NOT", "op_EQV", "op_NEQV", "op_MODULUS", "nl", "COMMENT", "inval",
  "$accept", "ROOT", "anynewline", "P", "main", "program", "identifier",
  "identifier2", "identifier1", "declare", "state", "implicitnone",
  "declarations", "datatypeChar", "datatypeInt", "dtint", "datatype",
  "declaration", "$@1", "list", "listwithoutnewline", "newline", "opequal",
  "statements", "statement2", "statement", "$@2", "xx11", "$@3",
  "expression", "$@4", "xx10", "$@5", "expression2", "$@6", "xx16", "$@7",
  "otherconstants", "operands", "constants", "operators", "operands2",
  "comparision", "$@8", "comparise", "$@9", "comparisionOperator",
  "relationaloperator", "not", "typeDeclares", "typeDeclare",
  "ifstatement", "$@10", "$@11", "$@12", "$@13", "$@14", "elsestatement",
  "loops", "doloops", "$@15", "$@16", "$@17", "twoconstants", "$@18",
  "valconstants", "whileloops", "$@19", "$@20", "$@21", "$@22",
  "functions", "function", "results", "returntype", "colons", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327
};
# endif

#define YYPACT_NINF (-156)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-135)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -55,  -156,    17,    27,   -46,  -156,    -8,  -156,  -156,  -156,
      10,  -156,  -156,  -156,  -156,  -156,    18,  -156,    60,  -156,
      23,  -156,  -156,   -55,    55,    57,  -156,  -156,    -8,     1,
      15,    16,    26,    64,    63,    75,    44,    49,    -8,   -55,
      82,    -8,     4,  -156,    43,  -156,    75,    50,    51,    38,
      53,   -46,    -8,   -55,    58,    62,    56,     6,   -55,  -156,
    -156,  -156,     4,  -156,  -156,  -156,  -156,  -156,  -156,    69,
    -156,  -156,  -156,    -8,    89,  -156,   -46,    70,    71,    52,
      78,  -156,   -46,    83,  -156,    95,   104,  -156,   102,   -55,
     127,  -156,    88,    -8,  -156,   105,    88,    52,    99,  -156,
      88,  -156,  -156,   -36,  -156,    -8,     8,   118,  -156,  -156,
    -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,    90,
    -156,  -156,   141,  -156,    80,   -15,   120,   119,  -156,  -156,
      92,   104,   -46,   122,     4,    -8,    47,   -55,   -55,  -156,
    -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,
    -156,  -156,   -55,  -156,  -156,   114,    47,   -55,  -156,  -156,
     149,   -55,  -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,
      88,   -46,   -46,   -55,    88,    52,   -46,   119,    88,   -46,
     142,   -46,  -156,   -46,  -156,  -156,  -156,  -156,   -22,  -156,
     -55,     4,     4,     4,  -156,   -46,   -46,  -156,  -156,  -156,
     119,  -156,  -156,   150,   -55,   153,   154,   155,   -46,   -55,
    -156,   156,   -55,    -7,   159,   -55,   -46,  -156,   157,   -46,
     -55,   -46
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,    39,     0,     7,     3,     1,     0,    25,    30,    29,
      21,    28,     2,     6,    27,    26,    23,   133,   134,   129,
       0,    38,    10,     0,     0,     0,     5,   128,     0,    18,
       0,     0,     0,     0,     0,    14,     0,     0,    37,     0,
       0,     0,    16,   103,     0,    13,   101,     0,     0,    36,
       0,    17,     0,     0,     0,     0,     0,     0,     0,    46,
       9,    15,    42,    44,    48,    53,    54,   112,   113,     0,
     100,    22,    24,    37,   132,     8,    31,     0,     0,    99,
       0,   114,    49,     0,    41,     0,     0,    35,     0,     0,
      31,    20,     0,     0,    98,     0,    87,    99,     0,    40,
       0,   135,    12,     0,    32,    37,    14,     0,    19,    70,
      71,    65,    66,    67,    11,    68,    50,    62,    72,    60,
      69,    51,     0,    81,     0,    84,     0,     0,    47,    57,
      55,     0,    34,     0,    16,     0,     0,     0,     0,   104,
      88,    95,    90,    92,    91,    93,    89,    94,    85,    96,
      97,    82,     0,   122,   121,     0,     0,     0,    33,   131,
       0,     0,    80,    73,    74,    75,    76,    77,    78,    79,
       0,    64,    52,     0,     0,    99,   123,     0,     0,    59,
       0,   102,    61,   105,    86,    83,   124,   115,     0,    56,
       0,    43,    43,    43,   119,   118,   130,   106,   125,   116,
       0,   107,   126,     0,     0,   111,     0,     0,   120,     0,
     108,     0,     0,    43,     0,     0,   117,   110,     0,   127,
       0,   109
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -156,  -156,  -156,  -156,   161,  -156,    -5,  -156,  -156,    74,
      41,  -156,  -156,  -156,  -156,  -156,   138,   -64,  -156,    54,
     -62,   -23,  -156,   -60,  -156,  -156,  -156,  -156,  -156,     5,
    -156,  -156,  -156,    14,  -156,  -156,  -156,  -156,   -93,  -123,
      31,    19,   -92,  -156,  -156,  -156,  -156,  -156,  -156,   144,
    -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,
    -156,  -156,  -156,  -156,  -156,  -155,  -156,  -156,  -156,  -156,
    -156,  -156,   170,  -156,  -156,  -156
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    12,    13,    34,    49,   115,   103,    42,
      60,    35,    90,    14,    15,    16,    17,    43,    44,   104,
      50,     4,   100,    61,    62,    63,    83,    64,   138,   128,
     156,   129,   157,   116,   136,   117,   137,   118,   119,   120,
     170,   124,    95,   175,   125,   174,   148,   151,    96,    45,
      46,    65,   173,   191,   201,   205,   214,   210,    66,    67,
      98,   193,   203,   187,   200,   155,    68,   186,   192,   202,
     206,    18,    19,    89,    20,    86
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      29,    23,    84,   123,   154,   126,    33,   130,    54,    55,
      56,    87,    91,   131,    57,     1,    51,     5,    58,    54,
      55,    56,   188,    32,    21,    57,   108,   194,    80,    58,
      76,     6,    22,    59,     1,    82,    53,   -31,   -31,   -31,
     -31,   -31,    41,   133,    59,   204,    22,    75,     1,   149,
     150,    28,    81,    24,   154,  -134,     7,     8,     9,    10,
      11,    25,    30,    21,     6,    31,   106,    36,    37,    38,
      39,    21,     7,     8,     9,    10,    11,   154,    21,    47,
     132,   123,    40,   185,    48,   130,    52,    73,   121,     7,
       8,     9,    10,    11,    71,    72,   162,    74,    88,    79,
     163,   164,   165,   166,   -31,   -31,   -31,   -31,   -31,    41,
      85,   167,   168,    77,   171,   172,   169,    78,    94,    92,
      93,    97,   153,   109,   110,   111,   112,   113,   114,   176,
     161,   197,   198,   199,   179,    99,   101,   140,   181,   141,
     142,   143,   144,   145,   102,   105,   107,   146,   147,   122,
     183,   127,   135,   217,   109,   110,   111,   112,   113,    22,
     -63,   139,   -58,   177,   152,   195,   159,   196,   180,   207,
     190,   209,   153,   211,   220,   160,   212,   215,   218,    26,
     134,   208,    69,   189,   182,   158,   213,   178,    27,   216,
      70,     0,   219,   184,     0,   153,     0,   221
};

static const yytype_int16 yycheck[] =
{
      23,     6,    62,    96,   127,    97,     5,   100,    15,    16,
      17,    73,    76,    49,    21,    70,    39,     0,    25,    15,
      16,    17,   177,    28,    70,    21,    90,    49,    22,    25,
      53,     4,    40,    40,    70,    58,    41,    29,    30,    31,
      32,    33,    34,   105,    40,   200,    40,    52,    70,    64,
      65,    28,    57,    43,   177,    28,    29,    30,    31,    32,
      33,    43,     7,    70,     4,     8,    89,    52,    52,    43,
       6,    70,    29,    30,    31,    32,    33,   200,    70,    35,
     103,   174,    19,   175,    35,   178,     4,    49,    93,    29,
      30,    31,    32,    33,    44,    44,    49,    44,     9,    43,
      53,    54,    55,    56,    29,    30,    31,    32,    33,    34,
      41,    64,    65,    55,   137,   138,    69,    55,    66,    49,
      49,    43,   127,    35,    36,    37,    38,    39,    40,   152,
     135,   191,   192,   193,   157,    52,    41,    57,   161,    59,
      60,    61,    62,    63,    40,    43,    19,    67,    68,    44,
     173,    52,    34,   213,    35,    36,    37,    38,    39,    40,
      70,    20,    70,    49,    44,   188,    44,   190,    19,    19,
      28,    18,   177,    19,    17,   134,    21,    21,    19,    18,
     106,   204,    44,   178,   170,   131,   209,   156,    18,   212,
      46,    -1,   215,   174,    -1,   200,    -1,   220
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    70,    74,    75,    94,     0,     4,    29,    30,    31,
      32,    33,    76,    77,    86,    87,    88,    89,   144,   145,
     147,    70,    40,    79,    43,    43,    77,   145,    28,    94,
       7,     8,    79,     5,    78,    84,    52,    52,    43,     6,
      19,    34,    82,    90,    91,   122,   123,    35,    35,    79,
      93,    94,     4,    79,    15,    16,    17,    21,    25,    40,
      83,    96,    97,    98,   100,   124,   131,   132,   139,    89,
     122,    44,    44,    49,    44,    79,    94,    55,    55,    43,
      22,    79,    94,    99,    96,    41,   148,    93,     9,   146,
      85,    90,    49,    49,    66,   115,   121,    43,   133,    52,
      95,    41,    40,    81,    92,    43,    94,    19,    90,    35,
      36,    37,    38,    39,    40,    80,   106,   108,   110,   111,
     112,    79,    44,   111,   114,   117,   115,    52,   102,   104,
     111,    49,    94,    93,    82,    34,   107,   109,   101,    20,
      57,    59,    60,    61,    62,    63,    67,    68,   119,    64,
      65,   120,    44,    79,   112,   138,   103,   105,    92,    44,
      83,    79,    49,    53,    54,    55,    56,    64,    65,    69,
     113,    94,    94,   125,   118,   116,    94,    49,   113,    94,
      19,    94,   106,    94,   114,   115,   140,   136,   138,   102,
      28,   126,   141,   134,    49,    94,    94,    96,    96,    96,
     137,   127,   142,   135,   138,   128,   143,    19,    94,    18,
     130,    19,    21,    94,   129,    21,    94,    96,    19,    94,
      17,    94
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    73,    74,    75,    75,    76,    76,    76,    77,    78,
      79,    80,    81,    82,    82,    83,    83,    84,    84,    85,
      85,    86,    86,    87,    87,    88,    89,    89,    89,    89,
      89,    91,    90,    92,    92,    93,    93,    93,    94,    94,
      95,    96,    96,    96,    97,    97,    99,    98,    98,   100,
     100,   101,   100,   100,   100,   103,   102,   102,   105,   104,
     107,   106,   106,   109,   108,   110,   110,   110,   111,   111,
     112,   112,   112,   113,   113,   113,   113,   113,   113,   113,
     113,   114,   116,   115,   115,   118,   117,   117,   119,   119,
     119,   119,   119,   119,   119,   119,   120,   120,   121,   121,
     122,   122,   123,   123,   125,   126,   127,   128,   129,   124,
     130,   130,   131,   131,   133,   134,   135,   132,   136,   137,
     136,   138,   138,   140,   141,   142,   143,   139,   144,   144,
     145,   146,   146,   147,   147,   148
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     0,     2,     1,     0,     7,     3,
       1,     1,     1,     1,     0,     1,     0,     3,     0,     2,
       1,     1,     6,     1,     6,     1,     1,     1,     1,     1,
       1,     0,     4,     3,     2,     3,     1,     0,     2,     1,
       1,     2,     1,     0,     1,     0,     0,     4,     1,     2,
       4,     0,     6,     1,     1,     0,     4,     1,     0,     3,
       0,     4,     1,     0,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     5,     2,     0,     4,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       2,     1,     8,     1,     0,     0,     0,     0,     0,    16,
       3,     0,     1,     1,     0,     0,     0,    13,     2,     0,
       5,     1,     1,     0,     0,     0,     0,    14,     2,     1,
      13,     4,     0,     1,     0,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 133 "new.y"
                 {
         
         return 0; }
#line 1591 "new.tab.c"
    break;

  case 11:
#line 146 "new.y"
                        {pushVar();}
#line 1597 "new.tab.c"
    break;

  case 12:
#line 147 "new.y"
                        { push();}
#line 1603 "new.tab.c"
    break;

  case 31:
#line 182 "new.y"
             {strcpy(stateVar[2],yytext);}
#line 1609 "new.tab.c"
    break;

  case 46:
#line 214 "new.y"
                      {states();}
#line 1615 "new.tab.c"
    break;

  case 51:
#line 226 "new.y"
                                  {readFun();}
#line 1621 "new.tab.c"
    break;

  case 55:
#line 234 "new.y"
                     {pushVar();}
#line 1627 "new.tab.c"
    break;

  case 58:
#line 240 "new.y"
              {eval();}
#line 1633 "new.tab.c"
    break;

  case 60:
#line 241 "new.y"
                      {pushVar();}
#line 1639 "new.tab.c"
    break;

  case 63:
#line 247 "new.y"
              {Printeval();}
#line 1645 "new.tab.c"
    break;

  case 69:
#line 253 "new.y"
                                 {pushVar();}
#line 1651 "new.tab.c"
    break;

  case 81:
#line 270 "new.y"
                   {pushifFunc();}
#line 1657 "new.tab.c"
    break;

  case 82:
#line 271 "new.y"
                                              {pushifFunc();}
#line 1663 "new.tab.c"
    break;

  case 85:
#line 277 "new.y"
                                        {pushifFunc();}
#line 1669 "new.tab.c"
    break;

  case 86:
#line 277 "new.y"
                                                                 {pushifFunc();}
#line 1675 "new.tab.c"
    break;

  case 104:
#line 320 "new.y"
                                                   {goIf();}
#line 1681 "new.tab.c"
    break;

  case 105:
#line 320 "new.y"
                                                                   {strcpy(places2,noPlaces);noPlacesChange[0]++; strcpy(noPlaces,noPlacesChange); }
#line 1687 "new.tab.c"
    break;

  case 106:
#line 320 "new.y"
                                                                                                                                                               {afterIf();}
#line 1693 "new.tab.c"
    break;

  case 107:
#line 320 "new.y"
                                                                                                                                                                            {strcpy(places2,noPlaces);noPlacesChange[0]++; strcpy(noPlaces,noPlacesChange); }
#line 1699 "new.tab.c"
    break;

  case 108:
#line 320 "new.y"
                                                                                                                                                                                                                                                                           {afterElse();}
#line 1705 "new.tab.c"
    break;

  case 114:
#line 338 "new.y"
                         {pushloopFunc();}
#line 1711 "new.tab.c"
    break;

  case 115:
#line 338 "new.y"
                                                                                      {strcpy(places2,noPlaces);noPlacesChange[0]++; strcpy(noPlaces,noPlacesChange); }
#line 1717 "new.tab.c"
    break;

  case 116:
#line 338 "new.y"
                                                                                                                                                                                   {afterLoop();}
#line 1723 "new.tab.c"
    break;

  case 118:
#line 342 "new.y"
                                   {evalLoop();}
#line 1729 "new.tab.c"
    break;

  case 119:
#line 343 "new.y"
                     {pushloopFunc();}
#line 1735 "new.tab.c"
    break;

  case 120:
#line 343 "new.y"
                                                             {evalLoop();}
#line 1741 "new.tab.c"
    break;

  case 121:
#line 345 "new.y"
                       {pushloopFunc();}
#line 1747 "new.tab.c"
    break;

  case 122:
#line 345 "new.y"
                                                    {pushloopFunc();}
#line 1753 "new.tab.c"
    break;

  case 123:
#line 348 "new.y"
                                                          {goWhile();}
#line 1759 "new.tab.c"
    break;

  case 124:
#line 348 "new.y"
                                                                      {strcpy(places2,noPlaces);noPlacesChange[0]++; strcpy(noPlaces,noPlacesChange); }
#line 1765 "new.tab.c"
    break;

  case 125:
#line 348 "new.y"
                                                                                                                                                                   {afterWhile();}
#line 1771 "new.tab.c"
    break;

  case 126:
#line 348 "new.y"
                                                                                                                                                                                   {strcpy(places2,noPlaces);noPlacesChange[0]++; strcpy(noPlaces,noPlacesChange); }
#line 1777 "new.tab.c"
    break;


#line 1781 "new.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
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
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
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
  return yyresult;
}
#line 409 "new.y"
 




void printst(){
   int te=top;
   for(int te=top;te>=0;te--){
      printf("%d %s \n",te,st[te]);
      
   }


   }
   void printst2(){
   
   for(int te=top22;te>=0;te--){
      printf("%d %s \n",te,st2[te]);
      
   }




   }
   void printst2if(){
   
   for(int te=top22if;te>=0;te--){
      printf("%d %s \n",te,st2if[te]);
      
   }




   }
   char* increament(char *str){
      str[2]++;
      if(str[2]==':'){
      str[2]='0';
      str[1]++;}
      return str;
   }

void evalLoop(){
   // printst2();
   // printf("%d",top22);
   char *initial;
   char *final;
   char *inc;
   char* var;
   
   // strcpy(var,st2[1]);
      // strcpy(initial,st2[2]);
      // strcpy(final,st2[3]);
   if(strcmp(st2[top22-1],",")!=0){
      var = st2[top22-2];
   initial = st2[top22-1];
   final = st2[top22];
      inc="1";
      strcpy(st2[++top22],",");
      strcpy(st2[++top22],inc);

   }
   else{
      // strcpy(inc,st2[4]);
       var = st2[top22-4];
   initial = st2[top22-3];
   final = st2[top22-2];
      inc=st2[top22];
   }
  pt=top22;
  
   printf("%s : ",noPlaces);
   strcpy(noPlaces,increament(noPlaces));
   printf("%s = %s\n",var,initial);
   printf("%s : ",noPlaces);
   strcpy(placesLoop,noPlaces);
   strcpy(noPlaces,increament(noPlaces));
   strcpy(places,noPlaces);
      strcpy(noPlaces,noPlacesChange);
      noPlaces[0]++;
      noPlaces[1]='0';
      noPlaces[2]='0';
printf("if %s < %s GOTO %s\n",var,final,noPlaces);
   strcpy(noPlaces,places);
   
   printf("%s : ",noPlaces);
   strcpy(noPlaces,increament(noPlaces));
       printf("GOTO %s\n",noPlaces);
       strcpy(placesLoopEnd,noPlaces);


}
void readFun(){
   printf("%s : read ( %s )\n",noPlaces,yytext);strcpy(noPlaces,increament(noPlaces));
}
   void pushloopFunc(){
   if(strcmp(st2[top22],yytext)!=0)
   strcpy(st2[++top22],yytext);
   // printst2();

}
   void andop(){
      printf("%s : ",noPlaces);
      strcpy(noPlaces,increament(noPlaces));
       printf("t1 = f1 && true\n");
      printf("%s : ",noPlaces);
      strcpy(noPlaces,increament(noPlaces));
      printf("if %s %s %s f1 = t1\n",st2if[pt],st2if[pt+1],st2if[pt+2]);
      printf("%s : ",noPlaces);
      strcpy(noPlaces,increament(noPlaces));
      printf("else f1 = false\n");
      pt+=3;
   for(;pt<=top22if;pt+=4){
      
      
      // if(noPlaces[2]==':'){
      // noPlaces[2]='0';
      // noPlaces[1]++;}
       for(int j=0;j<=strlen(st2if[pt]);j++){
      if(st2if[pt][j]>=65&&st2if[pt][j]<=90)
         st2if[pt][j]=st2if[pt][j]+32;
   }
         // printf("%s",st2if[pt]);

      if(strcmp(st2if[pt],".and.")==0){
      // places[2]++;
     printf("%s : ",noPlaces);
      strcpy(noPlaces,increament(noPlaces));
      printf("t1 = f1 && true\n");
      printf("%s : ",noPlaces);
      strcpy(noPlaces,increament(noPlaces));
      printf("if %s %s %s f1 = t1\n",st2if[pt+1],st2if[pt+2],st2if[pt+3]);
      printf("%s : ",noPlaces);
      strcpy(noPlaces,increament(noPlaces));
      printf("else f1 = false\n");
     
      
      
      
     
      }
      else{
         break;
      }
     
   }
   
   }
  void afterLoop(){
     printf("%s : ",noPlaces);
      strcpy(noPlaces,increament(noPlaces));
      
           
   printf("%s = %s + %s\n",temp,st2[pt-4],st2[pt]);
      strcpy(noPlaces,increament(noPlaces));
     
           printf("%s : ",noPlaces);
      strcpy(noPlaces,increament(noPlaces));
   printf("%s = %s \n",st2[pt-4],temp);
   strcpy(temp,increament(temp));
   

      printf("%s : ",noPlaces); 
     strcpy(noPlaces,placesLoop);
     
     
     printf("GOTO %s\n",noPlaces);
     strcpy(noPlaces,placesLoopEnd);
     top22=0;
     pt=1;
     }
  void afterIf(){
      printf("%s : ",noPlaces); 
     strcpy(noPlaces,places2);
     
   //   strcpy(noPlaces,increament(noPlaces));
     printf("GOTO %s\n",noPlaces);
     top22if=0;
     pt=1;
     }
  void afterWhile(){
      printf("%s : ",noPlaces); 
     strcpy(noPlaces,placesLoop);
     
   //   strcpy(noPlaces,increament(noPlaces));
     printf("GOTO %s\n",noPlaces);
     strcpy(noPlaces,placesLoopEnd);
     top22if=0;
     pt=1;
     }
  void afterElse(){
      printf("%s : ",noPlaces); 
     strcpy(noPlaces,places2);
     
   //   strcpy(noPlaces,increament(noPlaces));
     printf("GOTO %s\n",noPlaces);
     }
void goIf(){
   printf("%s : ",noPlaces);
      strcpy(noPlaces,increament(noPlaces));
   printf("f2 = true\n");
   for(;pt<=top22if;pt++){

   
      
      printf("%s : ",noPlaces);
      strcpy(noPlaces,increament(noPlaces));
   printf("f1 = true\n");
   andop();
     printf("%s : ",noPlaces);
      strcpy(noPlaces,increament(noPlaces));
   printf("f2 = f2 || f1\n");
   }
   printf("%s : ",noPlaces);
      strcpy(noPlaces,increament(noPlaces));
      strcpy(places,noPlaces);
      strcpy(noPlaces,noPlacesChange);
      noPlaces[0]++;
      noPlaces[1]='0';
      noPlaces[2]='0';
   printf("if f2 = true GOTO %s\n",noPlaces);
   strcpy(noPlaces,places);
   printf("%s : ",noPlaces);
      strcpy(noPlaces,increament(noPlaces));
      strcpy(places,noPlaces);
            strcpy(noPlaces,noPlacesChange);

      noPlaces[0]++;
      noPlaces[0]++;
      noPlaces[1]='0';
      noPlaces[2]='0';
       printf("else GOTO %s\n",noPlaces);
       strcpy(noPlaces,places);

}
void goWhile(){
   strcpy(placesLoop,noPlaces);
   printf("%s : ",noPlaces);
      strcpy(noPlaces,increament(noPlaces));
   printf("f2 = true\n");
   for(;pt<=top22if;pt++){

   
      
      printf("%s : ",noPlaces);
      strcpy(noPlaces,increament(noPlaces));
   printf("f1 = true\n");
   andop();
     printf("%s : ",noPlaces);
      strcpy(noPlaces,increament(noPlaces));
   printf("f2 = f2 || f1\n");
   }
   printf("%s : ",noPlaces);
      strcpy(noPlaces,increament(noPlaces));
      strcpy(places,noPlaces);
      strcpy(noPlaces,noPlacesChange);
      noPlaces[0]++;
      noPlaces[1]='0';
      noPlaces[2]='0';
   printf("if f2 = true GOTO %s\n",noPlaces);
   strcpy(noPlaces,places);
   printf("%s : ",noPlaces);
      strcpy(noPlaces,increament(noPlaces));
      strcpy(places,noPlaces);
            strcpy(noPlaces,noPlacesChange);

      noPlaces[0]++;
      noPlaces[0]++;
      noPlaces[1]='0';
      noPlaces[2]='0';
       printf("else GOTO %s\n",noPlaces);
       strcpy(noPlaces,places);

}

void yyerror() 
{ 
   printf("\n Untrack error found\n"); 
   flag=1; 
} 
// function for if 

void pushifFunc(){
   if(strcmp(st2if[top22if],yytext)!=0)
   strcpy(st2if[++top22if],yytext);
   // printst2if();

}






int prec(char *c) {
      // printf("%s\n","c");
if(strcmp(c,"/")==0 || strcmp(c,"*")==0)
        return 2;
    else if(strcmp(c,"+") ==0|| strcmp(c,"-")==0)
        return 1;
    else
        return -1;

     
}
void states(){
   
   strcpy(stateVar[++sv],yytext);
   // printf("%s",stateVar);
}
void postFixTo3Address(){
    temp[1]='0';
    temp[2]='0';
    top5=0;
    int f=0;
   for(int i=top4;i>0;i--){
      if(prec(postFix[i])==-1){
         strcpy(Address[++top5],postFix[i]);
      }
     
      else{
         f=1;
         printf("%s : ",noPlaces);
      strcpy(noPlaces,increament(noPlaces));
         printf("%s = %s %s %s\n",temp,Address[top5-1],postFix[i],Address[top5]);
         ev=0;
         strcpy(endVar[++ev],temp);
         top5-=2;
         strcpy(Address[++top5],temp);
         temp[2]++;
         if(temp[2]==':'){
            temp[2]='0';
            temp[1]++;
         }
      }
      // printf("%d\n",top5);
      // for(int i=top5;i>0;i--){
      //    printf("%s ",Address[i]);
      // }
   }
   // printf("top%d",f);

   if(f==0){
      
         strcpy(endVar[++ev],Address[top5]);
   }
   
}


void printpostFix(){
   for(int i=top4;i>0;i--){
      // printf("%s : ",noPlaces);
      // strcpy(noPlaces,increament(noPlaces));
      printf("%s",postFix[i]);
   }
   printf("\n");
}
void inFixToPostFix(){
   char  st2[100][10]; 
   int top2=0;
   char  st3[100][10]; 
   int top3=0;
   
    
 
    for(int i = 1; i<=top; i++) {
        char *c = st[i];
         //   printf("in tack%s",c);

 
        // If the scanned character is
        // an operand, add it to output string.
         //   printf("%d",prec(c));

        if(prec(c)==-1)
            strcpy(st3[++top3],c);
 
        // If the scanned character is an
        // ‘(‘, push it to the stack.
       
 
        else {
            while(top2>0 && prec(st[i]) <= prec(st2[top2])) {
                strcpy(st3[++top3], st2[top2--]);
                
            }
            strcpy(st2[++top2],c);
        }
    }
    top4=0;
     int tee=1;
    while(tee<=top2) {

      //   printf("%s", st2[top2--]);
        strcpy(postFix[++top4],st2[tee++]);
        
    } 
   
    while(top3>0) {

      //   printf("%s", st3[top3--]);
      strcpy(postFix[++top4],st3[top3--]);
        
    } 
    
}

void eval(){
   
    inFixToPostFix();
    top=0;
    top5=0;
postFixTo3Address();
printf("%s : ",noPlaces);
      strcpy(noPlaces,increament(noPlaces));
    printf("%s = %s\n" ,stateVar[sv], endVar[ev]);

   // top5=0;
   // printpostFix();
   // postFixTo3Address();
}
void Printeval(){
   
    inFixToPostFix();
    top=0;
    top5=0;
postFixTo3Address();
printf("%s : ",noPlaces);
      strcpy(noPlaces,increament(noPlaces));
    printf("%s ( %s )\n" ,"print", endVar[ev]);

   // top5=0;
   // printpostFix();
   // postFixTo3Address();
}

void store(){
 if(top>=0) {
    printf("%s : ",noPlaces);
      strcpy(noPlaces,increament(noPlaces));
   printf("%s = %s \n",yytext,temp);
   
   strcpy(st[++top],temp);
   temp[1]++;}
   printst();
}
void load(){
 if(top>=0) {
    printf("%s : ",noPlaces);
      strcpy(noPlaces,increament(noPlaces));
   printf("%s = %s \n",temp,yytext);
   
   strcpy(st[++top],temp);
   temp[1]++;}
   printst();
}
void push (){
    
    printf("%s : ",noPlaces);
      strcpy(noPlaces,increament(noPlaces));
    printf("%s.type = %s\n",yytext,stateVar[2]);
    
}
void codegen(){

   // printf("%d",top);
   if(top>=0) {
      printf("%s : ",noPlaces);
      strcpy(noPlaces,increament(noPlaces));
   printf("%s = %s %s %s\n",temp,st[top-2],st[top-1],st[top]);
   
   top=-3;
   strcpy(st[++top],temp);
   temp[1]++;}
   printst();
}
void pushVar(){
   strcpy(st[++top],yytext);
   // eval();
   // printst();
    
}
char* filename;
int main (int argc, char* argv[])
{
  
   filename = argv[1];
    yyin = fopen(argv[1], "r");
 

  int tok = yyparse();
  if( tok == 0) 
     printf("The input formate for fortran language is Accepted!\n");
  else
     printf("The input formate for fortran language is Rejected!\n");
  return 0;
} 

