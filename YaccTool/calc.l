%{ 
   /* Definition section */
  #include<stdio.h> 
  #include "calc.tab.h" 
//   extern int yylval; 
%} 
  
/* Rule Section */
identifier [a-zA-Z_][0-9a-zA-Z_]*
%% 

[0-9]+ { 
          yylval=atoi(yytext); 

         //  printf("%d\n",NUMBER);
         //  printf("%s\n",yytext);
         //  printf("%d\n",yylval);
          return NUMBER; 
       } 
[pP][Rr][oO][Gg][rR][aA][Mm] return kw_PROGRAM;
{identifier} return IDENTIFIER;


[ \t\n] ; 
  
[\n] return 0; 
  
. return yytext[0]; 
  
%% 
  
int yywrap() 
{ 
   
 return 1; 
} 