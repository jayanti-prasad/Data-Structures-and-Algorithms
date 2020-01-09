#include<iostream>
using namespace std;

class Node {

  public :
     int data;
     Node *left;
     Node *right; 
 
     Node (int data_1){
        data = data_1;  
        left = NULL;
        right = NULL;
    }
};



class BTree {

    public:
       Node *root;
       int num_nodes;
     
       BTree (){
          root = NULL; 
       }  

      void add_node (Node *p, Node*n){
         if (root == NULL)
            root = p;   

         if (p-> left == NULL) {
             p-> left = n;
         } else if (p ->right == NULL){
             p-> right = n;
         } else {
          cout << "Wrong parent" << endl; 
        }
        
      }
 
       void iterate () {
         Node *n; 
         n = root; 

        do {
           cout << n->data << end;
           n = n->left; 

        }while (n != NULL); 

 
       } 


};


int main (int argc, char *argv[]){

    BTree T;

    T = BTree(); 
   
    Node A = Node (1);
    Node B = Node (2);
    Node C = Node (3);
    Node D = Node (4);
    Node E = Node (5);
    Node F = Node (6);

    T.add_node (&A, &B);
    T.add_node (&A, &C);
    T.add_node (&B, &D);
    T.add_node (&C, &E);
 

}



