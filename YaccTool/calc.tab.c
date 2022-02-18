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
#line 1 "calc.y"
 
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
#define YYFINAL  24
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   805

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  80
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  214
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  404

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
       0,   107,   107,   110,   112,   113,   114,   115,   115,   116,
     116,   117,   117,   118,   118,   119,   119,   120,   120,   121,
     122,   124,   125,   126,   126,   128,   128,   131,   131,   139,
     140,   143,   144,   146,   147,   149,   150,   151,   152,   153,
     155,   156,   157,   158,   159,   161,   162,   163,   164,   165,
     166,   168,   169,   170,   171,   172,   173,   173,   177,   178,
     184,   185,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   254,   255,   257,   257,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   275,   276,
     277,   278,   279,   279,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   292,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   308,   311,   312,   313,   314,
     319,   320,   321,   322,   323,   324,   325,   327,   328,   329,
     330,   330,   332,   333,   333,   335,   336,   337,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367
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
  "'*'", "'/'", "'%'", "'+'", "'-'", "'('", "')'", "$accept", "ROOT", "P",
  "main", "program", "identifier", "declare", "state", "implicitnone",
  "declarations", "datatypeChar", "datatypeInt", "datatype", "declaration",
  "list", "listwithoutnewline", "newline", "statements", "statement",
  "expression", "otherconstants", "operands", "constants", "operators",
  "comparision", "comparise", "comparisionOperator", "relationaloperator",
  "not", "typeDeclares", "typeDeclare", "datatypeType", "ifstatement",
  "elsestatement", "loops", "doloops", "twoconstants", "valconstants",
  "whileloops", "functions", "function", "results", "returntype", "colons",
  "keyword", YY_NULLPTR
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

