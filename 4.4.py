s=input("Enter a string:\n")
v=0
c=0
V="aAeEuUiIoO"
for i in s:
    if i.isalpha():
        if i in V:
            v+=1
        else:
            c+=1
print(f"Number of vowels: {v}")
print(f"Number of consonants: {c}")