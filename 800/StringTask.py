s=input()
news=''
for i in s.lower():
    if i not in ['a','e','i','o','u','y']:
        news=news+'.'+i.lower()
print(news)