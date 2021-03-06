NUMBER_LIMIT = 150000

numberList = list(range(1, NUMBER_LIMIT+1))

index = 0
key = 2
count = 0

def sieve(index):
    i = index
    while i < NUMBER_LIMIT:
        i = i + numberList[index]
        if i >= NUMBER_LIMIT:
            break;
        numberList[i] = 0

for idx, number in enumerate(numberList):
    #print("Index = ", idx, "Number = ", number)
    if number > 1:
        sieve(idx)

for n in numberList:
    if n > 1:
        count += 1
    if count == 10001:
        print(n)
        break;
