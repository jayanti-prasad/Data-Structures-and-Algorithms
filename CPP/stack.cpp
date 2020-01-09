#include<stdio.h>
#include <stack>
using namespace std;

int main (int argc, char *argv[]){
   stack<int> s;


   s.push(1);
   s.push(2);
   s.push(2);
   s.push(3);
   s.push(4);

   s.pop();


   s.top();

}

