!# /bin/bash
bison -d new.y 
flex calc.l
gcc lex.yy.c new.tab.c 
./a.out input.txt > output.txt
cat output.txt