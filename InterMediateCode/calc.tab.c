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
#line 2 "calc.y"
 
   /* Definition section */
  #include<stdio.h> 
  int flag=0; 
  #include <string.h>
#include <stdarg.h>
#include <stdlib.h>
// #define YYSTYPE int
extern int yylex(void);
extern int line_num;
extern FILE *yyin;
extern int yylineno;
extern char *yytext;
FILE *fp;


#line 87 "calc.tab.c"

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
#ifndef YY_YY_CALC_TAB_H_INCLUDED
# define YY_YY_CALC_TAB_H_INCLUDED
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

#endif /* !YY_YY_CALC_TAB_H_INCLUDED  */



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
typedef yytype_int16 yy_state_t;

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
#define YYLAST   824

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  80
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  218
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  412

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
       2,     2,     2,     2,     2,     2,     2,    75,     2,     2,
      78,    79,    73,    76,     2,    77,     2,    74,     2,     2,
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
       0,   108,   108,   111,   113,   113,   114,   115,   116,   117,
     117,   118,   118,   119,   119,   120,   120,   121,   121,   122,
     122,   123,   124,   126,   127,   128,   128,   130,   130,   133,
     133,   141,   142,   145,   146,   148,   149,   151,   152,   153,
     154,   155,   157,   158,   159,   160,   161,   163,   164,   165,
     166,   167,   168,   170,   171,   172,   173,   174,   175,   175,
     179,   180,   186,   187,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   257,   258,
     260,   260,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   278,   279,   280,   281,   282,   282,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   295,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   311,   314,
     315,   316,   317,   322,   323,   324,   325,   326,   327,   328,
     330,   332,   333,   334,   335,   335,   337,   338,   338,   340,
     341,   342,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372
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
  "'*'", "'/'", "'%'", "'+'", "'-'", "'('", "')'", "$accept", "ROOT",
  "anynewline", "P", "main", "program", "identifier", "declare", "state",
  "implicitnone", "declarations", "datatypeChar", "datatypeInt",
  "datatype", "declaration", "list", "listwithoutnewline", "newline",
  "statements", "statement", "expression", "otherconstants", "operands",
  "constants", "operators", "comparision", "comparise",
  "comparisionOperator", "relationaloperator", "not", "typeDeclares",
  "typeDeclare", "datatypeType", "ifstatement", "elsestatement", "loops",
  "doloops", "twoconstants", "valconstants", "whileloops", "functions",
  "function", "functioncall", "results", "returntype", "colons", "keyword", YY_NULLPTR
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
     325,   326,   327,    42,    47,    37,    43,    45,    40,    41
};
# endif

