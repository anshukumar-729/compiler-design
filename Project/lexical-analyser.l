/*Definition Section*/
%{
    #include<stdio.h>
    #include<string.h>
    #include "scanner.h"
    
%}
/*Rule Section*/

/* defining some regular expression */

digit [0-9]
alpha [a-zA-Z]
identifier [a-zA-Z_][0-9a-zA-Z_]*
variable [$@%]+[0-9a-zA-Z_]+
positive_int [0]|[1-9][0-9]*
number {digit}{digit}*
real {positive_int}"."{number}+[Ee]?[+-]?[1-9]*?





%%

[pP][Rr][oO][Gg][rR][aA][Mm] return kw_PROGRAM;
[Ii][Mm][Pp][Ll][Ii][Cc][Ii][Tt] return kw_IMPLICIT;
[Nn][Oo][Nn][Ee] return kw_NONE;
[Ii][Ff] return kw_IF;
[Ee][Ll][Ss][Ee] return kw_ELSE;
[Ee][Nn][Dd] return kw_END;
[Tt][Hh][Ee][Nn] return kw_THEN;
[Tt][Yy][Pp][Ee] return kw_TYPE;
[Dd][Oo] return kw_DO;
[Ll][Ee][Nn] return kw_LEN;
[Kk][Ii][Nn][Dd] return kw_KIND;
[Cc][Oo][Nn][Tt][Ii][Nn][Uu][Ee] return kw_CONTINUE;
[Ww][Hh][Ii][Ll][Ee] return kw_GOTO;
[Rr][Ee][Tt][Uu][Rr][Nn] return kw_RETURN;
[Ss][Ee][Ll][Ee][Cc][Tt] return kw_SELECT;
[Cc][Aa][Ss][Ee] return kw_CASE;
[Ff][Uu][Nn][Cc][Tt][Ii][Oo][Nn] return kw_FUNCTION;
[Rr][Ee][Ss][Uu][Ll][Tt] return kw_RESULT;
[Ii][Nn][Tt][Ee][Nn][Tt] return kw_INTENT;
[Ii][Nn] return kw_IN;
[Oo][Uu][Tt] return kw_OUT;
[Pp][Rr][Ii][Nn][Tt] return kw_PRINT;

[Ii][Nn][Tt][Ee][Gg][Ee][Rr] return dt_INT;
[Rr][Ee][Aa][Ll] return dt_REAL;
[Cc][Oo][Mm][Pp][Ll][Ee][Xx] return dt_COMPLEX;
[Ll][Oo][Gg][Ii][Cc][Aa][Ll] return dt_LOGICALS;
[Cc][Hh][Aa][Rr][Aa][Cc][Tt][Ee][Rr] return dt_CHARACTER;

{digit}*[,]({digit}*[i]|[i]{digit}*) return ct_COMPLEX;
{real} return ct_REAL;
{digit}* return ct_INT;
['].*[']|["].*["] return ct_CHARACTER;
[Tt][Rr][Uu][Ee]|[Ff][Aa][Ll][Ss][Ee] return ct_LOGICALS;
{identifier} return IDENTIFIER;

[:] return sp_COLON;
[,] return sp_COMMA;
[.] return sp_STOP;
[;] return sp_SEMICOLON;
[(] return sp_LB;
[)] return sp_RB;
[{] return sp_CURLYLB;
[}] return sp_CURLYRB;
[[] return sp_SQUARELB;
[]] return sp_SQUARERB;

[=][=] return op_EQUALITY;
[=] return op_EQUAL;
[+] return op_ADD;
[-] return op_SUB;
[*] return op_MUL;
[/] return op_DIV;
[%] return op_MODULUS;
([<>][=])|[<>] 	return op_RELATIONAL;

[\n] return nl;
[!].* return COMMENT;
[ \t]+ ;
. return inval ;
												
%%

