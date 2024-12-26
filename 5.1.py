def pgcd(a,b):
    while b!=0:
        m=b
        b=a%b
        a=m
    return a
a = int(input("Enter the first number: "))
b = int(input("Enter the second number: "))
print(f"GCD is: {pgcd(a, b)}")