#define YYPACT_NINF (-248)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-189)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       4,  -248,    32,   200,    11,  -248,    13,    54,  -248,  -248,
      72,  -248,    59,  -248,  -248,    64,  -248,  -248,  -248,   200,
    -248,   107,  -248,    18,    21,   133,   140,   112,    21,  -248,
    -248,   684,   203,   197,   407,    21,   198,   169,   170,  -248,
     205,  -248,  -248,  -248,  -248,  -248,  -248,  -248,  -248,  -248,
    -248,  -248,  -248,  -248,  -248,  -248,  -248,  -248,  -248,  -248,
    -248,  -248,  -248,  -248,  -248,  -248,  -248,     5,   182,    64,
     222,   -18,   193,   618,   194,  -248,  -248,   407,  -248,    78,
     218,   234,   204,   213,   247,    62,    82,    82,    99,   206,
      64,    82,    11,   212,   145,   -20,   125,  -248,   690,   113,
     -31,   235,    64,  -248,  -248,  -248,  -248,  -248,    57,  -248,
     712,  -248,   712,  -248,  -248,  -248,  -248,   712,  -248,   475,
    -248,  -248,   618,  -248,  -248,   434,  -248,   712,  -248,  -248,
    -248,  -248,  -248,    78,  -248,    78,     2,  -248,    17,   212,
     211,   215,   212,    82,   216,    22,  -248,    82,  -248,   252,
     141,   220,  -248,   194,   143,   194,   125,   162,   389,  -248,
     712,   734,  -248,  -248,   212,   127,    64,    70,  -248,   221,
     756,    58,   210,  -248,   618,   250,    11,    82,  -248,  -248,
    -248,   712,  -248,  -248,  -248,    11,   290,  -248,  -248,  -248,
      78,  -248,    11,   212,  -248,  -248,  -248,  -248,  -248,   237,
    -248,   252,    64,  -248,    64,   618,   252,    78,   194,    78,
      78,   437,   239,   245,  -248,  -248,   290,  -248,    64,    13,
      64,    11,   273,    93,   275,  -248,  -248,  -248,  -248,  -248,
    -248,  -248,  -248,  -248,  -248,   246,   142,   114,   313,   230,
      85,   253,   207,   281,   313,  -248,    11,    64,   257,  -248,
      11,  -248,  -248,  -248,  -248,    64,   141,   141,   283,    64,
    -248,    78,  -248,  -248,    -1,   212,    11,  -248,    11,    64,
      11,    11,    64,    64,   -15,    64,   313,  -248,  -248,   230,
    -248,  -248,    64,    68,    64,   313,   -21,   291,    64,    11,
      64,   141,   618,   618,   287,   141,  -248,    13,    64,    11,
      64,    11,   530,   530,   572,   530,   530,  -248,  -248,   530,
      64,   530,   530,   618,   313,   530,    64,    11,    11,   618,
     292,   298,    64,   618,    64,    11,    11,    11,   303,   303,
     530,   303,   303,   303,   304,   530,   305,   312,   314,   618,
     315,    11,   317,   309,   310,    11,   321,    11,   572,   322,
     342,   303,   343,   344,   346,   311,   347,   348,   352,   355,
     358,   368,   339,    64,    64,   351,   530,  -248,   373,   374,
       1,   376,   377,   379,    64,   378,    64,    64,    64,   384,
      64,    64,    11,    11,    64,  -248,    64,    64,   -14,    11,
      64,    64,    64,    11,    64,    11,    11,    11,    64,    11,
      11,    11,    11,    11,    64,    11,    11,    11,    11,    11,
      11,    11
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       5,    61,     0,    10,     4,     1,     0,    35,    41,    40,
      33,    39,    23,     2,     7,   187,    38,    37,   186,     8,
     174,     0,    60,    30,    30,     0,     0,     0,    30,     6,
     173,     0,     0,     0,    26,    30,     0,     0,     0,    24,
       0,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   192,   218,    59,     0,     0,
       0,     0,   190,    28,   191,   140,    25,   133,    46,    45,
       0,     0,     0,     0,     0,    59,    59,    57,    58,     0,
       0,    59,    29,     0,     0,     0,   146,   189,     0,     0,
     131,     0,     0,    97,    98,    92,    93,    94,    23,   108,
      70,   100,   102,   103,   104,   105,   106,     0,   107,    95,
      22,    27,    63,    69,    99,     0,    96,    88,    82,    83,
     158,   159,    84,    44,   132,    51,     0,    43,    21,     0,
       0,     0,     0,    59,     0,   185,    54,    55,    56,   185,
      26,     0,    15,   191,   191,   191,   146,     0,   146,    32,
     108,   103,    95,    74,     0,     0,     0,   131,   130,     0,
       0,   131,   168,   167,    64,     0,    76,    59,    66,    91,
      90,    68,    67,    62,   102,    89,     0,    87,    42,    48,
      50,    49,    52,    19,    17,    13,    36,    34,    11,   182,
     184,   185,     0,    53,     0,    28,   185,     0,   191,     0,
       0,   146,     0,     0,    31,    72,   108,    73,     0,     0,
       0,    80,     0,     0,     0,   120,   127,   122,   124,   123,
     125,   128,   129,   121,   126,   119,   131,   114,   118,   111,
     131,     0,     0,     0,     0,   168,   164,     0,     0,    65,
      86,    85,    47,     9,   181,     0,    26,    26,     0,     0,
     144,   145,   143,   142,     0,     0,    75,    71,    78,     0,
      81,    79,     0,     0,     0,     0,   116,   113,   112,   131,
     117,   110,     0,     0,     0,     0,     0,     0,     0,   166,
       0,    26,    28,    28,     0,    26,   141,     0,     0,   137,
       0,    77,    64,    64,    64,    64,    64,   115,   109,    64,
       0,    64,    64,    64,     0,    64,     0,   165,   180,    28,
       0,     0,     0,    28,     0,   138,   139,   135,   157,   157,
      64,   157,   157,   157,     0,    64,     0,     0,     0,    64,
       0,   161,     0,     0,     0,   177,     0,   134,    64,     0,
       0,   157,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    64,   156,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   178,   179,     0,   155,     0,     0,     0,   152,
       0,     0,     0,   172,     0,   170,   171,   162,     0,   163,
     175,   176,   150,   149,     0,   153,   154,   151,   148,   169,
     160,   147
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -248,  -248,  -248,  -248,   381,   153,   316,  -149,  -198,  -248,
     241,  -248,  -248,    27,   -88,  -117,   -27,    -6,  -112,  -248,
     -83,  -248,  -159,   -99,   286,  -130,  -248,   171,   -17,  -248,
     335,  -248,  -248,  -248,  -168,  -248,  -248,  -247,  -162,  -248,
    -248,   394,  -248,  -102,  -248,   -68,  -248
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    13,    14,    33,   119,    73,   120,    34,
     158,    16,    17,    74,    75,   137,    89,     4,   121,   122,
     123,   124,   125,   126,   127,   169,   237,   238,   239,   170,
      76,    77,    78,   128,   349,   129,   130,   174,   175,   131,
      19,    20,   132,    90,    21,    79,    68
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      24,   205,   173,   404,    -3,   304,   133,   258,   159,    28,
     183,   235,   167,   247,    85,   163,   188,    35,   189,   191,
     388,   193,    12,    32,   155,    94,    32,   178,   314,   179,
      18,    85,     5,   297,   180,   168,   182,   223,   313,    12,
     236,   241,    12,   202,   187,    12,    18,   204,    86,     1,
       1,   190,     1,    12,    87,     1,     1,    12,   144,   145,
     146,   148,   243,    92,   151,    96,   201,   339,   159,     1,
     214,     1,     1,   252,     1,  -185,   173,   215,   217,   280,
     286,    22,   288,     1,   150,   207,   209,   210,     1,   156,
     260,    22,   262,   263,   320,   321,   176,    25,   249,   255,
     177,   240,    12,   251,   259,   143,   277,   292,   293,   281,
     283,    87,   310,   273,   222,    26,   199,   307,    12,   185,
     203,   342,    12,   214,   168,   346,    27,   135,    27,   282,
     192,    87,  -183,   267,     1,    31,   168,   274,     1,    12,
     261,    37,   319,   173,   296,   173,   323,    38,   147,   308,
     248,   168,    39,    12,     7,     8,     9,    10,    11,   157,
     221,   350,   164,   352,   353,   354,    72,    12,   165,   246,
       7,     8,     9,    10,    11,    71,   219,    36,   231,   232,
     250,    40,    72,   370,    72,    12,   173,   208,    80,   153,
     328,   329,   331,   332,   333,    22,   256,   334,   257,   336,
     337,   338,    12,   340,     6,    94,   231,   232,   168,    69,
     266,    22,   268,   270,   271,   173,    70,    81,   351,   278,
     279,    82,    83,   356,    84,    91,    93,   360,  -188,     7,
       8,     9,    10,    11,    97,    72,   367,   138,   139,   140,
      12,   289,   103,   104,   105,   106,   107,    12,   141,   291,
     149,   142,    12,   295,   385,   196,   285,   171,   299,   197,
     200,    85,   242,   301,   206,   224,   302,   303,   305,   306,
     103,   104,   105,   106,   107,    12,   309,   311,   312,   265,
     315,   254,   317,   155,   318,   103,   104,   105,   106,   107,
      12,   325,   326,   272,   327,   275,   168,   284,   330,   244,
     287,   290,   294,   225,   335,   226,   227,   228,   229,   230,
     341,   343,   316,   233,   234,   322,   345,   344,   347,    15,
       1,   348,    23,   355,   357,   103,   104,   105,   106,   107,
      12,   358,   374,   359,   361,    15,   362,   363,   364,   109,
     365,   368,   366,   111,   112,   113,   114,    67,   103,   104,
     105,   106,   107,    12,   115,   116,   117,   382,   383,   118,
       1,   369,   371,   372,   389,   373,   375,   381,   393,   376,
     395,   396,   397,   377,   399,   400,   378,   379,   401,   384,
     402,   403,   405,    88,   406,   407,   408,    95,   409,   380,
     386,   387,   410,   390,   391,   136,   392,   211,   411,   394,
      29,    88,    88,    88,    88,   398,   276,    88,   213,   152,
     154,   186,   134,    30,   162,   166,     0,   172,     7,     8,
       9,    10,    11,   157,     0,     0,   162,     0,   162,     0,
      72,     0,     0,   162,     0,   162,     7,     8,     9,    10,
      11,    71,     0,   162,     0,     0,     0,     0,    72,   136,
       0,   136,   136,     0,   194,   195,   264,     0,   198,    88,
       0,     0,     0,    88,     0,     0,     7,     8,     9,    10,
      11,   157,     0,   212,     0,     0,   162,   162,    72,     0,
     218,   220,     0,   109,     0,     0,   162,   111,   184,   113,
     114,   245,     0,    88,     0,     0,     0,   162,   115,   116,
       0,     0,   162,   118,     1,     0,   136,     0,     0,   253,
     103,   104,   105,   106,   107,    12,     0,     0,     0,     0,
       0,     0,     0,   136,   109,   136,   136,   181,   111,   112,
     113,   114,   162,     0,     0,   269,     0,     0,     0,   115,
     116,   117,     0,     0,   118,    98,    99,   100,     0,     0,
       0,   101,     0,     0,   162,   102,     0,     0,   245,     0,
     245,     0,     0,     0,     0,   103,   104,   105,   106,   107,
     108,     0,     0,     0,     0,     0,     0,   136,     0,   109,
     298,   300,   110,   111,   112,   113,   114,    98,    99,   100,
       0,     0,   162,   101,   115,   116,   117,   102,     0,   118,
      22,   245,     0,     0,     0,     0,     0,   103,   104,   105,
     106,   107,   108,   324,     0,     0,     0,     0,     0,     0,
       0,   109,     0,     0,   110,   111,   112,   113,   114,     0,
     245,     0,     0,    98,    99,   100,   115,   116,   117,   101,
       0,   118,     1,   102,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   103,   104,   105,   106,   107,   108,     0,
       0,     0,     0,     0,     0,     0,     0,   109,     0,     0,
     110,   111,   112,   113,   114,     0,     0,     0,     0,     0,
       0,     0,   115,   116,   117,     0,     0,   118,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,     0,     0,     0,     0,     0,    66,     0,
       0,     0,     0,     0,    12,   103,   104,   105,   106,   107,
      12,     0,     0,     0,     0,     0,     0,     0,     0,   160,
       0,     0,     0,   111,   112,   161,   114,   103,   104,   105,
     106,   107,    12,     0,   115,   116,   117,     0,     0,   118,
       0,   109,     0,     0,     0,   111,   112,   113,   114,   103,
     104,   105,   106,   107,    12,     0,   115,   116,   117,     0,
       0,   118,     0,   216,     0,     0,     0,   111,   112,   113,
     114,   103,   104,   105,   106,   107,    12,     0,   115,   116,
     117,     0,     0,   118,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   225,     0,   226,   227,   228,   229,   230,
     231,   232,   168,   233,   234
};

