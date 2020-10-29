x0 = float(input('Enter x0 '))
v0 = float(input('Enter v0 '))
t = float(input('Enter t '))

g = 9.81
a = g
xt = x0 + v0 *t - ((a*(t**2))/2)
print('ans =', xt)