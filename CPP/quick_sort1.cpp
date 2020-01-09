#include<iostream>
using namespace std;

void swap(int* a, int* b)  {
    int t = *a;
    *a = *b;
    *b = t;
}

void print_list (int *d, int low, int high){
    for (int i=low; i < high; i++)
        cout << d[i] << ","  ;
    cout << endl;
}

int partition (int *d, int low, int high){
   int i, j, p;
   p = d[low];
   i =  low;
   j = high;

   do {

       do  {
           i++;
        } while ( d [i] < p && i < high);

       do {
         j--;
       }  while (d[j] > p  );
      
       if ( i <= j) 
          swap (&d[i], &d[j]);

    } while ( i <=   j); 
    swap (&d[j], & d[low]);
   return j;
}


void quicksort (int *d, int low, int high){
  int pivot;
  if (low < high) {
       pivot  = partition (d, low, high);
       quicksort (d, low, pivot);
       quicksort (d, pivot+1, high);

   }
}


int main (int argc, char *argv[]){
    int *d, n, j;
    
    d =  new int [argc];
    
    for (int i = 1; i < argc; i++)
       d[i-1] = atoi(argv[i]); 

    quicksort (d, 0, argc-1);

    print_list (d, 0, argc-1); 
}



