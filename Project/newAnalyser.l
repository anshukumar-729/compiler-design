/*Definition Section*/
%{
	#include<stdio.h>
    #include "scanner.h"
%}
/*Rule Section*/

%%


"integer"|"real"|"complex"|"logical"|"character" return dt;
"program"|"implicit"|"none"|"print"|"end"|"kind"|"type" return kw;
"if" return iff;


[0-9]* return nu;
"{"|"}"|";"|","|"("|")"  return spt;	
"+"|"-"|"/"|"="|"*"|"%"  return opt;	
[a-zA-Z][0-9]+|[a-zA-Z]* return idf;   




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
        sprintf(buffer, "%d", token);
        // fprintf (yyout,"%d",token);
        fprintf(yyout,"%s",yytext);
        fputs("\tThe token is \t",yyout);
        fputs(buffer,yyout);
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
