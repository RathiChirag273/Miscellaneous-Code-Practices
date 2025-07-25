class Love_Calculator:

    def initialize(self, name1='adam', name2='eve'):
        name1 = name1.upper()
        name2 = name2.upper()
        Str = name1 + 'LOVES' + name2

        return self.getpercentage(Str)

    def removeDuplicates(self, string):
        p = ''
        for i in string:
            if i not in p:
                p = p+i

        return p

    def getnumlist(self, loves):
        count = 1
        numlist = []
        love = self.removeDuplicates(loves)
        for i in love:
            for j in range(1, len(loves)):
                if i == loves[j]:
                    count += 1
            loves = loves.replace(i, "")
            numlist.append(count)
            count = 1
        print(numlist)

        return numlist

    def getpercentage(self, LIST):
        numlist = list(self.getnumlist(LIST))
        newlist = []
        while True:
            i = 0
            j = -1
            if len(numlist) % 2 == 0:
                while True:
                    if i >= int(len(numlist)/2):
                        break
                    else:
                        newlist.append(numlist[i]+numlist[j])
                        i += 1
                        j -= 1
            else:
                while True:
                    if i > int(len(numlist)/2):
                        break
                    elif i < int(len(numlist)/2):
                        newlist.append(numlist[i]+numlist[j])
                        i += 1
                        j -= 1
                    else:
                        newlist.append(numlist[i])
                        i += 1
                        j -= 1
            numlist = list(newlist)
            print(numlist)
            newlist.clear()
            if len(numlist) == 2 and (numlist[0] >= 10 or numlist[1] >= 10):

                if numlist[0] >= 10 and numlist[1] >= 10:
                    numlist.insert(0, numlist[0]//10)
                    numlist[1] = numlist[1] % 10
                    numlist.insert(2, numlist[2]//10)
                    numlist[3] = numlist[3] % 10

                elif numlist[0] >= 10:
                    numlist.insert(0, numlist[0]//10)
                    numlist[1] = numlist[1] % 10
                else:
                    numlist.insert(1, numlist[1]//10)
                    numlist[2] = numlist[2] % 10
            elif len(numlist) == 2:
                break
            else:
                continue

        return numlist[0]*10 + numlist[1]


LC = Love_Calculator()
while True:
    S1 = str(input('Enter name 1 = '))
    S2 = str(input('Enter name 2 = '))
    print('Compatibility = ', LC.initialize(S1, S2), '%')
    if input('Do you want to repeat y/n - ') in ['N', 'n']:
        break
