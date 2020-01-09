#include<iostream>
using namespace std;
/*************************************************************
A very simple implemenation of linked list with very limited
functionality. But this can be used as a template for some 
rich implemenation.

Jayanti Prasad [prasad.jayanti@gmail.com]
Jnauary 06, 2020 

**************************************************************/


struct Node {
   int data;
   Node *next;
};


void iterate (Node *head){
  Node *tmp; 
  int count; 
  tmp = head;
  count = 0;
   while (tmp != NULL) {
      cout << "Node: " <<  count << ", data: " << tmp->data  << "\n" << endl;
      tmp = tmp->next;
      count+=1;
   }
}


int main(){

  Node A, B, C, D, E, *head; 
  int count;

  A.data = 1;
  B.data = 2;
  C.data = 3;
  D.data = 4;

  A.next = NULL; head = &A;
  B.next = &A; ; head = &B;
  C.next = &B; ; head = &C;
  D.next = &C; ; head = &D; 

  iterate (head);

  cout << "dropping node 2 " << endl;

  C.next = & A;

  iterate (head);
}
