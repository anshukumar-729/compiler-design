
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
extern char *yytext;
FILE *fp;

%}

%start ROOT
%token NUMBER 
%token kw_PROGRAM
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
%token kw_READ
%token kw_IF 
%token kw_ELSE 
%token kw_END 
%token kw_THEN 
%token kw_DO 
%token kw_WHILE
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

%token ct_INT 
%token ct_REAL 
%token ct_CHARACTER 
%token ct_COMPLEX 
%token ct_LOGICALS 
 
%token IDENTIFIER

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

%token nl 
%token COMMENT 
%token inval 



%left '*' '/' '%' 

%left '+' '-'


%left '(' ')'

 
/* Rule Section */
%% 
ROOT:anynewline P{
         
         return 0; 
      }| {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," main functions is missing!\n");exit(1);}

anynewline: newline|
P: functions main|
main|
functions {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," main function is missing!\n");exit(1);}
main: kw_PROGRAM identifier newline program  kw_END kw_PROGRAM identifier |
main:  identifier newline program  kw_END kw_PROGRAM identifier {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," program keyword is missing!\n");exit(1);}|
main: kw_PROGRAM  newline program  kw_END kw_PROGRAM identifier {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," program name is missing!\n");exit(1);}|
main: kw_PROGRAM identifier  program  kw_END kw_PROGRAM identifier {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," undefined symbol after identifier in program!\n");exit(1);}|
main: kw_PROGRAM identifier newline program  kw_END  identifier {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," undefined end in program!\n");exit(1);}|
main: kw_PROGRAM identifier newline program  kw_END kw_PROGRAM  {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," undefined end in program!\n");exit(1);}|
main: kw_PROGRAM identifier newline program  kw_END {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," undefined end in program!\n");exit(1);}
program: implicitnone declare state 

identifier: IDENTIFIER|
IDENTIFIER op_MODULUS IDENTIFIER
declare:typeDeclares |

state:statements |


implicitnone:kw_IMPLICIT kw_NONE newline |


// simple datatype declaration

// P: declarations 


declarations: declarations declaration |
declaration 


datatypeChar: dt_CHARACTER |
dt_CHARACTER sp_LB kw_LEN op_EQUAL ct_INT sp_RB 

datatypeInt: dt_INT  |
dt_INT sp_LB kw_KIND op_EQUAL ct_INT sp_RB 

datatype: datatypeInt |
datatypeChar |
dt_REAL |
dt_LOGICALS |
dt_COMPLEX 

declaration: datatype colons list |
colons list {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," declaration syntax error!\n");exit(1);}|
datatype colons  {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," declaration syntax error!\n");exit(1);}|
colons {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," declaration syntax error!\n");exit(1);}|
datatypeType 