#define YYPACT_NINF (-212)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-185)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     133,    -2,     2,  -212,  -212,    16,  -212,   -26,   126,  -212,
    -212,    22,  -212,  -212,  -212,   133,  -212,   106,  -212,     5,
       6,   132,   146,   127,  -212,     6,  -212,  -212,   674,   171,
     152,   764,     6,  -212,   156,   149,   167,  -212,   160,  -212,
    -212,  -212,  -212,  -212,  -212,  -212,  -212,  -212,  -212,  -212,
    -212,  -212,  -212,  -212,  -212,  -212,  -212,  -212,  -212,  -212,
    -212,  -212,  -212,  -212,  -212,    -3,   178,    22,   219,   -18,
     183,   608,   188,  -212,  -212,   764,  -212,    89,   211,   229,
     197,   199,   232,    -1,   129,   129,   169,   193,    22,   129,
     170,   201,     9,     0,   115,  -212,   418,   119,    64,   469,
      22,  -212,  -212,  -212,  -212,  -212,  -212,   680,  -212,   680,
    -212,  -212,  -212,  -212,   680,  -212,   463,  -212,  -212,   608,
    -212,  -212,   585,  -212,   680,  -212,  -212,  -212,  -212,    89,
    -212,    89,   -20,  -212,    17,   201,   195,   200,   201,   129,
     202,    42,  -212,   129,  -212,   236,   165,   204,  -212,   188,
      55,   188,   115,   168,   380,  -212,   680,   702,  -212,  -212,
     201,   173,    22,    91,  -212,   205,   724,    65,   198,  -212,
     608,   224,   170,  -212,  -212,  -212,   680,  -212,  -212,  -212,
     170,   277,  -212,  -212,  -212,    89,  -212,   170,   201,  -212,
    -212,  -212,  -212,  -212,   207,  -212,   236,    22,  -212,    22,
     608,   236,    89,   188,    89,    89,   398,   209,   220,  -212,
    -212,   277,  -212,    22,    -2,    22,   170,   248,    10,   250,
    -212,  -212,  -212,  -212,  -212,  -212,  -212,  -212,  -212,  -212,
     228,   162,    90,   283,   206,    92,   230,   514,   256,   283,
    -212,   170,    22,  -212,   170,  -212,  -212,  -212,  -212,    22,
     165,   165,   257,    22,  -212,    89,  -212,  -212,    -6,   201,
     170,  -212,   170,    22,   170,   170,    22,    22,    -4,    22,
     283,  -212,  -212,   206,  -212,  -212,    22,    57,    22,   283,
      53,   260,    22,   170,   165,   608,   608,   249,   165,  -212,
      -2,    22,   170,    22,   170,   520,   520,   566,   520,   520,
    -212,  -212,   520,    22,   520,   520,   608,   283,   520,    22,
     170,   608,   259,   264,    22,   608,    22,   170,   170,   170,
     266,   266,   520,   266,   266,   266,   274,   520,   278,   280,
     281,   608,   282,   170,   285,   279,   297,   170,   287,   170,
     566,   289,   292,   266,   308,   315,   316,   307,   317,   318,
     319,   327,   330,   329,   310,    22,    22,   324,   520,  -212,
     336,   337,    -5,   339,   343,   346,    22,   345,    22,    22,
      22,   349,    22,    22,   170,   170,    22,  -212,    22,    22,
     -10,   170,    22,    22,    22,   170,    22,   170,   170,   170,
      22,   170,   170,   170,   170,   170,    22,   170,   170,   170,
     170,   170,   170,   170
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,    33,    39,    38,    31,    37,    21,     0,     2,
       5,   183,    36,    35,   182,     6,   171,     0,    59,    28,
      28,     0,     0,     0,     1,    28,     4,   170,     0,     0,
       0,    24,    28,    58,     0,     0,     0,    22,     0,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   188,   214,    57,     0,     0,     0,     0,
     186,    26,   187,   137,    23,   130,    44,    43,     0,     0,
       0,     0,     0,    57,    57,    55,    56,     0,     0,    57,
      27,     0,     0,     0,   143,   185,     0,     0,   128,     0,
       0,    94,    95,    89,    90,    91,   105,    68,    97,    99,
     100,   101,   102,   103,     0,   104,    92,    20,    25,    61,
      67,    96,     0,    93,    85,    80,    81,   155,   156,    42,
     129,    49,     0,    41,    19,     0,     0,     0,     0,    57,
       0,   181,    52,    53,    54,   181,    24,     0,    13,   187,
     187,   187,   143,     0,   143,    30,   105,   100,    92,    72,
       0,     0,     0,   128,   127,     0,     0,   128,   165,   164,
      62,     0,    74,    64,    88,    87,    66,    65,    60,    99,
      86,     0,    84,    40,    46,    48,    47,    50,    17,    15,
      11,    34,    32,     9,   178,   180,   181,     0,    51,     0,
      26,   181,     0,   187,     0,     0,   143,     0,     0,    29,
      70,   105,    71,     0,     0,     0,    78,     0,     0,     0,
     117,   124,   119,   121,   120,   122,   125,   126,   118,   123,
     116,   128,   111,   115,   108,   128,     0,     0,     0,     0,
     165,   161,     0,    63,    83,    82,    45,     7,   177,     0,
      24,    24,     0,     0,   141,   142,   140,   139,     0,     0,
      73,    69,    76,     0,    79,    77,     0,     0,     0,     0,
     113,   110,   109,   128,   114,   107,     0,     0,     0,     0,
       0,     0,     0,   163,    24,    26,    26,     0,    24,   138,
       0,     0,   134,     0,    75,    62,    62,    62,    62,    62,
     112,   106,    62,     0,    62,    62,    62,     0,    62,     0,
     162,    26,     0,     0,     0,    26,     0,   135,   136,   132,
     154,   154,    62,   154,   154,   154,     0,    62,     0,     0,
       0,    62,     0,   158,     0,     0,     0,   174,     0,   131,
      62,     0,     0,   154,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    62,   153,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   175,   176,     0,   152,     0,     0,
       0,   149,     0,     0,     0,   169,     0,   167,   168,   159,
       0,   160,   172,   173,   147,   146,     0,   150,   151,   148,
     145,   166,   157,   144
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -212,  -212,  -212,   361,   185,   309,  -145,  -191,  -212,   150,
    -212,  -212,    47,   -91,  -114,    33,   -11,  -115,  -212,   -83,
    -212,  -161,   -87,   242,  -131,  -212,   147,   -17,  -212,   305,
    -212,  -212,  -212,  -211,  -212,  -212,  -182,  -152,  -212,  -212,
     366,  -118,  -212,   -70,  -212
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     8,     9,    10,    30,   116,    71,   117,    31,   154,
      12,    13,    72,    73,   133,    87,    20,   118,   119,   120,
     121,   122,   123,   124,   165,   232,   233,   234,   166,    74,
      75,    76,   125,   341,   126,   127,   170,   171,   128,    15,
      16,    88,    17,    77,    66
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      25,   200,   129,   155,   178,   230,    83,   396,    32,   252,
      29,    29,   169,   159,   380,   183,   297,   184,   186,   242,
       7,   188,     7,   197,   173,    92,   174,   199,   290,   185,
     267,   175,   218,   177,     7,   231,   236,     7,     7,     7,
      84,   182,   139,    23,   151,    21,    85,    14,    85,     7,
      18,    83,    18,   149,   268,   238,    90,     7,    94,    22,
      18,   155,    14,   209,    18,    18,    18,  -181,    18,  -179,
      18,   246,   274,   210,   212,    18,    33,   146,   249,   202,
     204,   205,   152,   253,   169,   280,   196,   282,   254,   172,
     256,   257,    18,   243,   312,   313,    70,   306,   245,   203,
     271,   303,   307,   275,   277,   285,   286,   163,   235,   300,
     342,   180,   344,   345,   346,   209,   140,   141,   142,   144,
     334,   187,   147,    18,   338,   331,    24,    18,   261,     7,
     164,   164,   362,   255,    28,   217,   276,     1,   131,   311,
      35,   289,   301,   315,     2,     3,     4,     5,     6,   153,
     169,   216,   169,    36,   226,   227,    70,   164,   164,     7,
     241,  -184,     2,     3,     4,     5,     6,    37,   160,     7,
     244,    68,   194,     7,   161,    79,   198,    67,    85,    82,
     320,   321,   323,   324,   325,    33,   250,   326,   251,   328,
     329,   330,   169,   332,     2,     3,     4,     5,     6,    69,
     260,    80,   262,   264,   265,    34,    70,   343,     7,     7,
      38,    92,   348,     7,   272,   273,   352,    78,   143,    81,
     169,    89,   214,    91,    95,   359,   226,   227,   164,    70,
     134,   283,   136,   135,   137,    33,   138,   145,   284,   191,
      33,     7,   288,   377,   192,    83,   195,   292,   201,   219,
     237,   248,   294,   151,   259,   295,   296,   298,   299,   101,
     102,   103,   104,   105,     7,   302,   304,   305,   266,   308,
     269,   310,   164,   239,   278,   281,   287,   314,   335,   317,
     318,   309,   319,   336,   340,   220,   322,   221,   222,   223,
     224,   225,   327,   347,    18,   228,   229,   349,   333,   350,
     351,   353,   206,   337,   354,   339,   357,   355,   360,    11,
      19,   361,   101,   102,   103,   104,   105,     7,   101,   102,
     103,   104,   105,     7,    11,   356,   106,   363,   366,   358,
     108,   109,   110,   111,   364,   365,   367,    65,   373,   368,
     369,   112,   113,   114,   374,   375,   115,    18,   370,   371,
     372,   381,   376,   378,   379,   385,   382,   387,   388,   389,
     383,   391,   392,   384,   181,   393,   386,   394,   395,   397,
     390,   398,   399,   400,    86,   401,    26,   270,    93,   402,
     130,    27,     0,     0,     0,   403,   132,     0,     0,     0,
       0,     0,    86,    86,    86,    86,     0,     0,    86,   208,
     148,   150,     0,     0,     0,   158,   162,     0,   168,     2,
       3,     4,     5,     6,   153,     0,   158,   258,   158,     0,
       0,    70,     0,   158,     0,   158,     0,     2,     3,     4,
       5,     6,   153,   158,     0,     0,     0,     0,   132,    70,
     132,   132,     0,   189,   190,     0,     0,   193,    86,     0,
       0,     0,    86,   101,   102,   103,   104,   105,     7,     0,
       0,     0,   207,     0,     0,   158,   158,   156,     0,   213,
     215,   108,   109,   157,   111,   158,     0,     0,     0,     0,
     240,     0,   112,   113,   114,   158,     0,   115,     0,     0,
     158,   167,     0,     0,   132,     0,     0,   247,   101,   102,
     103,   104,   105,     7,   101,   102,   103,   104,   105,     7,
       0,   132,   106,   132,   132,   176,   108,   109,   110,   111,
     158,     0,     0,   263,     0,     0,     0,   112,   113,   114,
       0,     0,   115,     0,     0,    96,    97,    98,     0,     0,
       0,    99,   158,     0,     0,   100,   240,     0,   240,   101,
     102,   103,   104,   105,     7,   101,   102,   103,   104,   105,
       7,     0,     0,   279,   132,     0,     0,   291,   293,   106,
       0,     0,   107,   108,   109,   110,   111,     0,     0,   158,
       0,    96,    97,    98,   112,   113,   114,    99,   240,   115,
      33,   100,     0,     0,     0,     0,     0,     0,     0,   316,
       0,   101,   102,   103,   104,   105,     7,     0,     0,     0,
       0,     0,     0,     0,     0,   106,   240,     0,   107,   108,
     109,   110,   111,    96,    97,    98,     0,     0,     0,    99,
     112,   113,   114,   100,   106,   115,    18,     0,   108,   179,
     110,   111,     0,   101,   102,   103,   104,   105,     7,   112,
     113,     0,     0,     0,   115,    18,     0,   106,     0,     0,
     107,   108,   109,   110,   111,     0,     0,     0,     0,     0,
       0,     0,   112,   113,   114,     0,     0,   115,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,     0,     0,     0,     0,     0,    64,     0,
       0,     0,     0,     0,     7,   101,   102,   103,   104,   105,
       7,     0,     0,     0,     0,     0,     0,     0,     0,   106,
       0,     0,     0,   108,   109,   110,   111,   101,   102,   103,
     104,   105,     7,     0,   112,   113,   114,     0,     0,   115,
       0,   211,     0,     0,     0,   108,   109,   110,   111,   101,
     102,   103,   104,   105,     7,     0,   112,   113,   114,     0,
       0,   115,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   220,     0,   221,   222,   223,   224,   225,   226,   227,
     164,   228,   229,     2,     3,     4,     5,     6,    69,     0,
       0,     0,     0,     0,     0,    70
};

