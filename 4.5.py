s=input("enter a string:")
n=0
m=input("Required character in text:\n")
for i in s:
    if m.upper()==i.upper():
        n+=1
print(f"THE FREQUENCY OF A CHARACTER '{m}' IN A STRING is {n} ")
