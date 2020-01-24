"""
This program reads a user given list and searches 
a user given item in that using binary search.

"""

def binary_search (x, data, low, high):
    
if x > data[low] and x < data [high]:
        middle = int((low + high) / 2)
        if x > data [low] and x < data [middle]:
            binary_search (x, data, low, middle)
        if x < data [high] and x >  data [middle]:
            binary_search (x, data, middle, high)
        else :
            print(middle, data[middle], data.index(x))

if __name__ == "__main__":

     x = [1, 3, 6, 14, 15, 16, 19, 32, 45, 53]

     y = binary_search (32,x, 0, len(x)-1)