static const yytype_int16 yycheck[] =
{
      11,   146,    72,    94,   119,   166,     9,    17,    19,   200,
       5,     5,    99,    96,    19,   129,    20,   131,   132,   171,
      40,     4,    40,   141,   107,    43,   109,   145,    34,    49,
      20,   114,   163,   116,    40,   166,   167,    40,    40,    40,
      43,   124,    43,    69,    44,    43,    49,     0,    49,    40,
      70,     9,    70,    44,    44,   170,    67,    40,    69,    43,
      70,   152,    15,   154,    70,    70,    70,    70,    70,    70,
      70,   185,   233,   156,   157,    70,    70,    88,   196,   149,
     150,   151,    93,   201,   171,   237,    44,   239,   202,   100,
     204,   205,    70,   176,   285,   286,    41,   279,   181,    44,
     231,    44,    49,   234,   235,   250,   251,    43,    43,   270,
     321,   122,   323,   324,   325,   206,    83,    84,    85,    86,
     311,   132,    89,    70,   315,   307,     0,    70,   211,    40,
      66,    66,   343,   203,    28,    44,    44,     4,    49,   284,
       8,   255,   273,   288,    29,    30,    31,    32,    33,    34,
     237,   162,   239,     7,    64,    65,    41,    66,    66,    40,
     171,    28,    29,    30,    31,    32,    33,    40,    49,    40,
     181,    19,   139,    40,    55,    19,   143,     6,    49,    19,
     295,   296,   297,   298,   299,    70,   197,   302,   199,   304,
     305,   306,   279,   308,    29,    30,    31,    32,    33,    34,
     211,    52,   213,   214,   215,    20,    41,   322,    40,    40,
      25,    43,   327,    40,   231,   232,   331,    32,    49,    52,
     307,    43,    49,     4,    41,   340,    64,    65,    66,    41,
      19,   242,    35,     4,    35,    70,     4,    44,   249,    44,
      70,    40,   253,   358,    44,     9,    44,   258,    44,    44,
      52,    44,   263,    44,    34,   266,   267,   268,   269,    35,
      36,    37,    38,    39,    40,   276,   277,   278,    20,   280,
      20,   282,    66,    49,    44,    19,    19,    28,    19,   290,
     291,    21,   293,    19,    18,    57,   297,    59,    60,    61,
      62,    63,   303,    19,    70,    67,    68,    19,   309,    19,
      19,    19,   152,   314,    19,   316,    19,    28,    19,     0,
       1,    19,    35,    36,    37,    38,    39,    40,    35,    36,
      37,    38,    39,    40,    15,    28,    49,    19,    21,   340,
      53,    54,    55,    56,    19,    19,    19,    28,    28,    21,
      21,    64,    65,    66,   355,   356,    69,    70,    21,    19,
      21,   362,    28,    17,    17,   366,    17,   368,   369,   370,
      17,   372,   373,    17,   122,   376,    21,   378,   379,   380,
      21,   382,   383,   384,    65,   386,    15,   230,    69,   390,
      75,    15,    -1,    -1,    -1,   396,    77,    -1,    -1,    -1,
      -1,    -1,    83,    84,    85,    86,    -1,    -1,    89,    19,
      91,    92,    -1,    -1,    -1,    96,    97,    -1,    99,    29,
      30,    31,    32,    33,    34,    -1,   107,    19,   109,    -1,
      -1,    41,    -1,   114,    -1,   116,    -1,    29,    30,    31,
      32,    33,    34,   124,    -1,    -1,    -1,    -1,   129,    41,
     131,   132,    -1,   134,   135,    -1,    -1,   138,   139,    -1,
      -1,    -1,   143,    35,    36,    37,    38,    39,    40,    -1,
      -1,    -1,   153,    -1,    -1,   156,   157,    49,    -1,   160,
     161,    53,    54,    55,    56,   166,    -1,    -1,    -1,    -1,
     171,    -1,    64,    65,    66,   176,    -1,    69,    -1,    -1,
     181,    22,    -1,    -1,   185,    -1,    -1,   188,    35,    36,
      37,    38,    39,    40,    35,    36,    37,    38,    39,    40,
      -1,   202,    49,   204,   205,    52,    53,    54,    55,    56,
     211,    -1,    -1,   214,    -1,    -1,    -1,    64,    65,    66,
      -1,    -1,    69,    -1,    -1,    15,    16,    17,    -1,    -1,
      -1,    21,   233,    -1,    -1,    25,   237,    -1,   239,    35,
      36,    37,    38,    39,    40,    35,    36,    37,    38,    39,
      40,    -1,    -1,    49,   255,    -1,    -1,   258,   259,    49,
      -1,    -1,    52,    53,    54,    55,    56,    -1,    -1,   270,
      -1,    15,    16,    17,    64,    65,    66,    21,   279,    69,
      70,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   290,
      -1,    35,    36,    37,    38,    39,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    49,   307,    -1,    52,    53,
      54,    55,    56,    15,    16,    17,    -1,    -1,    -1,    21,
      64,    65,    66,    25,    49,    69,    70,    -1,    53,    54,
      55,    56,    -1,    35,    36,    37,    38,    39,    40,    64,
      65,    -1,    -1,    -1,    69,    70,    -1,    49,    -1,    -1,
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
      -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    57,    -1,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    29,    30,    31,    32,    33,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    41
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,    29,    30,    31,    32,    33,    40,    81,    82,
      83,    85,    90,    91,    92,   119,   120,   122,    70,    85,
      96,    43,    43,    69,     0,    96,    83,   120,    28,     5,
      84,    88,    96,    70,    84,     8,     7,    40,    84,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    34,    85,   124,     6,    19,    34,
      41,    86,    92,    93,   109,   110,   111,   123,    84,    19,
      52,    52,    19,     9,    43,    49,    85,    95,   121,    43,
      96,     4,    43,    85,    96,    41,    15,    16,    17,    21,
      25,    35,    36,    37,    38,    39,    49,    52,    53,    54,
      55,    56,    64,    65,    66,    69,    85,    87,    97,    98,
      99,   100,   101,   102,   103,   112,   114,   115,   118,   123,
     109,    49,    85,    94,    19,     4,    35,    35,     4,    43,
      95,    95,    95,    49,    95,    44,    96,    95,    85,    44,
      85,    44,    96,    34,    89,    93,    49,    55,    85,    99,
      49,    55,    85,    43,    66,   104,   108,    22,    85,   102,
     116,   117,    96,    99,    99,    99,    52,    99,    97,    54,
      96,   103,    99,    94,    94,    49,    94,    96,     4,    85,
      85,    44,    44,    85,    95,    44,    44,   121,    95,   121,
      86,    44,   123,    44,   123,   123,    89,    85,    19,    93,
      99,    49,    99,    85,    49,    85,    96,    44,   104,    44,
      57,    59,    60,    61,    62,    63,    64,    65,    67,    68,
     101,   104,   105,   106,   107,    43,   104,    52,    97,    49,
      85,    96,   117,    99,    96,    99,    94,    85,    44,   121,
      96,    96,    87,   121,    94,   123,    94,    94,    19,    34,
      96,    99,    96,    85,    96,    96,    20,    20,    44,    20,
     106,   104,   107,   107,   101,   104,    44,   104,    44,    49,
     117,    19,   117,    96,    96,    86,    86,    19,    96,    94,
      34,    85,    96,    85,    96,    96,    96,    20,    96,    96,
     101,   104,    96,    44,    96,    96,   116,    49,    96,    21,
      96,    86,    87,    87,    28,    86,    85,    96,    96,    96,
      97,    97,    96,    97,    97,    97,    97,    96,    97,    97,
      97,   116,    97,    96,    87,    19,    19,    96,    87,    96,
      18,   113,   113,    97,   113,   113,   113,    19,    97,    19,
      19,    19,    97,    19,    19,    28,    28,    19,    96,    97,
      19,    19,   113,    19,    19,    19,    21,    19,    21,    21,
      21,    19,    21,    28,    96,    96,    28,    97,    17,    17,
      19,    96,    17,    17,    17,    96,    21,    96,    96,    96,
      21,    96,    96,    96,    96,    96,    17,    96,    96,    96,
      96,    96,    96,    96
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    80,    81,    81,    82,    82,    82,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      84,    85,    85,    86,    86,    87,    87,    88,    88,    89,
      89,    90,    90,    91,    91,    92,    92,    92,    92,    92,
      93,    93,    93,    93,    93,    94,    94,    94,    94,    94,
      94,    95,    95,    95,    95,    95,    95,    95,    96,    96,
      97,    97,    97,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    99,    99,    99,    99,    99,    99,    99,   100,
     100,   100,   101,   101,   102,   102,   102,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   104,   104,   104,   104,
     104,   104,   105,   105,   105,   105,   105,   106,   106,   106,
     106,   106,   106,   106,   106,   107,   107,   108,   108,   109,
     109,   110,   110,   110,   110,   110,   110,   110,   111,   111,
     111,   111,   111,   111,   112,   112,   112,   112,   112,   112,
     112,   112,   113,   113,   113,   114,   114,   115,   115,   115,
     115,   116,   116,   116,   117,   117,   118,   118,   118,   118,
     119,   119,   120,   120,   120,   120,   120,   121,   121,   121,
     121,   121,   122,   122,   122,   123,   123,   123,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     1,     7,     0,     6,
       0,     6,     0,     6,     0,     6,     0,     6,     0,     5,
       3,     1,     3,     1,     0,     1,     0,     3,     0,     2,
       1,     1,     6,     1,     6,     1,     1,     1,     1,     1,
       3,     2,     2,     1,     1,     3,     2,     2,     2,     1,
       2,     3,     2,     2,     2,     1,     1,     0,     2,     1,
       2,     1,     0,     3,     2,     2,     2,     1,     1,     4,
       3,     3,     2,     4,     2,     5,     4,     4,     3,     4,
       1,     1,     3,     3,     2,     1,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     3,     2,     3,
       3,     2,     3,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     2,
       1,     8,     7,     8,     6,     7,     7,     1,     6,     5,
       5,     5,     5,     0,    11,    10,    10,    10,    10,     9,
      10,    10,     3,     2,     0,     1,     1,    10,     6,     9,
       9,     2,     4,     3,     1,     1,    10,     9,     9,     9,
       2,     1,    13,    13,    10,    12,    12,     4,     3,     1,
       3,     0,     1,     1,     0,     2,     1,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1
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
#line 107 "calc.y"
       {
         printf("\nResult=%s\n", "accept"); 
         return 0; 
      }
#line 1758 "calc.tab.c"
    break;

  case 3:
#line 110 "calc.y"
         {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," main functions is missing!\n");exit(1);}
