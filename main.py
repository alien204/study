num = int(input('enter a number : '))
count = 0
while(num!=0):
    rem = num%10
    count += 1
    num = num//10
print('no of digits = ',count)
