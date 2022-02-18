!# /bin/bash
bison -d calc.y 
flex calc.l
gcc lex.yy.c calc.tab.c 
./a.out input.txt > output.txt
cat output.txt