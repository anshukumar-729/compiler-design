n=int(input())
l=[]
while(n>0):
    n-=1
    s=input()
    f1=0
    s2=""
    for i in s:
        if i==" ":
            f1=1
        if f1==0:
            s2+='['
            s2+=chr(ord(i)-32)
            s2+=i
            s2+=']'
        else:
            s2+=i
    # print(s2)
    l.append(s2)
    for i in l:
        print(i)

