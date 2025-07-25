import random 

keyDict = {"symbols": ['!','@','#','$','&'],
           "numbers": ['0','1','2','3','4','5','6','7','8','9']}
key = []
while len(key) != 8:
    key.append(random.choice(keyDict[random.choice(list(keyDict.keys()))]))
    key = [*set(key)]

test = 'abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$&'

dkey = []
