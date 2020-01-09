#include <iostream>
using namespace std; 

class Node { 
    public: 
       int key; 
       vector <Node*>  child; 

	Node(int data)  { 
	    key = data; 
	} 
}; 


int numberOfChildren(Node* root, int x)  {
     int numChildren = 0; 
     if (root == NULL) 
	    return 0; 

     // Creating a queue and pushing the root 
     queue <Node*>  q; 
     q.push(root); 

     while (!q.empty()) { 
	  int n = q.size(); 

	   // If this node has children 
	   while (n > 0) { 

	          // Dequeue an item from queue and 
		  // check if it is equal to x 
		  // If YES, then return number of children 
		  Node* p = q.front(); 
		  q.pop(); 
		  if (p->key == x) { 
			 numChildren = numChildren + p->child.size(); 
			 return numChildren; 
		  } 

		  // Enqueue all children of the dequeued item 
		  for (int i = 0; i < p->child.size(); i++) 
		      q.push(p->child[i]); 
		  n--; 
		} 
	} 
	return numChildren; 
  } 

// Driver program 
int main() 
{ 
	// Creating a generic tree 
	Node* root = new Node(20); 
	(root->child).push_back(new Node(2)); 
	(root->child).push_back(new Node(34)); 
	(root->child).push_back(new Node(50)); 
	(root->child).push_back(new Node(60)); 
	(root->child).push_back(new Node(70)); 
	(root->child[0]->child).push_back(new Node(15)); 
	(root->child[0]->child).push_back(new Node(20)); 
	(root->child[1]->child).push_back(new Node(30)); 
	(root->child[2]->child).push_back(new Node(40)); 
	(root->child[2]->child).push_back(new Node(100)); 
	(root->child[2]->child).push_back(new Node(20)); 
	(root->child[0]->child[1]->child).push_back(new Node(25)); 
	(root->child[0]->child[1]->child).push_back(new Node(50)); 

	// Node whose number of 
	// children is to be calculated 
	int x = 50; 

	// Function calling 
	cout << numberOfChildren(root, x) << endl; 

	return 0; 
} 

