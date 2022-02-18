/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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
