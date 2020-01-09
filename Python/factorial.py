import sys

def fact( n ):
   if n <1:   # base case
       return 1
   else:
       f = n * fact( n - 1 ) 
   return f

if __name__ == "__main__":
   print(fact(int(sys.argv[1])))