static const yytype_int16 yycheck[] =
{
       6,   150,   101,    17,     0,    20,    74,   205,    96,    15,
     122,   170,    43,   175,     9,    98,   133,    23,   135,   136,
      19,     4,    40,     5,    44,    43,     5,   110,    49,   112,
       3,     9,     0,    34,   117,    66,   119,   167,   285,    40,
     170,   171,    40,   145,   127,    40,    19,   149,    43,    70,
      70,    49,    70,    40,    49,    70,    70,    40,    85,    86,
      87,    88,   174,    69,    91,    71,    44,   314,   156,    70,
     158,    70,    70,   190,    70,    70,   175,   160,   161,   238,
     242,    70,   244,    70,    90,   153,   154,   155,    70,    95,
     207,    70,   209,   210,   292,   293,   102,    43,   181,   201,
      43,    43,    40,   186,   206,    43,   236,   256,   257,   239,
     240,    49,    44,    20,    44,    43,   143,   276,    40,   125,
     147,   319,    40,   211,    66,   323,    69,    49,    69,    44,
     136,    49,    70,   216,    70,    28,    66,    44,    70,    40,
     208,     8,   291,   242,   261,   244,   295,     7,    49,   279,
     177,    66,    40,    40,    29,    30,    31,    32,    33,    34,
     166,   329,    49,   331,   332,   333,    41,    40,    55,   175,
      29,    30,    31,    32,    33,    34,    49,    24,    64,    65,
     186,    28,    41,   351,    41,    40,   285,    44,    35,    44,
     302,   303,   304,   305,   306,    70,   202,   309,   204,   311,
     312,   313,    40,   315,     4,    43,    64,    65,    66,     6,
     216,    70,   218,   219,   220,   314,    19,    19,   330,   236,
     237,    52,    52,   335,    19,    43,     4,   339,    28,    29,
      30,    31,    32,    33,    41,    41,   348,    19,     4,    35,
      40,   247,    35,    36,    37,    38,    39,    40,    35,   255,
      44,     4,    40,   259,   366,    44,    49,    22,   264,    44,
      44,     9,    52,   269,    44,    44,   272,   273,   274,   275,
      35,    36,    37,    38,    39,    40,   282,   283,   284,    34,
     286,    44,   288,    44,   290,    35,    36,    37,    38,    39,
      40,   297,   298,    20,   300,    20,    66,    44,   304,    49,
      19,    44,    19,    57,   310,    59,    60,    61,    62,    63,
     316,    19,    21,    67,    68,    28,   322,    19,   324,     3,
      70,    18,     6,    19,    19,    35,    36,    37,    38,    39,
      40,    19,    21,    19,    19,    19,    19,    28,    28,    49,
      19,    19,   348,    53,    54,    55,    56,    31,    35,    36,
      37,    38,    39,    40,    64,    65,    66,   363,   364,    69,
      70,    19,    19,    19,   370,    19,    19,    28,   374,    21,
     376,   377,   378,    21,   380,   381,    21,    19,   384,    28,
     386,   387,   388,    67,   390,   391,   392,    71,   394,    21,
      17,    17,   398,    17,    17,    79,    17,   156,   404,    21,
      19,    85,    86,    87,    88,    21,   235,    91,    19,    93,
      94,   125,    77,    19,    98,    99,    -1,   101,    29,    30,
      31,    32,    33,    34,    -1,    -1,   110,    -1,   112,    -1,
      41,    -1,    -1,   117,    -1,   119,    29,    30,    31,    32,
      33,    34,    -1,   127,    -1,    -1,    -1,    -1,    41,   133,
      -1,   135,   136,    -1,   138,   139,    19,    -1,   142,   143,
      -1,    -1,    -1,   147,    -1,    -1,    29,    30,    31,    32,
      33,    34,    -1,   157,    -1,    -1,   160,   161,    41,    -1,
     164,   165,    -1,    49,    -1,    -1,   170,    53,    54,    55,
      56,   175,    -1,   177,    -1,    -1,    -1,   181,    64,    65,
      -1,    -1,   186,    69,    70,    -1,   190,    -1,    -1,   193,
      35,    36,    37,    38,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   207,    49,   209,   210,    52,    53,    54,
      55,    56,   216,    -1,    -1,   219,    -1,    -1,    -1,    64,
      65,    66,    -1,    -1,    69,    15,    16,    17,    -1,    -1,
      -1,    21,    -1,    -1,   238,    25,    -1,    -1,   242,    -1,
     244,    -1,    -1,    -1,    -1,    35,    36,    37,    38,    39,
      40,    -1,    -1,    -1,    -1,    -1,    -1,   261,    -1,    49,
     264,   265,    52,    53,    54,    55,    56,    15,    16,    17,
      -1,    -1,   276,    21,    64,    65,    66,    25,    -1,    69,
      70,   285,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,
      38,    39,    40,   297,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    -1,    52,    53,    54,    55,    56,    -1,
     314,    -1,    -1,    15,    16,    17,    64,    65,    66,    21,
      -1,    69,    70,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    36,    37,    38,    39,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,
      52,    53,    54,    55,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    65,    66,    -1,    -1,    69,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    40,    35,    36,    37,    38,    39,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      -1,    -1,    -1,    53,    54,    55,    56,    35,    36,    37,
      38,    39,    40,    -1,    64,    65,    66,    -1,    -1,    69,
      -1,    49,    -1,    -1,    -1,    53,    54,    55,    56,    35,
      36,    37,    38,    39,    40,    -1,    64,    65,    66,    -1,
      -1,    69,    -1,    49,    -1,    -1,    -1,    53,    54,    55,
      56,    35,    36,    37,    38,    39,    40,    -1,    64,    65,
      66,    -1,    -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    -1,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    70,    81,    82,    97,     0,     4,    29,    30,    31,
      32,    33,    40,    83,    84,    86,    91,    92,    93,   120,
     121,   124,    70,    86,    97,    43,    43,    69,    97,    84,
     121,    28,     5,    85,    89,    97,    85,     8,     7,    40,
      85,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    34,    86,   126,     6,
      19,    34,    41,    87,    93,    94,   110,   111,   112,   125,
      85,    19,    52,    52,    19,     9,    43,    49,    86,    96,
     123,    43,    97,     4,    43,    86,    97,    41,    15,    16,
      17,    21,    25,    35,    36,    37,    38,    39,    40,    49,
      52,    53,    54,    55,    56,    64,    65,    66,    69,    86,
      88,    98,    99,   100,   101,   102,   103,   104,   113,   115,
     116,   119,   122,   125,   110,    49,    86,    95,    19,     4,
      35,    35,     4,    43,    96,    96,    96,    49,    96,    44,
      97,    96,    86,    44,    86,    44,    97,    34,    90,    94,
      49,    55,    86,   100,    49,    55,    86,    43,    66,   105,
     109,    22,    86,   103,   117,   118,    97,    43,   100,   100,
     100,    52,   100,    98,    54,    97,   104,   100,    95,    95,
      49,    95,    97,     4,    86,    86,    44,    44,    86,    96,
      44,    44,   123,    96,   123,    87,    44,   125,    44,   125,
     125,    90,    86,    19,    94,   100,    49,   100,    86,    49,
      86,    97,    44,   105,    44,    57,    59,    60,    61,    62,
      63,    64,    65,    67,    68,   102,   105,   106,   107,   108,
      43,   105,    52,    98,    49,    86,    97,   118,    96,   100,
      97,   100,    95,    86,    44,   123,    97,    97,    88,   123,
      95,   125,    95,    95,    19,    34,    97,   100,    97,    86,
      97,    97,    20,    20,    44,    20,   107,   105,   108,   108,
     102,   105,    44,   105,    44,    49,   118,    19,   118,    97,
      44,    97,    87,    87,    19,    97,    95,    34,    86,    97,
      86,    97,    97,    97,    20,    97,    97,   102,   105,    97,
      44,    97,    97,   117,    49,    97,    21,    97,    97,    87,
      88,    88,    28,    87,    86,    97,    97,    97,    98,    98,
      97,    98,    98,    98,    98,    97,    98,    98,    98,   117,
      98,    97,    88,    19,    19,    97,    88,    97,    18,   114,
     114,    98,   114,   114,   114,    19,    98,    19,    19,    19,
      98,    19,    19,    28,    28,    19,    97,    98,    19,    19,
     114,    19,    19,    19,    21,    19,    21,    21,    21,    19,
      21,    28,    97,    97,    28,    98,    17,    17,    19,    97,
      17,    17,    17,    97,    21,    97,    97,    97,    21,    97,
      97,    97,    97,    97,    17,    97,    97,    97,    97,    97,
      97,    97
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    80,    81,    81,    82,    82,    83,    83,    83,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    85,    86,    86,    87,    87,    88,    88,    89,
      89,    90,    90,    91,    91,    92,    92,    93,    93,    93,
      93,    93,    94,    94,    94,    94,    94,    95,    95,    95,
      95,    95,    95,    96,    96,    96,    96,    96,    96,    96,
      97,    97,    98,    98,    98,    99,    99,    99,    99,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,    99,    99,   100,   100,   100,   100,   100,
     100,   100,   101,   101,   101,   102,   102,   103,   103,   103,
     104,   104,   104,   104,   104,   104,   104,   104,   104,   105,
     105,   105,   105,   105,   105,   106,   106,   106,   106,   106,
     107,   107,   107,   107,   107,   107,   107,   107,   108,   108,
     109,   109,   110,   110,   111,   111,   111,   111,   111,   111,
     111,   112,   112,   112,   112,   112,   112,   113,   113,   113,
     113,   113,   113,   113,   113,   114,   114,   114,   115,   115,
     116,   116,   116,   116,   117,   117,   117,   118,   118,   119,
     119,   119,   119,   120,   120,   121,   121,   121,   121,   121,
     122,   123,   123,   123,   123,   123,   124,   124,   124,   125,
     125,   125,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     0,     1,     0,     2,     1,     1,     7,
       0,     6,     0,     6,     0,     6,     0,     6,     0,     6,
       0,     5,     3,     1,     3,     1,     0,     1,     0,     3,
       0,     2,     1,     1,     6,     1,     6,     1,     1,     1,
       1,     1,     3,     2,     2,     1,     1,     3,     2,     2,
       2,     1,     2,     3,     2,     2,     2,     1,     1,     0,
       2,     1,     2,     1,     0,     3,     2,     2,     2,     1,
       1,     4,     3,     3,     2,     4,     2,     5,     4,     4,
       3,     4,     1,     1,     1,     3,     3,     2,     1,     2,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       3,     2,     3,     3,     2,     3,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     2,     1,     8,     7,     8,     6,     7,     7,
       1,     6,     5,     5,     5,     5,     0,    11,    10,    10,
      10,    10,     9,    10,    10,     3,     2,     0,     1,     1,
      10,     6,     9,     9,     2,     4,     3,     1,     1,    10,
       9,     9,     9,     2,     1,    13,    13,    10,    12,    12,
       5,     4,     3,     1,     3,     0,     1,     1,     0,     2,
       1,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1
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
#line 108 "calc.y"
                 {
         
         return 0; 
      }
#line 1765 "calc.tab.c"
    break;

  case 3:
#line 111 "calc.y"
         {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," main functions is missing!\n");exit(1);}
