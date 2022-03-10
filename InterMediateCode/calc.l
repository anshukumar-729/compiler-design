%{ 
   /* Definition section */
  #include<stdio.h> 
  #include "calc.tab.h" 

%} 
  
/* Rule Section */

digit [0-9]
alpha [a-zA-Z]
identifier [a-zA-Z_][0-9a-zA-Z_]*
positive_int [0]|[1-9][0-9]*
number {digit}{digit}*
real {positive_int}"."{number}+[Ee]?[+-]?[1-9]*?
literalNumber {real}|{number}


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
[Ww][Hh][Ii][Ll][Ee] return kw_WHILE;
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
[Rr][Ee][Aa][Dd] return kw_READ;
[Dd][Ii][Mm][Ee][Nn][Ss][Ii][Oo][Nn] return kw_DIMENSION;
[Pp][Oo][Ii][Nn][Tt][Ee][Rr] return kw_POINTER;

[Ii][Nn][Tt][Ee][Gg][Ee][Rr] {return dt_INT;}
[Rr][Ee][Aa][Ll] return dt_REAL;
[Cc][Oo][Mm][Pp][Ll][Ee][Xx] return dt_COMPLEX;
[Ll][Oo][Gg][Ii][Cc][Aa][Ll] return dt_LOGICALS;
[Cc][Hh][Aa][Rr][Aa][Cc][Tt][Ee][Rr] return dt_CHARACTER;

(({literalNumber}*|[-]{literalNumber}*)[+](([-]{literalNumber}*|{literalNumber}*)[i]|[i]([-]{literalNumber}*|{literalNumber}*)))|[(]{literalNumber}+[,]{literalNumber}+[)] return ct_COMPLEX;
{real}|[-]{real} return ct_REAL;
{digit}*|[-]{digit} return ct_INT;
['].*[']|["].*["] return ct_CHARACTER;
[.]([Tt][Rr][Uu][Ee]|[Ff][Aa][Ll][Ss][Ee])[.] return ct_LOGICALS;

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
[&] return sp_AND;

[=][=]|[.][Ee][Qq][.] return op_EQUALITY;
[/][=]|[.][Nn][Ee][.] return op_NOTEQUALITY;
[>]|[.][Gg][Tt][.] return op_GREATER;
[<]|[.][Ll][Tt][.] return op_LESSER;
[>][=]|[.][Gg][Ee][.] return op_GREATEREQUAL;
[<][=]|[.][Ll][Ee][.] return op_LESSEREQUAL;
[=] return op_EQUAL;
[+] return op_ADD;
[-] return op_SUB;
[*] return op_MUL;
[/] return op_DIV;
[%] return op_MODULUS;
[.][Aa][Nn][Dd][.] return op_AND;
[.][Oo][Rr][.] return op_OR;
[.][Nn][Oo][Tt][.] return op_NOT;
[.][Ee][Qq][Vv][.] return op_EQV;
[.][Nn][Ee][Qq][Vv][.] return op_NEQV;
[\n] {yylineno++; return nl ;}
[!].* ;
[ \t]+ ;
.  ;


  
  
%% 
  
int yywrap() 
{ 
   
 return 1; 
} 