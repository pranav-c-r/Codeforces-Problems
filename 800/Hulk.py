n=int(input())
s=''
for i in range(n):
    if i!=n-1:
        if i%2!=0:
            s+='I love that '
        else:
            s+='I hate that '
    else:
        if i%2==0:
            s+='I hate it'
            break
        else:
            s+='I love it'
            break
print(s)