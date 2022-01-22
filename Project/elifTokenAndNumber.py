# this file convert 
# #define kw_PROGRAM 1 
# to
# else if(token==1)
#            {
#                    sprintf(buffer, "%s", "kw_PROGRAM");
#            }

n=int(input())
l2=[]
while(n>0):
    s2=""
    n-=1
    s=input()
    l=list(map(str,s.split(" ")))
    s2+="else if(token=="+l[2]+")\n\t{\n\t sprintf(buffer, \"%s\", \""+l[1]+"\");\n}"
    # print(s2)
    l2.append(s2)
    for i in l2:
        print(i)