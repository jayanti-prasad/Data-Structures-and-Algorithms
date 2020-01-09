import sys

# step 1 : pick the second element d[1] as current 
# step 2 :  now start comparing 'current' element with all past 
#        
#        if current is smaller than past we will need to   
#        push the current to right 
#        d[j+1] = d[j] 
# step 3: now keep moving towards past j -> j-1        
# step 4: follow step 2
# example :  
#  d =  1, 45, 3, 7, 11, 2, 8, 9
#  now current =d[1]=  45, past = 1, no swap, i = 1, j =0  
#  now current =  3,  past = 45, swap, i = 1, j = 1      
#  d = 1, 3, 45, 7, 11, 2, 8, 9
#  now current = d[1] =  3,  past = 1, no swap      
#  now current =  7,  past = 45,  swap      
#  d = 1, 3, 7, 45, 11, 2, 8, 9
#  now current =  7,  past = 3,  no swap      
#  now current =  7,  past = 1,  no swap      


def insertion_sort (d):

    # there are two parts - sorted & unsorted 
    # let us assume that the first element is in sorted 
    # so now visit 1 onwards 
  
    for i in range (1, len(d)):
      # this is pervious 
      j = i -1
      # this is current 
      key = d[i]
      while j >= 0 and key < d[j]:
         # if current is smaller than pervious 
         # 
         d[j+1] = d[j]
         #
         j-=1
      d[j+1] = key 
          
    return d 

    

if __name__ == "__main__":
     d = [int(sys.argv[i]) for i   in range (1, len(sys.argv))]

     print(insertion_sort(d))