list: identifier sp_COMMA list  |
sp_COMMA list  {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in declaration of variables\n");exit(1);}|
identifier list  {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in declaration of variables\n");exit(1);}|
identifier sp_COMMA  {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in declaration of variables\n");exit(1);}|
sp_COMMA  {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in declaration of variables\n");exit(1);}|
identifier newline 

listwithoutnewline: identifier sp_COMMA listwithoutnewline|
sp_COMMA listwithoutnewline {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in arguments\n");exit(1);}|
identifier sp_COMMA  {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in arguments\n");exit(1);}|
identifier listwithoutnewline {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in arguments\n");exit(1);}|
sp_COMMA  {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in arguments\n");exit(1);}|
identifier|



newline: newline nl |
nl 


// statements

// P: statements
statements: statement statements |
statement |
statement: identifier op_EQUAL expression |
op_EQUAL expression {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in simple statement\n");exit(1);}|
identifier  expression {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in simple statement\n");exit(1);}|
identifier op_EQUAL  {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in simple statement\n");exit(1);}|
expression {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in simple statement\n");exit(1);}|
op_EQUAL  {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in simple statement\n");exit(1);}|
kw_PRINT op_MUL sp_COMMA expression |
kw_PRINT  sp_COMMA expression {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in print statement\n");exit(1);}|
kw_PRINT op_MUL  expression {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in print statement\n");exit(1);}|
kw_PRINT  expression {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in print statement\n");exit(1);}|
kw_PRINT op_MUL sp_COMMA newline {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in print statement\n");exit(1);}|
kw_RETURN newline|
kw_READ op_MUL sp_COMMA identifier newline |
kw_READ  sp_COMMA identifier newline {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in read statement!\n");exit(1);}|
kw_READ op_MUL  identifier newline {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in read statement!\n");exit(1);}|
kw_READ  identifier newline {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in read statement!\n");exit(1);}|
kw_READ op_MUL sp_COMMA newline {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in read statement!\n");exit(1);}|
ifstatement |
loops|
functioncall
expression: operands operators expression |
operands operators newline {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in expression!\n");exit(1);}|
operators expression  {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in expression!\n");exit(1);}|
operators  {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in expression!\n");exit(1);}|
operands newline |
op_NOT expression |
op_SUB expression

otherconstants:ct_CHARACTER |
ct_COMPLEX |
ct_LOGICALS 
operands:identifier |
constants 
constants:ct_INT |
ct_REAL |
otherconstants 
operators: op_ADD |
op_ADD  |
op_SUB   |
op_MUL   |
op_DIV  |
op_AND  |
op_OR  |
op_MODULUS  |
sp_COMMA 

// comparision

// P: comparision

comparision: not comparise relationaloperator comparision|
not relationaloperator comparision {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," two booleans are required for relationaloperator!\n");exit(1);}|
not relationaloperator  {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," two booleans are required for relationaloperator!\n");exit(1);}|
not comparision relationaloperator {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," two booleans are required for relationaloperator!\n");exit(1);}|
not comparision comparision {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," a relationaloperator is required for two booleans!\n");exit(1);}|
not comparise
comparise: operands comparisionOperator operands |
operands comparisionOperator {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," two operands are required for comparisionOperator!\n");exit(1);} |
comparisionOperator operands {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," two operands are required for comparisionOperator!\n");exit(1);} |
comparisionOperator  {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," two operands are required for comparisionOperator!\n");exit(1);} |
operands 
comparisionOperator: op_EQUALITY |
op_EQV |
op_GREATER |
op_GREATEREQUAL |
op_LESSER |
op_LESSEREQUAL |
op_NEQV |
op_NOTEQUALITY 

relationaloperator: op_AND|
op_OR

not: op_NOT|

// type declaration
// P:typeDeclares
typeDeclares: typeDeclare typeDeclares |
typeDeclare 
typeDeclare: kw_TYPE identifier newline  declarations kw_END kw_TYPE identifier newline |
kw_TYPE newline  declarations kw_END kw_TYPE identifier newline {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," identifier name required in the type declaration!\n");exit(1);}|
kw_TYPE identifier newline declarations kw_END kw_TYPE identifier newline {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," undefined symbol after identifier in the type declaration!\n");exit(1);}|
kw_TYPE identifier newline declarations kw_END newline {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," undefined end in the type declaration!\n");exit(1);}|
kw_TYPE identifier newline declarations kw_END kw_TYPE  newline {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," undefined end in the type declaration!\n");exit(1);}|
kw_TYPE identifier newline declarations kw_END  identifier newline {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s","undefined end in the type declaration!\n");exit(1);}|
declaration 

// declaring type variables
// P:datatypeTypes
datatypeTypes: datatypeType datatypeTypes |
datatypeType 
datatypeType: kw_TYPE sp_LB identifier sp_RB colons list |
kw_TYPE  identifier sp_RB colons list {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," starting paranthesis required in the type datatype!\n");exit(1);}|
kw_TYPE sp_LB identifier  colons list {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," end paranthesis required in the type datatype!\n");exit(1);}|
kw_TYPE  sp_LB sp_RB colons list {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," a derived variable required in the type datatype!\n");exit(1);}|
kw_TYPE  sp_LB identifier sp_RB colons  {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," atleast 1 IDENTIFIER in the type datatype!\n");exit(1);}|

// if condition
// P: ifstatement
ifstatement: kw_IF sp_LB comparision sp_RB kw_THEN newline statements elsestatement kw_END kw_IF newline  |
kw_IF comparision sp_RB kw_THEN newline statements elsestatement kw_END kw_IF newline  {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," starting paranthesis required in the if statement!\n");exit(1);}|
kw_IF sp_LB comparision kw_THEN newline statements elsestatement kw_END kw_IF newline  {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," end paranthesis required in the if statement!\n");exit(1);}|
kw_IF sp_LB sp_RB kw_THEN newline statements elsestatement kw_END kw_IF newline  {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," a boolean value required in the if statement!\n");exit(1);}|
kw_IF sp_LB comparision sp_RB  newline statements elsestatement kw_END kw_IF newline  {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," \"then\" is missing in the if statement!\n");exit(1);}|
kw_IF sp_LB comparision sp_RB kw_THEN  newline statements elsestatement  newline  {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," ending of if is missing in the if statement!\n");exit(1);}|
kw_IF sp_LB comparision sp_RB kw_THEN  newline statements elsestatement kw_END newline  {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," undefined end in the if statement!\n");exit(1);}|
kw_IF sp_LB comparision sp_RB kw_THEN  statements elsestatement kw_END kw_IF newline  {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," undefined symbol after then the if statement!\n");exit(1);}
elsestatement: kw_ELSE newline statements  |
kw_ELSE statements  {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," undefined symbol after else!\n");exit(1);}|



// Loops

// P: loops
loops:  doloops |
whileloops
doloops: kw_DO identifier op_EQUAL valconstants sp_COMMA twoconstants statements  kw_END kw_DO newline|
 kw_DO  twoconstants statements  kw_END kw_DO newline  {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," initialisation required in do loop!\n");exit(1);}|
 kw_DO identifier op_EQUAL sp_COMMA twoconstants statements  kw_END kw_DO newline  {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," initialisation syntax error in do loop!\n");exit(1);}|
 kw_DO identifier op_EQUAL valconstants  newline statements  kw_END kw_DO newline  {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," an upperbound required in do loop!\n");exit(1);}