#line 1764 "calc.tab.c"
    break;

  case 6:
#line 114 "calc.y"
          {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," main function is missing!\n");exit(1);}
#line 1770 "calc.tab.c"
    break;

  case 9:
#line 116 "calc.y"
                                                                {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," program keyword is missing!\n");exit(1);}
#line 1776 "calc.tab.c"
    break;

  case 11:
#line 117 "calc.y"
                                                                {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," program name is missing!\n");exit(1);}
#line 1782 "calc.tab.c"
    break;

  case 13:
#line 118 "calc.y"
                                                                   {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," undefined symbol after identifier in program!\n");exit(1);}
#line 1788 "calc.tab.c"
    break;

  case 15:
#line 119 "calc.y"
                                                                {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," undefined end in program!\n");exit(1);}
#line 1794 "calc.tab.c"
    break;

  case 17:
#line 120 "calc.y"
                                                                {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," undefined end in program!\n");exit(1);}
#line 1800 "calc.tab.c"
    break;

  case 19:
#line 121 "calc.y"
                                                    {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," undefined end in program!\n");exit(1);}
#line 1806 "calc.tab.c"
    break;

  case 41:
#line 156 "calc.y"
            {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," declaration syntax error!\n");exit(1);}
#line 1812 "calc.tab.c"
    break;

  case 42:
