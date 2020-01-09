#include<iostream>
#include<cstdlib>
using namespace std;

void bubble_sort (int *d, int n){
   int i, j, tmp;
   cout << "number of elements:" << n << endl;   
   for (i=0; i < n; i++){
      for (j=i; j < n; j++){
         if (d[j] > d[i]) {
            tmp = d[i];   
            d[i] = d[j];
            d[j] = tmp; 
         }

      }
   }
}



int main (int argc, char *argv[]) {

    int *d; 
    int i;  
    d = new int [argc]; 
  
    for (i=1; i  < argc; i++) {
       d[i-1] = atoi(argv[i]); 
    }

    bubble_sort (d, argc-1);

    for (i=0; i < argc-1; i++)
        cout << d[i] << endl; 




}
