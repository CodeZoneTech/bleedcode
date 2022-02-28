def facto(x):
    if(x==1):
        return(1)
    elif(x!=1):
        return(x*facto(x-1))
    
x = int(input().strip())
print(facto(x))