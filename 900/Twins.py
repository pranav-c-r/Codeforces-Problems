n=int(input())
s=input()
z=s.split()
y=[]
for i in z:
    y.append(int(i))
y.sort(reverse=True)
num=0
sum1=0
sum2=sum(y)
i=0
while not (sum1>sum2) :
    sum1+=y[i]
    num+=1
    sum2-=y[i]
    i+=1
print(num)