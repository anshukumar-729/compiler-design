
%{ 
   /* Definition section */
  #include<stdio.h> 
  int flag=0; 
  #include <string.h>
  #include <ctype.h>
#include <stdarg.h>
#include <stdlib.h>
// #define YYSTYPE int
extern int yylex(void);
extern int line_num;
extern FILE *yyin;
extern int yylineno;
extern char *yytext;
char *prev;
FILE *fp;
char st[100][10];
char st2[100][10];
char st2if[100][10];
char postFix[100][10];
char Address[100][10];
int top5=0;
int top=0;
int top22=0;
int top22if=0;
int top4=0;
char temp[4]="t00";
char places[4]="L02";
char places2[4]="L00";
char placesLoop[4]="L00";
char placesLoopEnd[4]="L00";
char noPlaces[4]="A00";
char noPlacesChange[4]="A00";
char stateVar[100][10];
char endVar[100][10];
int sv=0;
int ev=0;
int pt=1;


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



// %left '*' '/' '%' 

// %left '+' '-'


// %left '(' ')'

 
/* Rule Section */
%% 
ROOT:anynewline P{
         
         return 0; }
    //   }| {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," main functions is missing!\n");exit(1);}

anynewline: newline|
P: functions main|
main  |
// functions {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," main function is missing!\n");exit(1);}
main: kw_PROGRAM  identifier newline program  kw_END  kw_PROGRAM  identifier
program: implicitnone declare state 

identifier:IDENTIFIER 
identifier2: IDENTIFIER {pushVar();}
identifier1: IDENTIFIER { push();}
declare:typeDeclares |

state:statements |


implicitnone:kw_IMPLICIT kw_NONE newline |


// simple datatype declaration

// P: declarations 


declarations: declarations declaration |
declaration 


datatypeChar: dt_CHARACTER |
dt_CHARACTER sp_LB kw_LEN op_EQUAL ct_INT sp_RB 

// datatypeInt: dt_INT {push();} |pp
// pp:dt_INT sp

datatypeInt: dtint |
dtint sp_LB kw_KIND op_EQUAL ct_INT sp_RB

dtint:dt_INT

datatype: datatypeInt |
datatypeChar |
dt_REAL |
dt_LOGICALS |
dt_COMPLEX 

declaration: {strcpy(stateVar[2],yytext);}datatype colons  list
// colons list {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," declaration syntax error!\n");exit(1);}|
// datatype colons  {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," declaration syntax error!\n");exit(1);}|
// colons {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," declaration syntax error!\n");exit(1);}|
// datatypeType 

list: identifier1 sp_COMMA list  |
// sp_COMMA list  {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in declaration of variables\n");exit(1);}|
// identifier list  {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in declaration of variables\n");exit(1);}|
// identifier sp_COMMA  {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in declaration of variables\n");exit(1);}|
// sp_COMMA  {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in declaration of variables\n");exit(1);}|
identifier1 newline 

listwithoutnewline: identifier sp_COMMA listwithoutnewline|
// sp_COMMA listwithoutnewline {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in arguments\n");exit(1);}|
// identifier sp_COMMA  {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in arguments\n");exit(1);}|
// identifier listwithoutnewline {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in arguments\n");exit(1);}|
// sp_COMMA  {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in arguments\n");exit(1);}|
identifier|



newline: newline nl |
nl 

opequal:op_EQUAL
// statements

// P: statements
statements: statement2 statements |
statement2 |
statement2:statement|
statement: IDENTIFIER {states();} opequal  expression  |xx11
// op_EQUAL expression {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in simple statement\n");exit(1);}|
// identifier  expression {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in simple statement\n");exit(1);}|
// identifier op_EQUAL  {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in simple statement\n");exit(1);}|
// expression {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in simple statement\n");exit(1);}|
// op_EQUAL  {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in simple statement\n");exit(1);}|
// kw_PRINT op_MUL sp_COMMA expression |
// kw_PRINT  sp_COMMA expression {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in print statement\n");exit(1);}|
// kw_PRINT op_MUL  expression {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in print statement\n");exit(1);}|
// kw_PRINT  expression {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in print statement\n");exit(1);}|
// kw_PRINT op_MUL sp_COMMA newline {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in print statement\n");exit(1);}|
xx11:kw_RETURN newline|kw_PRINT  op_MUL sp_COMMA expression2|
kw_READ op_MUL sp_COMMA identifier{readFun();} newline |
// // kw_READ  sp_COMMA identifier newline {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in read statement!\n");exit(1);}|
// // kw_READ op_MUL  identifier newline {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in read statement!\n");exit(1);}|
// // kw_READ  identifier newline {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in read statement!\n");exit(1);}|
// // kw_READ op_MUL sp_COMMA newline {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in read statement!\n");exit(1);}|
ifstatement |
loops
// functioncall
expression: operands {pushVar();} operators expression |xx10
// expression: operands operators  expression |xx10 

// operands operators newline {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in expression!\n");exit(1);}|
// operators expression  {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in expression!\n");exit(1);}|
// operators  {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in expression!\n");exit(1);}|
xx10:operands {eval();} newline 
expression2: operands {pushVar();} operators expression2 |xx16
// expression: operands operators  expression |xx10 

// operands operators newline {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in expression!\n");exit(1);}|
// operators expression  {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in expression!\n");exit(1);}|
// operators  {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in expression!\n");exit(1);}|
xx16:operands {Printeval();} newline 
// minun:op_SUB expression

otherconstants:ct_CHARACTER |
ct_COMPLEX |
ct_LOGICALS 
operands:identifier2  |constants {pushVar();}
constants:ct_INT  |
ct_REAL |
otherconstants 
operators: op_ADD |
op_SUB |
op_MUL   |
op_DIV  |
op_AND  |
op_OR  |
op_MODULUS  |
sp_COMMA 

// comparision

// P: comparision

operands2:operands {pushifFunc();}
comparision: not comparise  relationaloperator{pushifFunc();} comparision|
// not relationaloperator comparision {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," two booleans are required for relationaloperator!\n");exit(1);}|
// not relationaloperator  {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," two booleans are required for relationaloperator!\n");exit(1);}|
// not comparision relationaloperator {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," two booleans are required for relationaloperator!\n");exit(1);}|
// not comparision comparision {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," a relationaloperator is required for two booleans!\n");exit(1);}|
not comparise
comparise: operands2 comparisionOperator{pushifFunc();} operands2{pushifFunc();} |
// operands comparisionOperator {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," two operands are required for comparisionOperator!\n");exit(1);} |
// comparisionOperator operands {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," two operands are required for comparisionOperator!\n");exit(1);} |
// comparisionOperator  {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," two operands are required for comparisionOperator!\n");exit(1);} |
// operands 
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
// kw_TYPE newline  declarations kw_END kw_TYPE identifier newline {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," identifier name required in the type declaration!\n");exit(1);}|
// kw_TYPE identifier newline declarations kw_END kw_TYPE identifier newline {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," undefined symbol after identifier in the type declaration!\n");exit(1);}|
// kw_TYPE identifier newline declarations kw_END newline {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," undefined end in the type declaration!\n");exit(1);}|
// kw_TYPE identifier newline declarations kw_END kw_TYPE  newline {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," undefined end in the type declaration!\n");exit(1);}|
// kw_TYPE identifier newline declarations kw_END  identifier newline {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s","undefined end in the type declaration!\n");exit(1);}|
declaration 

// declaring type variables
// P:datatypeTypes
datatypeTypes: datatypeType datatypeTypes |
datatypeType 
datatypeType: kw_TYPE sp_LB identifier sp_RB colons list |
// kw_TYPE  identifier sp_RB colons list {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," starting paranthesis required in the type datatype!\n");exit(1);}|
// kw_TYPE sp_LB identifier  colons list {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," end paranthesis required in the type datatype!\n");exit(1);}|
// kw_TYPE  sp_LB sp_RB colons list {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," a derived variable required in the type datatype!\n");exit(1);}|
// kw_TYPE  sp_LB identifier sp_RB colons  {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," atleast 1 IDENTIFIER in the type datatype!\n");exit(1);}|

// if condition
// P: ifstatement
ifstatement: kw_IF sp_LB comparision sp_RB kw_THEN {goIf();}newline{strcpy(places2,noPlaces);noPlacesChange[0]++; strcpy(noPlaces,noPlacesChange); } statements{afterIf();} {strcpy(places2,noPlaces);noPlacesChange[0]++; strcpy(noPlaces,noPlacesChange); }elsestatement {afterElse();} kw_END  kw_IF newline  
// kw_IF comparision sp_RB kw_THEN newline statements elsestatement kw_END kw_IF newline  {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," starting paranthesis required in the if statement!\n");exit(1);}|
// kw_IF sp_LB comparision kw_THEN newline statements elsestatement kw_END kw_IF newline  {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," end paranthesis required in the if statement!\n");exit(1);}|
// kw_IF sp_LB sp_RB kw_THEN newline statements elsestatement kw_END kw_IF newline  {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," a boolean value required in the if statement!\n");exit(1);}|
// kw_IF sp_LB comparision sp_RB  newline statements elsestatement kw_END kw_IF newline  {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," \"then\" is missing in the if statement!\n");exit(1);}|
// kw_IF sp_LB comparision sp_RB kw_THEN  newline statements elsestatement  newline  {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," ending of if is missing in the if statement!\n");exit(1);}|
// kw_IF sp_LB comparision sp_RB kw_THEN  newline statements elsestatement kw_END newline  {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," undefined end in the if statement!\n");exit(1);}|
// kw_IF sp_LB comparision sp_RB kw_THEN  statements elsestatement kw_END kw_IF newline  {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," undefined symbol after then the if statement!\n");exit(1);}
elsestatement: kw_ELSE newline statements  |
// kw_ELSE statements  {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," undefined symbol after else!\n");exit(1);}|



// Loops

// P: loops
loops:  doloops |
whileloops
doloops: kw_DO identifier{pushloopFunc();} op_EQUAL valconstants sp_COMMA twoconstants{strcpy(places2,noPlaces);noPlacesChange[0]++; strcpy(noPlaces,noPlacesChange); } statements {afterLoop();} kw_END kw_DO newline
//  kw_DO  twoconstants statements  kw_END kw_DO newline  {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," initialisation required in do loop!\n");exit(1);}|
//  kw_DO identifier op_EQUAL sp_COMMA twoconstants statements  kw_END kw_DO newline  {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," initialisation syntax error in do loop!\n");exit(1);}|
//  kw_DO identifier op_EQUAL valconstants  newline statements  kw_END kw_DO newline  {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," an upperbound required in do loop!\n");exit(1);}
twoconstants: valconstants  newline{evalLoop();}|
valconstants sp_COMMA{pushloopFunc();}  valconstants newline {evalLoop();}
// valconstants  valconstants newline {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," syntax error in do loop!\n");exit(1);}
valconstants: constants{pushloopFunc();}| identifier{pushloopFunc();}

// whileloops: kw_DO kw_WHILE sp_LB condition sp_RB newline statements kw_END kw_DO newline
whileloops: kw_DO kw_WHILE sp_LB comparision sp_RB newline{goWhile();}{strcpy(places2,noPlaces);noPlacesChange[0]++; strcpy(noPlaces,noPlacesChange); }  statements{afterWhile();} {strcpy(places2,noPlaces);noPlacesChange[0]++; strcpy(noPlaces,noPlacesChange); } kw_END kw_DO newline
// kw_DO kw_WHILE sp_LB comparision  newline statements kw_END kw_DO newline  {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," end paranthesis required in the while!\n");exit(1);}|
// kw_DO kw_WHILE  comparision sp_RB newline statements kw_END kw_DO newline  {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," starting paranthesis required in the while!\n");exit(1);}|
// kw_DO kw_WHILE sp_LB sp_RB  newline statements kw_END kw_DO newline  {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," a boolean value must have in the while!\n");exit(1);}

// functions
// P:functions

functions: functions function|
function
function: returntype kw_FUNCTION identifier sp_LB listwithoutnewline sp_RB results newline declare state kw_END kw_FUNCTION newline
//  returntype kw_FUNCTION keyword sp_LB listwithoutnewline sp_RB results newline declare state kw_END kw_FUNCTION newline {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," function name cannot be a keyword!\n");exit(1);}|
// returntype kw_FUNCTION identifier  results newline declare state kw_END kw_FUNCTION newline {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," paranthesis required in function!\n");exit(1);}|
// returntype kw_FUNCTION identifier sp_LB listwithoutnewline results newline declare state kw_END kw_FUNCTION newline {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," end bracket missing in function!\n");exit(1);}|
// returntype kw_FUNCTION identifier  listwithoutnewline sp_RB results newline declare state kw_END kw_FUNCTION newline {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," starting bracket missing in function!\n");exit(1);}

functioncall: identifier sp_LB listwithoutnewline sp_RB newline

results: kw_RESULT sp_LB listwithoutnewline sp_RB|
// kw_RESULT sp_LB listwithoutnewline {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," end bracket missing in result!\n");exit(1);}|
// kw_RESULT  {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," paranthesis required in result!\n");exit(1);}|
// kw_RESULT listwithoutnewline sp_RB {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," starting bracket missing in result!\n");exit(1);}|

returntype: datatype|
// identifier {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," :return type must be datatype!\n");exit(1);}|

colons: sp_COLON sp_COLON
// sp_COLON {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," colon symbol missing!\n");exit(1);}|
//  {printf("%s","upto line no: ");printf("%d",yylineno);printf("%s"," colon symbol missing!\n");exit(1);}



keyword: kw_FUNCTION|
kw_PROGRAM |
kw_IMPLICIT|
kw_NONE |
kw_LEN |sp_LB listwithoutnewline sp_RB
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




void printst(){
   int te=top;
   for(int te=top;te>=0;te--){
      printf("%d %s \n",te,st[te]);
      
   }


   }
   void printst2(){
   
   for(int te=top22;te>=0;te--){
      printf("%d %s \n",te,st2[te]);
      
   }




   }
   void printst2if(){
   
   for(int te=top22if;te>=0;te--){
      printf("%d %s \n",te,st2if[te]);
      
   }




   }
   char* increament(char *str){
      str[2]++;
      if(str[2]==':'){
      str[2]='0';
      str[1]++;}
      return str;
   }

void evalLoop(){
   // printst2();
   // printf("%d",top22);
   char *initial;
   char *final;
   char *inc;
   char* var;
   
   // strcpy(var,st2[1]);
      // strcpy(initial,st2[2]);
      // strcpy(final,st2[3]);
   if(strcmp(st2[top22-1],",")!=0){
      var = st2[top22-2];
   initial = st2[top22-1];
   final = st2[top22];
      inc="1";
      strcpy(st2[++top22],",");
      strcpy(st2[++top22],inc);

   }
   else{
      // strcpy(inc,st2[4]);
       var = st2[top22-4];
   initial = st2[top22-3];
   final = st2[top22-2];
      inc=st2[top22];
   }
  pt=top22;
  
   printf("%s : ",noPlaces);
   strcpy(noPlaces,increament(noPlaces));
   printf("%s = %s\n",var,initial);
   printf("%s : ",noPlaces);
   strcpy(placesLoop,noPlaces);
   strcpy(noPlaces,increament(noPlaces));
   strcpy(places,noPlaces);
      strcpy(noPlaces,noPlacesChange);
      noPlaces[0]++;
      noPlaces[1]='0';
      noPlaces[2]='0';
printf("if %s < %s GOTO %s\n",var,final,noPlaces);
   strcpy(noPlaces,places);
   
   printf("%s : ",noPlaces);
   strcpy(noPlaces,increament(noPlaces));
       printf("GOTO %s\n",noPlaces);
       strcpy(placesLoopEnd,noPlaces);


}
void readFun(){
   printf("%s : read ( %s )\n",noPlaces,yytext);strcpy(noPlaces,increament(noPlaces));
}
   void pushloopFunc(){
   if(strcmp(st2[top22],yytext)!=0)
   strcpy(st2[++top22],yytext);
   // printst2();

}
   void andop(){
      printf("%s : ",noPlaces);
      strcpy(noPlaces,increament(noPlaces));
       printf("t1 = f1 && true\n");
      printf("%s : ",noPlaces);
      strcpy(noPlaces,increament(noPlaces));
      printf("if %s %s %s f1 = t1\n",st2if[pt],st2if[pt+1],st2if[pt+2]);
      printf("%s : ",noPlaces);
      strcpy(noPlaces,increament(noPlaces));
      printf("else f1 = false\n");
      pt+=3;
   for(;pt<=top22if;pt+=4){
      
      
      // if(noPlaces[2]==':'){
      // noPlaces[2]='0';
      // noPlaces[1]++;}
       for(int j=0;j<=strlen(st2if[pt]);j++){
      if(st2if[pt][j]>=65&&st2if[pt][j]<=90)
         st2if[pt][j]=st2if[pt][j]+32;
   }
         // printf("%s",st2if[pt]);

      if(strcmp(st2if[pt],".and.")==0){
      // places[2]++;
     printf("%s : ",noPlaces);
      strcpy(noPlaces,increament(noPlaces));
      printf("t1 = f1 && true\n");
      printf("%s : ",noPlaces);
      strcpy(noPlaces,increament(noPlaces));
      printf("if %s %s %s f1 = t1\n",st2if[pt+1],st2if[pt+2],st2if[pt+3]);
      printf("%s : ",noPlaces);
      strcpy(noPlaces,increament(noPlaces));
      printf("else f1 = false\n");
     
      
      
      
     
      }
      else{
         break;
      }
     
   }
   
   }
  void afterLoop(){
     printf("%s : ",noPlaces);
      strcpy(noPlaces,increament(noPlaces));
      
           
   printf("%s = %s + %s\n",temp,st2[pt-4],st2[pt]);
      strcpy(noPlaces,increament(noPlaces));
     
           printf("%s : ",noPlaces);
      strcpy(noPlaces,increament(noPlaces));
   printf("%s = %s \n",st2[pt-4],temp);
   strcpy(temp,increament(temp));
   

      printf("%s : ",noPlaces); 
     strcpy(noPlaces,placesLoop);
     
     
     printf("GOTO %s\n",noPlaces);
     strcpy(noPlaces,placesLoopEnd);
     top22=0;
     pt=1;
     }
  void afterIf(){
      printf("%s : ",noPlaces); 
     strcpy(noPlaces,places2);
     
   //   strcpy(noPlaces,increament(noPlaces));
     printf("GOTO %s\n",noPlaces);
     top22if=0;
     pt=1;
     }
  void afterWhile(){
      printf("%s : ",noPlaces); 
     strcpy(noPlaces,placesLoop);
     
   //   strcpy(noPlaces,increament(noPlaces));
     printf("GOTO %s\n",noPlaces);
     strcpy(noPlaces,placesLoopEnd);
     top22if=0;
     pt=1;
     }
  void afterElse(){
      printf("%s : ",noPlaces); 
     strcpy(noPlaces,places2);
     
   //   strcpy(noPlaces,increament(noPlaces));
     printf("GOTO %s\n",noPlaces);
     }
void goIf(){
   printf("%s : ",noPlaces);
      strcpy(noPlaces,increament(noPlaces));
   printf("f2 = true\n");
   for(;pt<=top22if;pt++){

   
      
      printf("%s : ",noPlaces);
      strcpy(noPlaces,increament(noPlaces));
   printf("f1 = true\n");
   andop();
     printf("%s : ",noPlaces);
      strcpy(noPlaces,increament(noPlaces));
   printf("f2 = f2 || f1\n");
   }
   printf("%s : ",noPlaces);
      strcpy(noPlaces,increament(noPlaces));
      strcpy(places,noPlaces);
      strcpy(noPlaces,noPlacesChange);
      noPlaces[0]++;
      noPlaces[1]='0';
      noPlaces[2]='0';
   printf("if f2 = true GOTO %s\n",noPlaces);
   strcpy(noPlaces,places);
   printf("%s : ",noPlaces);
      strcpy(noPlaces,increament(noPlaces));
      strcpy(places,noPlaces);
            strcpy(noPlaces,noPlacesChange);

      noPlaces[0]++;
      noPlaces[0]++;
      noPlaces[1]='0';
      noPlaces[2]='0';
       printf("else GOTO %s\n",noPlaces);
       strcpy(noPlaces,places);

}
void goWhile(){
   strcpy(placesLoop,noPlaces);
   printf("%s : ",noPlaces);
      strcpy(noPlaces,increament(noPlaces));
   printf("f2 = true\n");
   for(;pt<=top22if;pt++){

   
      
      printf("%s : ",noPlaces);
      strcpy(noPlaces,increament(noPlaces));
   printf("f1 = true\n");
   andop();
     printf("%s : ",noPlaces);
      strcpy(noPlaces,increament(noPlaces));
   printf("f2 = f2 || f1\n");
   }
   printf("%s : ",noPlaces);
      strcpy(noPlaces,increament(noPlaces));
      strcpy(places,noPlaces);
      strcpy(noPlaces,noPlacesChange);
      noPlaces[0]++;
      noPlaces[1]='0';
      noPlaces[2]='0';
   printf("if f2 = true GOTO %s\n",noPlaces);
   strcpy(noPlaces,places);
   printf("%s : ",noPlaces);
      strcpy(noPlaces,increament(noPlaces));
      strcpy(places,noPlaces);
            strcpy(noPlaces,noPlacesChange);

      noPlaces[0]++;
      noPlaces[0]++;
      noPlaces[1]='0';
      noPlaces[2]='0';
       printf("else GOTO %s\n",noPlaces);
       strcpy(noPlaces,places);

}

void yyerror() 
{ 
   printf("\n Untrack error found\n"); 
   flag=1; 
} 
// function for if 

void pushifFunc(){
   if(strcmp(st2if[top22if],yytext)!=0)
   strcpy(st2if[++top22if],yytext);
   // printst2if();

}






int prec(char *c) {
      // printf("%s\n","c");
if(strcmp(c,"/")==0 || strcmp(c,"*")==0)
        return 2;
    else if(strcmp(c,"+") ==0|| strcmp(c,"-")==0)
        return 1;
    else
        return -1;

     
}
void states(){
   
   strcpy(stateVar[++sv],yytext);
   // printf("%s",stateVar);
}
void postFixTo3Address(){
    temp[1]='0';
    temp[2]='0';
    top5=0;
    int f=0;
   for(int i=top4;i>0;i--){
      if(prec(postFix[i])==-1){
         strcpy(Address[++top5],postFix[i]);
      }
     
      else{
         f=1;
         printf("%s : ",noPlaces);
      strcpy(noPlaces,increament(noPlaces));
         printf("%s = %s %s %s\n",temp,Address[top5-1],postFix[i],Address[top5]);
         ev=0;
         strcpy(endVar[++ev],temp);
         top5-=2;
         strcpy(Address[++top5],temp);
         temp[2]++;
         if(temp[2]==':'){
            temp[2]='0';
            temp[1]++;
         }
      }
      // printf("%d\n",top5);
      // for(int i=top5;i>0;i--){
      //    printf("%s ",Address[i]);
      // }
   }
   // printf("top%d",f);

   if(f==0){
      
         strcpy(endVar[++ev],Address[top5]);
   }
   
}


void printpostFix(){
   for(int i=top4;i>0;i--){
      // printf("%s : ",noPlaces);
      // strcpy(noPlaces,increament(noPlaces));
      printf("%s",postFix[i]);
   }
   printf("\n");
}
void inFixToPostFix(){
   char  st2[100][10]; 
   int top2=0;
   char  st3[100][10]; 
   int top3=0;
   
    
 
    for(int i = 1; i<=top; i++) {
        char *c = st[i];
         //   printf("in tack%s",c);

 
        // If the scanned character is
        // an operand, add it to output string.
         //   printf("%d",prec(c));

        if(prec(c)==-1)
            strcpy(st3[++top3],c);
 
        // If the scanned character is an
        // ‘(‘, push it to the stack.
       
 
        else {
            while(top2>0 && prec(st[i]) <= prec(st2[top2])) {
                strcpy(st3[++top3], st2[top2--]);
                
            }
            strcpy(st2[++top2],c);
        }
    }
    top4=0;
     int tee=1;
    while(tee<=top2) {

      //   printf("%s", st2[top2--]);
        strcpy(postFix[++top4],st2[tee++]);
        
    } 
   
    while(top3>0) {

      //   printf("%s", st3[top3--]);
      strcpy(postFix[++top4],st3[top3--]);
        
    } 
    
}

void eval(){
   
    inFixToPostFix();
    top=0;
    top5=0;
postFixTo3Address();
printf("%s : ",noPlaces);
      strcpy(noPlaces,increament(noPlaces));
    printf("%s = %s\n" ,stateVar[sv], endVar[ev]);

   // top5=0;
   // printpostFix();
   // postFixTo3Address();
}
void Printeval(){
   
    inFixToPostFix();
    top=0;
    top5=0;
postFixTo3Address();
printf("%s : ",noPlaces);
      strcpy(noPlaces,increament(noPlaces));
    printf("%s ( %s )\n" ,"print", endVar[ev]);

   // top5=0;
   // printpostFix();
   // postFixTo3Address();
}

void store(){
 if(top>=0) {
    printf("%s : ",noPlaces);
      strcpy(noPlaces,increament(noPlaces));
   printf("%s = %s \n",yytext,temp);
   
   strcpy(st[++top],temp);
   temp[1]++;}
   printst();
}
void load(){
 if(top>=0) {
    printf("%s : ",noPlaces);
      strcpy(noPlaces,increament(noPlaces));
   printf("%s = %s \n",temp,yytext);
   
   strcpy(st[++top],temp);
   temp[1]++;}
   printst();
}
void push (){
    
    printf("%s : ",noPlaces);
      strcpy(noPlaces,increament(noPlaces));
    printf("%s.type = %s\n",yytext,stateVar[2]);
    
}
void codegen(){

   // printf("%d",top);
   if(top>=0) {
      printf("%s : ",noPlaces);
      strcpy(noPlaces,increament(noPlaces));
   printf("%s = %s %s %s\n",temp,st[top-2],st[top-1],st[top]);
   
   top=-3;
   strcpy(st[++top],temp);
   temp[1]++;}
   printst();
}
void pushVar(){
   strcpy(st[++top],yytext);
   // eval();
   // printst();
    
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

