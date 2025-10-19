s=input()
count=0
b=0
for i in s:
    if i=='4' or i=='7':
        count+=1
y=str(count)
for j in y:
    if j not in ['4','7']:
        continue
    else:
        b=1
if b==1:
    print("YES")
else:
    print("NO") 