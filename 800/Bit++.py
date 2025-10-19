x=0
n=int(input())
for i in range(n):
    t=input()
    if t.startswith('++') or t.endswith('++'):
        x+=1
    else:
        x-=1
print(x)