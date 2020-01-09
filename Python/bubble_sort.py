import sys

def bubble_sort (d):
    for i in range (0, len(d)):
       for j in range(i, len(d)):
          if d[j] > d[i]:
             d[i], d[j] = d[j], d[i]
    return d 
 

if __name__ == "__main__":
 
    d = [int(sys.argv[i]) for i   in range (1, len(sys.argv))]

    print(bubble_sort(d))

