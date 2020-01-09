#include<iostream>
using namespace std;

/*****************************************
Singly connected linked list using class with limited
functionality. 

- jayanti prasad [prasad.jayanti@gmail.com]
  January, 06, 2020 

*****************************************/

struct node {
   int data;
   node *next; 
};


class LList {

   public :
     node * head;
     int num_nodes;

     LList () {
        head = NULL;
        num_nodes = 0;
     } 

    void push (int data) {
       node *n;
       n = new node;  
       n->data = data;
       n->next = NULL;   

       if (head == NULL) {
           head = n; 
           num_nodes +=1;
        }else {
           n->next = head; 
           head = n; 
           num_nodes +=1;
        }
     }

     void pop () {
       head = head->next; 
     }

    void iterate (){
       node *tmp;
       tmp = head; 
       cout << "Link list:" << endl; 
       while (tmp !=NULL) {
         cout << "->" << tmp->data; 
         tmp = tmp->next;  
       }
       cout << endl; 
     } 
};


int main (int arcg, char *argv[]) {

   LList  L = LList (); 

   L.push(1);
   L.push(2);
   L.push(3);
   L.push(4);
   L.push(5);

   L.iterate();

   // get the last node out 

   L.pop();

   L.iterate();
}
