import sys

farray =[0,1]

# recursion 
def fib1(n):
   if n < 1:
      print("give n > 0")
      return 
   if n == 1:
      return 0
   elif n == 2:
      return 1
   else: 
      tmp = fib1(n-1) + fib1(n-2)
      if tmp not in farray:
          farray.append(tmp)
      return tmp


# looping 
def fib2(n):
   t1 = 0 
   t2 = 1
   i  = 0
   tt=[] 
   while ( i < n):
       t=t1+t2
       t1=t2
       t2=t
       i = i+1
       tt.append(t1)
   return(tt)


# looping 
def fib3(n): 
    a = 0
    b = 1
    if n < 0: 
        print("Incorrect input") 
    elif n == 0: 
        return a 
    elif n == 1: 
        return b 
    else: 
        for i in range(2,n): 
            c = a + b 
            a = b 
            b = c 
        return b   

if __name__ == "__main__":

    d1 = fib1(int(sys.argv[1])) 
    d2 = fib2(int(sys.argv[1])) 
    d3 = fib3(int(sys.argv[1])) 
 
    print(d3)  
