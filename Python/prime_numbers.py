import sys
import os

"""
Finds prime numbers in  range n1 n2 
"""

def prime(n1,n2):
    numlist=list(range(n1,n2))
    is_prime=[]
    for n in numlist:
        is_prime.append(1)

    count=-1 
    for x in numlist :
        count = count + 1
        for y in range(2,x):
            if ( x % y ==0) :
                is_prime[count]=0
                break

    prime=[] 
    for i in range(1,len(numlist)) :
         if (is_prime[i] == 1) :
              prime.append(numlist[i])

    return(prime)

if __name__ == "__main__":
    if (len(sys.argv) <= 2):
       print("give two numbers !")
       sys.exit()
    else:
       print("prime numbers:",prime(int(sys.argv[1]),int(sys.argv[2]))) 

