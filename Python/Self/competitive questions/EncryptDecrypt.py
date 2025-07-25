# ascii:
#     033 - 038 symbol
#     048 - 057 numbers
#     065 - 090 Cap Alpha
#     097 - 122 Small Alpha
import random
from itertools import combinations as cb

class security:
    key = []
    tempDict = {}
    def __init__(self):
        keyDict = {"symbols": ['!','@','#','$','&'],
           "numbers": ['0','1','2','3','4','5','6','7','8','9']}
        while len(self.key) != 8:
            self.key.append(random.choice(keyDict[random.choice(list(keyDict.keys()))]))
            self.key = [*set(self.key)]

    def gentempDict(self):  
        a,b=65,0
        for i in range(1,4):
            if i > 1:
                temp = list(cb(self.key,i))
                for j in temp:
                    if a in range(65,91):
                        self.tempDict[chr(a)] = j[0]+j[1]
                        a+=1
                        if a > 90:
                            a = 97
                    elif a in range(97,107):
                        self.tempDict[chr(a)] = j[0]+j[1]
                        a+=1
                    elif a in range(107,123):
                        self.tempDict[chr(a)] = j[0]+j[1]+j[2]
                        a+=1
                        if a > 122:
                            a = 48
                    elif a in range(48,58):
                        self.tempDict[chr(a)] = j[0]+j[1]+j[2]
                        a+=1
                    else:
                        a = [33, 64, 35, 36, 38, 45, 61]
                        self.tempDict[chr(a[b])] = j[0]+j[1]+j[2]
                        b+=1
                        if len(self.tempDict) == 69:
                            break
            else:
                for j in self.key:
                    self.tempDict[chr(a)] = j
                    a+=1
            if len(self.tempDict) == 69:
                break
        print(self.tempDict)

    def encrypt(self,location, message):
        self.gentempDict()
        f = open(location,'w')
        for x in message:
            if x in self.tempDict:
                f.write(self.tempDict[x])
                f.write('-')
            elif x == ' ':
                f.write('=')
            else:
                f.write(x)
                f.write('-')
        f.close() 

        return self.key
    
    def decrypt(self,location,Key):
        self.key = Key
        self.gentempDict()
        f = open(location,'r')
        encmess = f.read()
        encmess = encmess.replace('=',' -')
        stop,encstr = '-',''
        for j in encmess.split(stop):
            if j != ' ':
                temp = [k for k,v in self.tempDict.items() if v == j]
                if temp:
                    encstr = encstr + temp[0]
                else:
                    encstr = encstr + j
            else:
                encstr = encstr + ' '
        
        return encstr

    def __del__(self):
        pass


while True:
    choice = int(input('Enter selection\n\t1.Encrypt\n\t2.Decrypt\n\t3.Exit\n\t\t= '))
    if choice == 1:
        s = security()
        loc = input('Enter file location to save - ')
        message = input('Enter message\n')
        key = s.encrypt(location=loc, message=message)
        print('key to decrypt the message is - ',*key,sep='')
        del s,message,key,loc
    elif choice == 2:
        s = security()
        loc = input('Enter file location - ')
        key = [*input('Enter key - ')]
        print('Decrypted message - \n\t',s.decrypt(location=loc,Key=key))
        del s,loc,key
    elif choice == 3:
        exit()
    else:
        print('Chosen option out of boundary')