#line 157 "calc.y"
                 {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," declaration syntax error!\n");exit(1);}
#line 1818 "calc.tab.c"
    break;

  case 43:
#line 158 "calc.y"
       {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," declaration syntax error!\n");exit(1);}
#line 1824 "calc.tab.c"
    break;

  case 46:
#line 162 "calc.y"
               {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in declaration of variables\n");exit(1);}
#line 1830 "calc.tab.c"
    break;

  case 47:
#line 163 "calc.y"
                 {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in declaration of variables\n");exit(1);}
#line 1836 "calc.tab.c"
    break;

  case 48:
#line 164 "calc.y"
                     {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in declaration of variables\n");exit(1);}
#line 1842 "calc.tab.c"
    break;

  case 49:
#line 165 "calc.y"
          {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in declaration of variables\n");exit(1);}
#line 1848 "calc.tab.c"
    break;

  case 52:
#line 169 "calc.y"
                            {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in arguments\n");exit(1);}
#line 1854 "calc.tab.c"
    break;

  case 53:
#line 170 "calc.y"
                     {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in arguments\n");exit(1);}
#line 1860 "calc.tab.c"
    break;

  case 54:
#line 171 "calc.y"
                              {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in arguments\n");exit(1);}
#line 1866 "calc.tab.c"
    break;

  case 55:
#line 172 "calc.y"
          {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in arguments\n");exit(1);}
#line 1872 "calc.tab.c"
    break;

  case 64:
#line 187 "calc.y"
                    {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in simple statement\n");exit(1);}
#line 1878 "calc.tab.c"
    break;

  case 65:
#line 188 "calc.y"
                       {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in simple statement\n");exit(1);}
#line 1884 "calc.tab.c"
    break;

  case 66:
#line 189 "calc.y"
                     {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in simple statement\n");exit(1);}
#line 1890 "calc.tab.c"
    break;

  case 67:
#line 190 "calc.y"
           {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in simple statement\n");exit(1);}
#line 1896 "calc.tab.c"
    break;

  case 68:
#line 191 "calc.y"
          {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in simple statement\n");exit(1);}
#line 1902 "calc.tab.c"
    break;

  case 70:
#line 193 "calc.y"
                              {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in print statement\n");exit(1);}
#line 1908 "calc.tab.c"
    break;

  case 71:
#line 194 "calc.y"
                            {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in print statement\n");exit(1);}
#line 1914 "calc.tab.c"
    break;

  case 72:
#line 195 "calc.y"
                     {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in print statement\n");exit(1);}
#line 1920 "calc.tab.c"
    break;

  case 73:
#line 196 "calc.y"
                                 {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in print statement\n");exit(1);}
#line 1926 "calc.tab.c"
    break;

  case 76:
#line 199 "calc.y"
                                     {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in read statement!\n");exit(1);}
#line 1932 "calc.tab.c"
    break;

  case 77:
#line 200 "calc.y"
                                   {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in read statement!\n");exit(1);}
#line 1938 "calc.tab.c"
    break;

  case 78:
#line 201 "calc.y"
                            {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in read statement!\n");exit(1);}
#line 1944 "calc.tab.c"
    break;

  case 79:
#line 202 "calc.y"
                                {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in read statement!\n");exit(1);}
#line 1950 "calc.tab.c"
    break;

  case 83:
#line 206 "calc.y"
                           {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in expression!\n");exit(1);}
#line 1956 "calc.tab.c"
    break;

  case 84:
#line 207 "calc.y"
                      {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in expression!\n");exit(1);}
#line 1962 "calc.tab.c"
    break;

  case 85:
#line 208 "calc.y"
           {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in expression!\n");exit(1);}
#line 1968 "calc.tab.c"
    break;

  case 107:
#line 235 "calc.y"
                                   {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," two booleans are required for relationaloperator!\n");exit(1);}
#line 1974 "calc.tab.c"
    break;

  case 108:
#line 236 "calc.y"
                        {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," two booleans are required for relationaloperator!\n");exit(1);}
#line 1980 "calc.tab.c"
    break;

  case 109:
#line 237 "calc.y"
                                   {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," two booleans are required for relationaloperator!\n");exit(1);}
#line 1986 "calc.tab.c"
    break;

  case 110:
#line 238 "calc.y"
                            {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," a relationaloperator is required for two booleans!\n");exit(1);}
#line 1992 "calc.tab.c"
    break;

  case 113:
#line 241 "calc.y"
                             {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," two operands are required for comparisionOperator!\n");exit(1);}
#line 1998 "calc.tab.c"
    break;

  case 114:
#line 242 "calc.y"
                             {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," two operands are required for comparisionOperator!\n");exit(1);}
#line 2004 "calc.tab.c"
    break;

  case 115:
#line 243 "calc.y"
                     {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," two operands are required for comparisionOperator!\n");exit(1);}
#line 2010 "calc.tab.c"
    break;

  case 132:
#line 264 "calc.y"
                                                                {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," identifier name required in the type declaration!\n");exit(1);}
#line 2016 "calc.tab.c"
    break;

  case 133:
#line 265 "calc.y"
                                                                          {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," undefined symbol after identifier in the type declaration!\n");exit(1);}
#line 2022 "calc.tab.c"
    break;

  case 134:
#line 266 "calc.y"
                                                       {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," undefined end in the type declaration!\n");exit(1);}
#line 2028 "calc.tab.c"
    break;

  case 135:
#line 267 "calc.y"
                                                                {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," undefined end in the type declaration!\n");exit(1);}
#line 2034 "calc.tab.c"
    break;

  case 136:
#line 268 "calc.y"
                                                                   {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s","undefined end in the type declaration!\n");exit(1);}
#line 2040 "calc.tab.c"
    break;

  case 139:
#line 276 "calc.y"
                                      {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," starting paranthesis required in the type datatype!\n");exit(1);}
#line 2046 "calc.tab.c"
    break;

  case 140:
#line 277 "calc.y"
                                      {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," end paranthesis required in the type datatype!\n");exit(1);}
#line 2052 "calc.tab.c"
    break;

  case 141:
#line 278 "calc.y"
                                 {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," a derived variable required in the type datatype!\n");exit(1);}
#line 2058 "calc.tab.c"
    break;

  case 142:
#line 279 "calc.y"
                                        {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," atleast 1 IDENTIFIER in the type datatype!\n");exit(1);}
#line 2064 "calc.tab.c"
    break;

  case 145:
#line 284 "calc.y"
                                                                                       {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," starting paranthesis required in the if statement!\n");exit(1);}
#line 2070 "calc.tab.c"
    break;

  case 146:
#line 285 "calc.y"
                                                                                       {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," end paranthesis required in the if statement!\n");exit(1);}
#line 2076 "calc.tab.c"
    break;

  case 147:
#line 286 "calc.y"
                                                                                 {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," a boolean value required in the if statement!\n");exit(1);}
#line 2082 "calc.tab.c"
    break;

  case 148:
#line 287 "calc.y"
                                                                                      {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," \"then\" is missing in the if statement!\n");exit(1);}
#line 2088 "calc.tab.c"
    break;

  case 149:
#line 288 "calc.y"
                                                                                  {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," ending of if is missing in the if statement!\n");exit(1);}
#line 2094 "calc.tab.c"
    break;

  case 150:
#line 289 "calc.y"
                                                                                        {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," undefined end in the if statement!\n");exit(1);}
#line 2100 "calc.tab.c"
    break;

  case 151:
#line 290 "calc.y"
                                                                                      {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," undefined symbol after then the if statement!\n");exit(1);}
#line 2106 "calc.tab.c"
    break;

  case 153:
#line 292 "calc.y"
                    {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," undefined symbol after else!\n");exit(1);}
#line 2112 "calc.tab.c"
    break;

  case 158:
#line 302 "calc.y"
                                                       {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," initialisation required in do loop!\n");exit(1);}
#line 2118 "calc.tab.c"
    break;

  case 159:
#line 303 "calc.y"
                                                                                   {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," initialisation syntax error in do loop!\n");exit(1);}
