''' sum of 2 n=1+2
sum of 3 n=1+2+3
sum of 4 n=1+2+3+4
sum of n=sum(n-1) + n
'''

def sum(n):
    if(n==1):
        return 1
    return sum(n-1) + n

print(sum(4))