twoconstants: valconstants newline|
valconstants sp_COMMA valconstants newline|
valconstants  valconstants newline {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in do loop!\n");exit(1);}
valconstants: constants| identifier

// whileloops: kw_DO kw_WHILE sp_LB condition sp_RB newline statements kw_END kw_DO newline
whileloops: kw_DO kw_WHILE sp_LB comparision sp_RB newline statements kw_END kw_DO newline|
kw_DO kw_WHILE sp_LB comparision  newline statements kw_END kw_DO newline  {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," end paranthesis required in the while!\n");exit(1);}|
kw_DO kw_WHILE  comparision sp_RB newline statements kw_END kw_DO newline  {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," starting paranthesis required in the while!\n");exit(1);}|
kw_DO kw_WHILE sp_LB sp_RB  newline statements kw_END kw_DO newline  {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," a boolean value must have in the while!\n");exit(1);}

// functions
// P:functions

functions: functions function|
function
function: returntype kw_FUNCTION identifier sp_LB listwithoutnewline sp_RB results newline declare state kw_END kw_FUNCTION newline|
 returntype kw_FUNCTION keyword sp_LB listwithoutnewline sp_RB results newline declare state kw_END kw_FUNCTION newline {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," function name cannot be a keyword!\n");exit(1);}|
returntype kw_FUNCTION identifier  results newline declare state kw_END kw_FUNCTION newline {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," paranthesis required in function!\n");exit(1);}|
returntype kw_FUNCTION identifier sp_LB listwithoutnewline results newline declare state kw_END kw_FUNCTION newline {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," end bracket missing in function!\n");exit(1);}|
returntype kw_FUNCTION identifier  listwithoutnewline sp_RB results newline declare state kw_END kw_FUNCTION newline {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," starting bracket missing in function!\n");exit(1);}

functioncall: IDENTIFIER sp_LB listwithoutnewline sp_RB newline

results: kw_RESULT sp_LB listwithoutnewline sp_RB|
kw_RESULT sp_LB listwithoutnewline {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," end bracket missing in result!\n");exit(1);}|
kw_RESULT  {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," paranthesis required in result!\n");exit(1);}|
kw_RESULT listwithoutnewline sp_RB {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," starting bracket missing in result!\n");exit(1);}|

returntype: datatype|
identifier {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," :return type must be datatype!\n");exit(1);}|

colons: sp_COLON sp_COLON|
sp_COLON {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," colon symbol missing!\n");exit(1);}|
 {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," colon symbol missing!\n");exit(1);}



keyword: kw_FUNCTION|
kw_PROGRAM|
kw_IMPLICIT|
kw_NONE |
kw_LEN |p_LB listwithoutnewline sp_RB
kw_RESULT |
kw_INTENT |
kw_IN |
kw_OUT |
kw_DIMENSION |
kw_POINTER |
kw_PRINT |
kw_READ|
kw_IF |
kw_ELSE |
kw_END |
kw_THEN |
kw_DO |
kw_WHILE|
kw_CONTINUE |
kw_GOTO |
kw_RETURN |
kw_SELECT |
kw_CASE |
kw_FUNCTION |
kw_TYPE 

  
  
%% 
  
  
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

