%{ 
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

%}

%start ROOT
%token NUMBER 
%token kw_PROGRAM
%token IDENTIFIER
%token sp_COMMA
%token kw_END
%token kw_IMPILICIT
%token dt_INT

%token kw_IMPLICIT 
%token kw_NONE 
%token kw_LEN 
%token kw_KIND 
%token kw_RESULT 
%token kw_INTENT 
%token kw_IN 
%token kw_OUT 
%token kw_DIMENSION 
%token kw_POINTER 
%token kw_PRINT 
%token kw_IF 
%token kw_ELSE 
%token kw_END 
%token kw_THEN 
%token kw_DO 
%token kw_CONTINUE 
%token kw_GOTO 
%token kw_RETURN 
%token kw_SELECT 
%token kw_CASE 
%token kw_FUNCTION 
%token dt_INT 
%token dt_COMPLEX 
%token dt_LOGICALS 
%token dt_CHARACTER 
%token dt_REAL 
%token kw_TYPE 
 
%token sp_COLON 
%token sp_SEMICOLON
%token sp_LB 
%token sp_RB 
%token sp_CURLYLB 
%token sp_CURLYRB 
%token sp_SQUARELB 
%token sp_SQUARERB 
%token sp_COMMA 
%token sp_STOP 
%token sp_AND 

%token op_EQUAL 
%token op_ADD 
%token op_SUB 
%token op_MUL 
%token op_DIV 
%token op_EQUALITY 
%token op_RELATIONAL 
%token op_NOTEQUALITY
%token op_GREATER 
%token op_LESSER
%token op_GREATEREQUAL 
%token op_LESSEREQUAL 
%token op_AND 
%token op_OR 
%token op_NOT 
%token op_EQV 
%token op_NEQV 
%token op_MODULUS 
%token ct_INT 
%token ct_REAL 
%token ct_CHARACTER 
%token ct_COMPLEX 
%token ct_LOGICALS 
%token nl 
%token COMMENT 
%token inval 


%left '*' '/' '%' 

%left '+' '-'


%left '(' ')'

 
/* Rule Section */
%% 
ROOT: P{
         printf("\nResult=%s\n", "accept"); 
         return 0; 
      }
P:kw_PROGRAM IDENTIFIER STATEMENTS kw_END kw_PROGRAM IDENTIFIER {printf("%s\n", "P:kw_PROGRAM IDENTIFIER C kw_PROGRAM --hit");}

STATEMENTS: STATEMENTS2

STATEMENTS2: dt_INT IDENTIFIERS |dt_INT IDENTIFIERS 

IDENTIFIERS: IDENTIFIER | IDENTIFIERS sp_COMMA



  
// A: E{ 
  
//          printf("\nResult=%d\n", $$); 
  
//          return 0; 
//           } 
//  E:E'+'E {$$=$1+$3;} 
  
//  |E'-'E {$$=$1-$3;} 
  
//  |E'*'E {$$=$1*$3;} 
  
//  |E'/'E {$$=$1/$3;} 
  
//  |E'%'E {$$=$1%$3;} 
  
//  |'('E')' {$$=$2;} 
  
//  | NUMBER {$$=$1;}
//  | kw_PROGRAM {$$=3;}
  
%% 
  
  
void yyerror() 
{ 
   printf("\nEntered arithmetic expression is Invalid\n\n"); 
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
