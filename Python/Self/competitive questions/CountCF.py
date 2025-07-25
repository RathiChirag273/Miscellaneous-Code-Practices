data = input('enter range = ')
li = data.split()

a = int(li[0])
b = int(li[1])
data = 0

if a > b:   
    for i in range(1, int(b/2)+1):        
        if a % i == 0 and b % i == 0:
            data+=1;
else: 
    for i in range(1, int(a/2)+1):        
        if a % i == 0 and b % i == 0:
            data+=1;

print(data)