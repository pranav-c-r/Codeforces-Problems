n=int(input())
lst=list(map(int,input().split()))
b=0
for i in lst:
    if i==1:
        print("HARD")
        b=1
        break
if b==0:
    print("EASY")