#line 1771 "calc.tab.c"
    break;

  case 8:
#line 116 "calc.y"
          {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," main function is missing!\n");exit(1);}
#line 1777 "calc.tab.c"
    break;

  case 11:
#line 118 "calc.y"
                                                                {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," program keyword is missing!\n");exit(1);}
#line 1783 "calc.tab.c"
    break;

  case 13:
#line 119 "calc.y"
                                                                {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," program name is missing!\n");exit(1);}
#line 1789 "calc.tab.c"
    break;

  case 15:
#line 120 "calc.y"
                                                                   {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," undefined symbol after identifier in program!\n");exit(1);}
#line 1795 "calc.tab.c"
    break;

  case 17:
#line 121 "calc.y"
                                                                {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," undefined end in program!\n");exit(1);}
#line 1801 "calc.tab.c"
    break;

  case 19:
#line 122 "calc.y"
                                                                {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," undefined end in program!\n");exit(1);}
#line 1807 "calc.tab.c"
    break;

  case 21:
#line 123 "calc.y"
                                                    {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," undefined end in program!\n");exit(1);}
#line 1813 "calc.tab.c"
    break;

  case 43:
#line 158 "calc.y"
            {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," declaration syntax error!\n");exit(1);}
#line 1819 "calc.tab.c"
    break;

  case 44:
#line 159 "calc.y"
                 {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," declaration syntax error!\n");exit(1);}
#line 1825 "calc.tab.c"
    break;

  case 45:
#line 160 "calc.y"
       {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," declaration syntax error!\n");exit(1);}
#line 1831 "calc.tab.c"
    break;

  case 48:
#line 164 "calc.y"
               {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in declaration of variables\n");exit(1);}
#line 1837 "calc.tab.c"
    break;

  case 49:
#line 165 "calc.y"
                 {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in declaration of variables\n");exit(1);}
#line 1843 "calc.tab.c"
    break;

  case 50:
#line 166 "calc.y"
                     {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in declaration of variables\n");exit(1);}
#line 1849 "calc.tab.c"
    break;

  case 51:
#line 167 "calc.y"
          {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in declaration of variables\n");exit(1);}
#line 1855 "calc.tab.c"
    break;

  case 54:
#line 171 "calc.y"
                            {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in arguments\n");exit(1);}
#line 1861 "calc.tab.c"
    break;

  case 55:
#line 172 "calc.y"
                     {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in arguments\n");exit(1);}
#line 1867 "calc.tab.c"
    break;

  case 56:
#line 173 "calc.y"
                              {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in arguments\n");exit(1);}
#line 1873 "calc.tab.c"
    break;

  case 57:
#line 174 "calc.y"
          {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in arguments\n");exit(1);}
#line 1879 "calc.tab.c"
    break;

  case 66:
#line 189 "calc.y"
                    {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in simple statement\n");exit(1);}
#line 1885 "calc.tab.c"
    break;

  case 67:
#line 190 "calc.y"
                       {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in simple statement\n");exit(1);}
#line 1891 "calc.tab.c"
    break;

  case 68:
#line 191 "calc.y"
                     {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in simple statement\n");exit(1);}
#line 1897 "calc.tab.c"
    break;

  case 69:
#line 192 "calc.y"
           {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in simple statement\n");exit(1);}
#line 1903 "calc.tab.c"
    break;

  case 70:
#line 193 "calc.y"
          {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in simple statement\n");exit(1);}
#line 1909 "calc.tab.c"
    break;

  case 72:
#line 195 "calc.y"
                              {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in print statement\n");exit(1);}
#line 1915 "calc.tab.c"
    break;

  case 73:
#line 196 "calc.y"
                            {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in print statement\n");exit(1);}
#line 1921 "calc.tab.c"
    break;

  case 74:
#line 197 "calc.y"
                     {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in print statement\n");exit(1);}
#line 1927 "calc.tab.c"
    break;

  case 75:
#line 198 "calc.y"
                                 {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in print statement\n");exit(1);}
#line 1933 "calc.tab.c"
    break;

  case 78:
#line 201 "calc.y"
                                     {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in read statement!\n");exit(1);}
#line 1939 "calc.tab.c"
    break;

  case 79:
#line 202 "calc.y"
                                   {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in read statement!\n");exit(1);}
#line 1945 "calc.tab.c"
    break;

  case 80:
#line 203 "calc.y"
                            {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in read statement!\n");exit(1);}
#line 1951 "calc.tab.c"
    break;

  case 81:
#line 204 "calc.y"
                                {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in read statement!\n");exit(1);}
#line 1957 "calc.tab.c"
    break;

  case 86:
#line 209 "calc.y"
                           {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in expression!\n");exit(1);}
#line 1963 "calc.tab.c"
    break;

  case 87:
#line 210 "calc.y"
                      {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in expression!\n");exit(1);}
#line 1969 "calc.tab.c"
    break;

  case 88:
#line 211 "calc.y"
           {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in expression!\n");exit(1);}
#line 1975 "calc.tab.c"
    break;

  case 110:
#line 238 "calc.y"
                                   {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," two booleans are required for relationaloperator!\n");exit(1);}
#line 1981 "calc.tab.c"
    break;

  case 111:
#line 239 "calc.y"
                        {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," two booleans are required for relationaloperator!\n");exit(1);}
#line 1987 "calc.tab.c"
    break;

  case 112:
#line 240 "calc.y"
                                   {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," two booleans are required for relationaloperator!\n");exit(1);}
#line 1993 "calc.tab.c"
    break;

  case 113:
#line 241 "calc.y"
                            {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," a relationaloperator is required for two booleans!\n");exit(1);}
#line 1999 "calc.tab.c"
    break;

  case 116:
#line 244 "calc.y"
                             {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," two operands are required for comparisionOperator!\n");exit(1);}
#line 2005 "calc.tab.c"
    break;

  case 117:
#line 245 "calc.y"
                             {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," two operands are required for comparisionOperator!\n");exit(1);}
#line 2011 "calc.tab.c"
    break;

  case 118:
#line 246 "calc.y"
                     {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," two operands are required for comparisionOperator!\n");exit(1);}
#line 2017 "calc.tab.c"
    break;

  case 135:
#line 267 "calc.y"
                                                                {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," identifier name required in the type declaration!\n");exit(1);}
#line 2023 "calc.tab.c"
    break;

  case 136:
#line 268 "calc.y"
                                                                          {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," undefined symbol after identifier in the type declaration!\n");exit(1);}
#line 2029 "calc.tab.c"
    break;

  case 137:
#line 269 "calc.y"
                                                       {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," undefined end in the type declaration!\n");exit(1);}
#line 2035 "calc.tab.c"
    break;

  case 138:
#line 270 "calc.y"
                                                                {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," undefined end in the type declaration!\n");exit(1);}
#line 2041 "calc.tab.c"
    break;

  case 139:
#line 271 "calc.y"
                                                                   {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s","undefined end in the type declaration!\n");exit(1);}
#line 2047 "calc.tab.c"
    break;

  case 142:
#line 279 "calc.y"
                                      {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," starting paranthesis required in the type datatype!\n");exit(1);}
#line 2053 "calc.tab.c"
    break;

  case 143:
#line 280 "calc.y"
                                      {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," end paranthesis required in the type datatype!\n");exit(1);}
#line 2059 "calc.tab.c"
    break;

  case 144:
#line 281 "calc.y"
                                 {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," a derived variable required in the type datatype!\n");exit(1);}
#line 2065 "calc.tab.c"
    break;

  case 145:
#line 282 "calc.y"
                                        {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," atleast 1 IDENTIFIER in the type datatype!\n");exit(1);}
#line 2071 "calc.tab.c"
    break;

  case 148:
#line 287 "calc.y"
                                                                                       {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," starting paranthesis required in the if statement!\n");exit(1);}
#line 2077 "calc.tab.c"
    break;

  case 149:
#line 288 "calc.y"
                                                                                       {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," end paranthesis required in the if statement!\n");exit(1);}
#line 2083 "calc.tab.c"
    break;

  case 150:
#line 289 "calc.y"
                                                                                 {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," a boolean value required in the if statement!\n");exit(1);}
#line 2089 "calc.tab.c"
    break;

  case 151:
#line 290 "calc.y"
                                                                                      {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," \"then\" is missing in the if statement!\n");exit(1);}
#line 2095 "calc.tab.c"
    break;

  case 152:
#line 291 "calc.y"
                                                                                  {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," ending of if is missing in the if statement!\n");exit(1);}
#line 2101 "calc.tab.c"
    break;

  case 153:
#line 292 "calc.y"
                                                                                        {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," undefined end in the if statement!\n");exit(1);}
#line 2107 "calc.tab.c"
    break;

  case 154:
#line 293 "calc.y"
                                                                                      {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," undefined symbol after then the if statement!\n");exit(1);}
#line 2113 "calc.tab.c"
    break;

  case 156:
#line 295 "calc.y"
                    {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," undefined symbol after else!\n");exit(1);}
#line 2119 "calc.tab.c"
    break;

  case 161:
#line 305 "calc.y"
                                                       {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," initialisation required in do loop!\n");exit(1);}
#line 2125 "calc.tab.c"
    break;

  case 162:
#line 306 "calc.y"
                                                                                   {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," initialisation syntax error in do loop!\n");exit(1);}
