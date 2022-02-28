listLength = int(input())
integerList = input().split()
product = 1
for _ in range(listLength):
    integerList[_] = int(integerList[_])
    product = product * integerList[_]
for i in range(listLength):
    print(round(product/integerList[i]), end= " ")
   
