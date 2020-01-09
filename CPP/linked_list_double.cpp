#include<iostream>
using namespace std;
/********************************************

Doubley connected linked list with class implemenation.

- Jayanti Prasad [prasad.jayanti@gmail.com]
  January 06, 2020 


********************************************/


// This is the node structure 
struct node {
   int data;
   node *left; 
   node *right; 
};


// will be used in sorting 
void swap(struct node *a, struct node *b) 
{ 
    int temp = a->data; 
    a->data = b->data; 
    b->data = temp; 
} 


// Linked List class 
class LList {

   public :
     // we want to keep track of head and tail 
     node *head;
     node *tail;
     int num_nodes;

     LList () {
        // let us set both to null 
        head = NULL;
        tail = NULL;
        num_nodes = 0;
     } 

       
    void add2tail (int data) {
      // Now we can start adding from tail towards right - one by one 
      node *n;
      // create some space for the new node we want to create and put assign  
       n = new node;  
 
       n->data = data;
       n->left = NULL;   
       n->right = NULL;   
   

       // Now if this is the first node & tail (head as well) is not set 
       if (tail == NULL) {
           tail = n;
           head = n;
           num_nodes +=1;
        }else {
         // if we already have a tail add node to that toward left 
         // we must set two linked when adding a node   
           n->right = tail; 
	   tail->left = n; 
           tail = n; 
           num_nodes +=1;
        }
     
     }

   void add2head (int data) {
       // exactly as done above with some operations reversed 
       node *n;
       n = new node;
       n->data = data;
       n->left = NULL;
       n->right = NULL;

       
       if (head == NULL) {
           head = n;
           tail = n;
           num_nodes +=1;
        }else {
           n->left = head;
           head->right = n;
           head = n;
           num_nodes +=1;
        }
       
     }


    // to delete node at the ends  
     void pop (int direction) {
         if (direction > 0) {
            head = head->left; 
            head->right = NULL;
         } else {
            tail = tail->right;
            tail->left = NULL;  
       } 
     }


    // This is an iterator can move backward & forward 
    // to print the list of nodes 
    void iterate(int direction){
       node *tmp;
       if (direction > 0) {
           tmp = tail; 
       }else {
           tmp = head; 
       }
       cout << "Link list:" << endl; 
       while (tmp !=NULL) {
         if ( direction > 0) {
            cout << "->" << tmp->data;
            tmp = tmp->right;
          } else {
           cout << "<-" << tmp->data;
           tmp = tmp->left;  
          }
 
       }
       cout << endl;
     } 

   
     // node can be sorted by the vlues using buuble sort  
     void sort () {
         int swapped, i; 
         struct node *tmp; 

        // just to be safe 
        if (tail == NULL) 
           return; 
     
        do { 
           swapped = 0; 
           tmp = tail; 
            while (tmp->right != NULL)  { 
              if (tmp->data > tmp->right->data)  {  
                 swap(tmp, tmp->right); 
                 swapped = 1; 
              }   
              tmp = tmp->right; 
             } 
         } 
        while (swapped); 
   } 

};


int main (int arcg, char *argv[]) {

   LList  L = LList (); 

   L.add2head(11);
   L.add2head(9);
   L.add2tail(30);
   L.add2tail(4);
   L.add2head(58);
   
   L.iterate(-1);
   L.iterate(1);

   /*
   L.pop(-1);
   L.iterate(1);
   L.iterate(-1);

   L.pop(1);
   L.iterate(1);
   L.iterate(-1);
   */

   L.sort();
   L.iterate(-1);

}
