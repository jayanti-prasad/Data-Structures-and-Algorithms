#include<iostream>
using namespace std;

void insertion_sort (int *d, int n) {

   int i, j, k;
   
   for (i = 1; i < n; i++){
      k = d[i];
      j = i -1;
      while (j >=0 && k < d[j] ) {
         d[j+1] = d[j];
         j = j - 1; 
      }
      d[j+1] = k; 
   }
    
}


int main (int argc, char *argv[]) {
   int *d; 
   d =  new int [argc]; 
   
   for (int i = 1; i < argc; i++)
      d[i-1] = atoi(argv[i]);

   insertion_sort (d, argc-1);

   for (int i =0; i < 6; i++)
       cout << d[i] << endl;
}




