t = []
h = []
l=int(input("length og the first array \n"))
j=int(input("length og the secind array \n"))
for i in range (l):
    t.append(int(input(f"enter element {i+1} for the first array :")))
for i in range (j):
    h.append(int(input(f"enter element {i+1} for the secind array :")))
h+=t
print("Merged array:")
print(h)