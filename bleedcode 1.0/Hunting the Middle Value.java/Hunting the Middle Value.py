x = int(input())

if x%2!=0:
    str =input()
    lst = str.split()
    for i in range(0, len(lst)):
        lst[i] = int(lst[i])

    lst.sort()
    l = int(len(lst)/2)
    print(lst)
    print(lst[l])