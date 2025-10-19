s=input()
lc=0
uc=0
for i in s:
    if i.isupper():
        uc+=1
    elif i.islower():
        lc+=1
if uc>lc:
    print(s.upper())
else:
    print(s.lower())