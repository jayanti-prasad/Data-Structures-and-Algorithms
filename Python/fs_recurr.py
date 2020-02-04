import sys
import os

"""
This program traverses a file system recurseively 

"""

def fs_recurr (path):
    if os.path.isdir(path):
       dirs = os.listdir (path) 
       for d in dirs:
           fs_recurr(path + os.sep + d) 
    else:
       x = int(os.stat(path).st_size/1000000) 
       print(x, path)  

if __name__ == "__main__":
     path = sys.argv[1] 
     fs_recurr (path)  
