s=input()
x=s.split('0')
y=s.split('1')
b=0
for i in x:
    if len(i)>=7:
        print("YES")
        b=1
        break
for j in y:
    if len(j)>=7:
        print("YES")
        b=1
        break
if b==0:
    print("NO")