#line 2124 "calc.tab.c"
    break;

  case 160:
#line 304 "calc.y"
                                                                                   {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," an upperbound required in do loop!\n");exit(1);}
#line 2130 "calc.tab.c"
    break;

  case 163:
#line 307 "calc.y"
                                   {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in do loop!\n");exit(1);}
#line 2136 "calc.tab.c"
    break;

  case 167:
#line 312 "calc.y"
                                                                           {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," end paranthesis required in the while!\n");exit(1);}
#line 2142 "calc.tab.c"
    break;

  case 168:
#line 313 "calc.y"
                                                                           {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," starting paranthesis required in the while!\n");exit(1);}
#line 2148 "calc.tab.c"
    break;

  case 169:
#line 314 "calc.y"
                                                                     {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," a boolean value must have in the while!\n");exit(1);}
#line 2154 "calc.tab.c"
    break;

  case 173:
#line 322 "calc.y"
                                                                                                                        {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," function name cannot be a keyword!\n");exit(1);}
#line 2160 "calc.tab.c"
    break;

  case 174:
#line 323 "calc.y"
                                                                                            {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," paranthesis required in function!\n");exit(1);}
#line 2166 "calc.tab.c"
    break;

  case 175:
#line 324 "calc.y"
                                                                                                                    {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," end bracket missing in function!\n");exit(1);}