#line 2131 "calc.tab.c"
    break;

  case 163:
#line 307 "calc.y"
                                                                                   {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," an upperbound required in do loop!\n");exit(1);}
#line 2137 "calc.tab.c"
    break;

  case 166:
#line 310 "calc.y"
                                   {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in do loop!\n");exit(1);}
#line 2143 "calc.tab.c"
    break;

  case 170:
#line 315 "calc.y"
                                                                           {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," end paranthesis required in the while!\n");exit(1);}
#line 2149 "calc.tab.c"
    break;

  case 171:
#line 316 "calc.y"
                                                                           {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," starting paranthesis required in the while!\n");exit(1);}
#line 2155 "calc.tab.c"
    break;

  case 172:
#line 317 "calc.y"
                                                                     {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," a boolean value must have in the while!\n");exit(1);}
#line 2161 "calc.tab.c"
    break;

  case 176:
#line 325 "calc.y"
                                                                                                                        {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," function name cannot be a keyword!\n");exit(1);}
#line 2167 "calc.tab.c"
    break;

  case 177:
#line 326 "calc.y"
                                                                                            {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," paranthesis required in function!\n");exit(1);}
#line 2173 "calc.tab.c"
    break;

  case 178:
#line 327 "calc.y"
                                                                                                                    {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," end bracket missing in function!\n");exit(1);}
