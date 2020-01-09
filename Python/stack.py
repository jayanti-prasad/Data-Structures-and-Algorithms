
class Stack:
    def __init__(self ):
        self.__data__ = [] 

    def push_item (self, item):
        self.__data__.append(item)

    def pop_item (self):
        return self.__data__.pop()

    def get_stack(self):
        return self.__data__ 


if __name__ == "__main__":

     S = Stack()

     S.push_item("A")
     S.push_item("B")
     S.push_item("C")
     S.push_item("D")
         
     print(S.get_stack())

     print(S.pop_item())       
  
     print(S.get_stack())