/*call the yywrap function*/
int yywrap()								
{
	return 1;
}
/*Auxiliary function*/
int main(void)
{
    int token;
    extern FILE *yyin, *yyout;
    int yylineno = 1 ;
    yyin = fopen("input.txt", "r");  
    yyout = fopen("output.txt", "w");    
    char buffer[40] = {0}; 
    char buffer3[16] = {0}; 
    char buffer2;
    token = yylex();
    while(token){
        if (token!=30){
            // all tokens are here
            if(token==1)
            {
                    sprintf(buffer, "%s", "kw_PROGRAM");
            }
            else if(token==2)
                    {
                    sprintf(buffer, "%s", "kw_IMPLICIT");
            }
            else if(token==3)
                    {
                    sprintf(buffer, "%s", "kw_NONE");
            }
            else if(token==4)
                    {
                    sprintf(buffer, "%s", "dt_REAL");
            }
            else if(token==5)
                    {
                    sprintf(buffer, "%s", "IDENTIFIER");
            }
            else if(token==6)
                    {
                    sprintf(buffer, "%s", "sp_COLON");
            }
            else if(token==7)
                    {
                    sprintf(buffer, "%s", "sp_SEMICOLON");
            }
            else if(token==8)
                    {
                    sprintf(buffer, "%s", "op_EQUAL");
            }
            else if(token==9)
                    {
                    sprintf(buffer, "%s", "op_ADD");
            }
            else if(token==10)
                    {
                    sprintf(buffer, "%s", "op_SUB");
            }
            else if(token==11)
                    {
                    sprintf(buffer, "%s", "op_MUL");
            }
            else if(token==12)
                    {
                    sprintf(buffer, "%s", "op_DIV");
            }
            else if(token==13)
                    {
                    sprintf(buffer, "%s", "op_EQUALITY");
            }
            else if(token==14)
                    {
                    sprintf(buffer, "%s", "op_RELATIONAL");
            }
            else if(token==15)
                    {
                    sprintf(buffer, "%s", "kw_IF");
            }
            else if(token==16)
                    {
                    sprintf(buffer, "%s", "kw_ELSE");
            }
            else if(token==17)
                    {
                    sprintf(buffer, "%s", "kw_END");
            }
            else if(token==18)
                    {
                    sprintf(buffer, "%s", "kw_THEN");
            }
            else if(token==19)
                    {
                    sprintf(buffer, "%s", "kw_TYPE");
            }
            else if(token==20)
                    {
                    sprintf(buffer, "%s", "dt_INT");
            }
            else if(token==21)
                    {
                    sprintf(buffer, "%s", "dt_COMPLEX");
            }
            else if(token==22)
                    {
                    sprintf(buffer, "%s", "dt_LOGICALS");
            }
            else if(token==23)
                    {
                    sprintf(buffer, "%s", "dt_CHARACTER");
            }
            else if(token==24)
                    {
                    sprintf(buffer, "%s", "sp_LB");
            }
            else if(token==25)
                    {
                    sprintf(buffer, "%s", "sp_RB");
            }
            else if(token==26)
                    {
                    sprintf(buffer, "%s", "sp_CURLYLB");
            }
            else if(token==27)
                    {
                    sprintf(buffer, "%s", "sp_CURLYRB");
            }
            else if(token==28)
                    {
                    sprintf(buffer, "%s", "sp_SQUARELB");
            }
            else if(token==29)
                    {
                    sprintf(buffer, "%s", "sp_SQUARERB");
            }
            else if(token==31)
                    {
                    sprintf(buffer, "%s", "kw_DO");
            }
            else if(token==32)
                    {
                    sprintf(buffer, "%s", "kw_LEN");
            }
            else if(token==33)
                    {
                    sprintf(buffer, "%s", "kw_KIND");
            }
            else if(token==34)
                    {
                    sprintf(buffer, "%s", "kw_CONTINUE");
            }
            else if(token==35)
                    {
                    sprintf(buffer, "%s", "kw_GOTO");
            }
            else if(token==36)
                    {
                    sprintf(buffer, "%s", "kw_RETURN");
            }
            else if(token==37)
                    {
                    sprintf(buffer, "%s", "kw_SELECT");
            }
            else if(token==38)
                    {
                    sprintf(buffer, "%s", "kw_CASE");
            }
            else if(token==39)
                    {
                    sprintf(buffer, "%s", "kw_FUNCTION");
            }
            else if(token==40)
                    {
                    sprintf(buffer, "%s", "kw_RESULT");
            }
            else if(token==41)
                    {
                    sprintf(buffer, "%s", "kw_INTENT");
            }
            else if(token==42)
                    {
                    sprintf(buffer, "%s", "kw_IN");
            }
            else if(token==43)
                    {
                    sprintf(buffer, "%s", "kw_OUT");
            }
            else if(token==44)
                    {
                    sprintf(buffer, "%s", "ct_INT");
            }
            else if(token==45)
                    {
                    sprintf(buffer, "%s", "ct_REAL");
            }
            else if(token==46)
                    {
                    sprintf(buffer, "%s", "ct_CHARACTER");
            }
            else if(token==47)
                    {
                    sprintf(buffer, "%s", "ct_COMPLEX");
            }
            else if(token==48)
                    {
                    sprintf(buffer, "%s", "ct_LOGICALS");
            }
            else if(token==49)
                    {
                    sprintf(buffer, "%s", "sp_COMMA");
            }
            else if(token==50)
                    {
                    sprintf(buffer, "%s", "sp_STOP");
            }
            else if(token==51)
                    {
                    sprintf(buffer, "%s", "kw_PRINT");
            }
            else if(token==52)
                    {
                    sprintf(buffer, "%s", "op_MODULUS");
            }       
            else if(token==53)
                    {
                    sprintf(buffer, "%s", "inval");
            }
            else if(token==54)
            {
                    sprintf(buffer, "%s", "COMMENT");
            }

            else{
                sprintf(buffer, "%d", token);
            }


            // fprintf (yyout,"%d",token);
            fputs("=> ",yyout);
            for(int i=0;i<strlen(yytext);i++){
                int temp=yytext[i];
                if (temp>64 && temp<91 && token!=46){
                    temp+=32;
                    buffer2=temp;
                    sprintf(buffer3,"%c",buffer2);
                    fputs(buffer3,yyout);
                }
                else{
                    buffer2=temp;
                    sprintf(buffer3,"%c",buffer2);
                    fputs(buffer3,yyout);
                }
             }
                fputs(" => ",yyout);
                fputs(buffer,yyout);
                fputs(" => line no ",yyout);
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
