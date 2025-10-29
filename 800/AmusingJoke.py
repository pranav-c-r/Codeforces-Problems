s1=input()
s2=input()
s3=input()
l1=[x for x in s1]
l2=[x for x in s2]
l3=[x for x in s3]
l4=l1+l2
y=1
for i in l3:
    if l3.count(i)==l4.count(i):
        continue
    else:
        print("NO")
        y=2
        break
if y!=2:
    print("YES")