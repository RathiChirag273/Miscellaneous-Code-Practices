import numpy as np

data = input('input ')
n = np.arange(1,int(data)+1,1)


for i in n:
    if i >= 1 and i <= 10**9:
        prod = 1
        Sum = 0
        for j in range(1,i+1):
            prod *= j
            Sum += j
        #print(prod," ",Sum)
        if prod % Sum == 0:
            print('YEAH')
        else:
            print('NAH')