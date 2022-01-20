/*Definition Section*/
%{
	#include<stdio.h>
    #include "scanner.h"
    
%}
/*Rule Section*/

digit [0-9]
alpha [a-zA-Z]
identifier		[a-zA-Z][0-9a-zA-Z_]*
variable            [$@%]+[0-9a-zA-Z_]+
positive_int 	[0]|[1-9][0-9]*
number  		{digit}{digit}*
real 			{positive_int}"."{number}+[Ee]?[+-]?[1-9]*?
common_chars			[^'"\\]
escape_chars			"\\n"|"\\t"|"\\r"|"\\\'"|"\\\""|"\\\\"
assignment_operator (([<>][<>]|[*\/%+\-&^|])[=]|[=])





%%


   

program return kw_PROGRAM;
implicit return kw_IMPLICIT;
none return kw_NONE;
if return kw_IF;
else return kw_ELSE;
end return kw_END;
then return kw_THEN;
type return kw_TYPE;


integer return dt_INT;
real return dt_REAL;
complex return dt_COMPLEX;
logical return dt_LOGICALS;
character return dt_CHARACTER;





[:] return sp_COLON;
[;] return sp_SEMICOLON;
[(] return sp_LB;
[)] return sp_RB;
[{] return sp_CURLYLB;
[}] return sp_CURLYRB;
[[] rturn sp_SQUARELB;
[]] return sp_SQUARERB;


[=][=] return op_EQUALITY;
[=] return op_EQUAL;
[+] return op_ADD;
[-] return op_SUB;
[*] return op_MUL;
[/] return op_DIV;
([<>][=])|[<>] 	 return op_RELATIONAL;



{identifier} return IDENTIFIER;
[\n] return nl;



[ \t]+|[!].* ;
.      return inval ;
												
%%

/*call the yywrap function*/
int yywrap()								
{
	return 1;
}
/*Auxiliary function*/
int main(void)
{


    extern FILE *yyin, *yyout;

    int yylineno = 1 ;
    yyin = fopen("input.txt", "r");
  
    yyout = fopen("output.txt", "w");
    int token;
    char buffer[16] = {0}; 
    token = yylex();
    while(token){
        if (token!=19){
        // sprintf(buffer, "%d", token);
        // fprintf (yyout,"%d",token);
        fprintf(yyout,"%s",yytext);
        fputs("\tThe token is \t",yyout);
        if (token==1){
            fputs ("kw_PROGRAM",yyout);
        }
        // fputs(buffer,yyout);
        fputs("\ton line No - ",yyout);
        sprintf(buffer, "%d", yylineno);
        fputs(buffer,yyout);
        fputs("\n",yyout);
        }
        else{
        yylineno++;
        }
       token = yylex();
    }
	
	return 0;
}
