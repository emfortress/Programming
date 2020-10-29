a = 4
b = 5

a, b = b, a
print(a, b)

buff = b
b = a
a = buff
print(a,b)