#line 2179 "calc.tab.c"
    break;

  case 179:
#line 328 "calc.y"
                                                                                                                     {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," starting bracket missing in function!\n");exit(1);}
#line 2185 "calc.tab.c"
    break;

  case 182:
#line 333 "calc.y"
                                   {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," end bracket missing in result!\n");exit(1);}
#line 2191 "calc.tab.c"
    break;

  case 183:
#line 334 "calc.y"
           {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," paranthesis required in result!\n");exit(1);}
#line 2197 "calc.tab.c"
    break;

  case 184:
#line 335 "calc.y"
                                   {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," starting bracket missing in result!\n");exit(1);}
#line 2203 "calc.tab.c"
    break;

  case 187:
#line 338 "calc.y"
           {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," :return type must be datatype!\n");exit(1);}
#line 2209 "calc.tab.c"
    break;

  case 190:
#line 341 "calc.y"
         {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," colon symbol missing!\n");exit(1);}
#line 2215 "calc.tab.c"
    break;

  case 191:
#line 342 "calc.y"
 {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," colon symbol missing!\n");exit(1);}
#line 2221 "calc.tab.c"
    break;


#line 2225 "calc.tab.c"

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
#line 376 "calc.y"
 
  
  
void yyerror() 
{ 
   printf("\n Untrack error found\n"); 
   flag=1; 
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

