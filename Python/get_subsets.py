import sys 
"""
One of the common problems which is asked in  coding interviews is to find
all the substrings of a given strings. This problem can be broken down 
into two problems :
1) find all the permutations of a set/strings 
2) find all the subsets/substrings of a set/strings.

Below are the programs for the above two tasks. Note that
you will need to use these togather to get the appropriate result.

- Jayanti Prasad [prasad.jayanti@gmail.com]
  Jan 24, 2020

"""

def permute (x, l, r):
    # This creates all the permutation of a string 

    if l == r:
       print("".join(x))
    else :
       for i in range (l, len(x)):
          x[i], x[l] =  x[l], x[i]
          permute (x, l+1, r)  
          x[i], x[l] =  x[l], x[i]


def get_subset (x):
    # This creates all the subsets of a set 
    s = []
    for i in range (0, len (x)):
       for j in range (i, len(x)):
          s.append(x[i:j+1])

    s = ["".join(x) for x in s] 

    return s 


if __name__ == "__main__":


    s = input("Give the string\n")

    print("Permutations:\n")
    permute (list(s), 0, 3)

    print("Subsets:\n")
    print(get_subset (list(s)))
