s=input()
lst=[]
a=0
for char in s:
    if a==0:
        if char=='h':
            lst.append(char)
            a=1
    elif a==1:
        if char=='e':
            lst.append(char)
            a=2
    elif a==2:
        if char=='l':
            lst.append(char)
            a=3
    elif a==3:
        if char=='l':
            lst.append(char)
            a=4
    elif a==4:
        if char=='o':
            lst.append(char)
            a=5
if a==5:
    print("YES")
else:
    print("NO")