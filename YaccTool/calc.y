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
