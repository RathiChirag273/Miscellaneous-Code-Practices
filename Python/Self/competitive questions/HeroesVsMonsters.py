#A = [[1,3,7],[2,5,4],[4,8,6]]
#B = [[3,5],[5,8]]
A = [[2,5,8],[5,8,6],[3,6,9],[7,10,10]]
B = [[2,7],[7,9],[7,11]]

monsters = 0
#to check no. of monsters
for i in range(0,len(A),1):
    for j in range(A[i][0],A[i][1]+1,1):
        monsters+=1
print(monsters)


mkilled = []
mleft = []
for i in range(len(B)):
    for j in range(len(A)):
        for k in range(A[j][0],A[j][1]+1):
            if B[i][0] == k and B[i][1] >= A[j][2] and [k,A[j][2]] not in mkilled:
                mkilled.append([k,A[j][2]])
                monsters-=1
    mleft.append(monsters)
print(mleft)
