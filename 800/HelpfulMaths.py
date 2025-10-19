s=input()
lst = s.split('+')
news=''
lst.sort()
b=0
for i in lst:
    news+=i
    b+=1
    if b!=len(lst):
        news+='+'
print(news)