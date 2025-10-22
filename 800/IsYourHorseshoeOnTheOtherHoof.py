lst=list(map(int, input().split()))
count=0
lst2=[]
for i in lst:
    if i not in lst2:
        lst2.append(i)
for i in lst2:
    if lst.count(i)>1:
        count+=lst.count(i)-1
print(count)