x,y,z = input().split(' ')
x = int(x)
y = int(y)
z = int(z)

for i in range(1,z + 1):
  if i % x == 0 and i % y == 0:
    print('FizzBuzz')
  elif i % x == 0:
    print('Fizz')
  elif i % y == 0:
    print('Buzz')
  else:
    print(i)