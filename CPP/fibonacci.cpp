#include<iostream>
using namespace std;

int fib (int n, int *d){
    int x, a, b; 
    if (n == 0){
       d[n] = 0;
       return  0;
     }
    if (n==1){
        d[n] = 1;
        return 1;
        }        
    else {
       if (d[n-2] !=0){
          a = d[n-2]; 
          cout << "not computing " << endl;
       }else {
          a = fib (n-2, d);
       }
       if ( d[n-1] !=0){
          b = d[n-1];
          cout << "not computing " << endl;
       } else {
          b = fib(n-1, d);
       }
       x = a+b;
       d[n] = x; 
       return  x; 
      }
  }

int main (int argc, char *argv[]) {
   int n;
   int *d;

   cout << "Give the numbers to be printed " << endl;

   cin >> n;
   cout << "You gave given: " << n << endl;

   d =  new int [n]; 

   int  j = fib (n, d);

   cout << "f=" << j << endl; 

   for (int i=0; i < n; i++)
      cout << d[i] << endl; 

 
}
