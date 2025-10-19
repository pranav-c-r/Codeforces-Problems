s=input().strip()
news=''
a=0
for i in s:
    if a==0:
        news+=i.upper()
        a+=1
    else:
        news+=i
        a+=1
print(news)