class Node:
    # Node definition 
    def __init__(self, data):
        self.item = data
        self.ref = None


class LinkedList:
    # Linked List definition 
    def __init__(self):
        self.start_node = None

    # traversal 
    def traverse_list(self):
        if self.start_node is None:
           print("List has no element")
           return
        else:
           n = self.start_node
           while n is not None:
                print(n.item , " ")
                n = n.ref
     
    # insert at start 
    def insert_at_start(self, data):
        new_node = Node(data)
        new_node.ref = self.start_node
        self.start_node= new_node


    # insert at end       
    def insert_at_end(self, data):
        new_node = Node(data)
        if self.start_node is None:
            self.start_node = new_node
            return
        n = self.start_node
        while n.ref is not None:
            n= n.ref
        n.ref = new_node;

    # insert anywhere 
    def insert_after_item(self, x, data):
        n = self.start_node
        print(n.ref)
        while n is not None:
            if n.item == x:
                break
            n = n.ref
        if n is None:
            print("item not in the list")
        else:
            new_node = Node(data)
            new_node.ref = n.ref
            n.ref = new_node

    # insert before 
    def insert_before_item(self, x, data):
        if self.start_node is None:
            print("List has no element")
            return

        if x == self.start_node.item:
            new_node = Node(data)
            new_node.ref = self.start_node
            self.start_node = new_node
            return

        n = self.start_node
        print(n.ref)
        while n.ref is not None:
            if n.ref.item == x:
                break
            n = n.ref
        if n.ref is None:
            print("item not in the list")
        else:
            new_node = Node(data)
            new_node.ref = n.ref
            n.ref = new_node

    # insert at position 
    def insert_at_index (self, index, data):
        if index == 1:
            new_node = Node(data)
            new_node.ref = self.start_node
            self.start_node = new_node
        i = 1
        n = self.start_node
        while i < index-1 and n is not None:
            n = n.ref
            i = i+1
        if n is None:
            print("Index out of bound")
        else: 
            new_node = Node(data)
            new_node.ref = n.ref
            n.ref = new_node
    # get count 
    def get_count(self):
        if self.start_node is None:
            return 0;
        n = self.start_node
        count = 0;
        while n is not None:
            count = count + 1
            n = n.ref
        return count

    # search item 
    def search_item(self, x):
        if self.start_node is None:
            print("List has no elements")
            return
        n = self.start_node
        while n is not None:
            if n.item == x:
                print("Item found")
                return True
            n = n.ref
        print("item not found")
        return False
   
    # delete at start 
    def delete_at_start(self):
        if self.start_node is None:
            print("The list has no element to delete")
            return 
        self.start_node = self.start_node.ref

    # delete at end 
    def delete_at_end(self):
        if self.start_node is None:
            print("The list has no element to delete")
            return

        n = self.start_node
        while n.ref.ref is not None:
            n = n.ref
        n.ref = None

    # delete by value 
    def delete_element_by_value(self, x):
        if self.start_node is None:
            print("The list has no element to delete")
            return

        # Deleting first node 
        if self.start_node.item == x:
           self.start_node = self.start_node.ref
           return

        n = self.start_node
        while n.ref is not None:
           if n.ref.item == x:
              break
           n = n.ref

        if n.ref is None:
            print("item not found in the list")
        else:
            n.ref = n.ref.ref

    # reverse the list 
    def reverse_linkedlist(self):
        prev = None
        n = self.start_node
        while n is not None:
            next = n.ref
            n.ref = prev
            prev = n
            n = next
        self.start_node = prev



if __name__ == "__main__":


    L = LinkedList()
 
    L.insert_at_start("A")
    L.insert_at_end("Z")
    L.insert_after_item("A","B")
    L.insert_at_index (2, "C")
    L.traverse_list()

    print(L.get_count())
    print(L.search_item("C"))

    L.delete_element_by_value("C")
    L.traverse_list()
    L.reverse_linkedlist()
    L.traverse_list()