#line 2172 "calc.tab.c"
    break;

  case 176:
#line 325 "calc.y"
                                                                                                                     {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," starting bracket missing in function!\n");exit(1);}
#line 2178 "calc.tab.c"
    break;

  case 178:
#line 328 "calc.y"
                                   {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," end bracket missing in result!\n");exit(1);}
#line 2184 "calc.tab.c"
    break;

  case 179:
#line 329 "calc.y"
           {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," paranthesis required in result!\n");exit(1);}
#line 2190 "calc.tab.c"
    break;

  case 180:
#line 330 "calc.y"
                                   {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," starting bracket missing in result!\n");exit(1);}
#line 2196 "calc.tab.c"
    break;

  case 183:
#line 333 "calc.y"
           {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," :return type must be datatype!\n");exit(1);}
#line 2202 "calc.tab.c"
    break;

  case 186:
#line 336 "calc.y"
         {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," colon symbol missing!\n");exit(1);}
#line 2208 "calc.tab.c"
    break;

  case 187:
#line 337 "calc.y"
 {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," colon symbol missing!\n");exit(1);}
#line 2214 "calc.tab.c"
    break;


#line 2218 "calc.tab.c"

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
#line 371 "calc.y"
 
  
  
void yyerror() 
{ 
   printf("\nexpression is Invalid\n\n"); 
   flag=1; 
} 


char* filename;
int main (int argc, char* argv[])
{
  
   filename = argv[1];
    yyin = fopen(argv[1], "r");
  int tok = yyparse();
  
  if( tok == 0) 
     printf("Accepted!\n");
  else
     printf("Rejected!\n");
  return 0;
} 
