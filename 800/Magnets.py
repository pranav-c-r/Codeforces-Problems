n=int(input())
lst=[]
count=0
for i in range(n):
  num = int(input())
  lst.append(num)
for i in range(len(lst)-1):
  if lst[i]!=lst[i+1]:
    count+=1
print(count+1)