%{
	#include<stdio.h>
%}
%%

"a"|"e"|"i"|"o"|"u"|"A"|"E"|"I"|"O"|"U" {printf("%s is a Vowel\n", yytext);}
[a-zA-Z] {printf("%s is a Cons \n", yytext);}
[\n] {return 0;}
%%
int yywrap()
{
	return 1;
}
void main()
{
	printf("Enter String\n");
	yylex();
}
