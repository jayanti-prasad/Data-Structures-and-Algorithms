#include<iostream>

using namespace std;

void swap(int* a, int* b)  {
    int t = *a;
    *a = *b;
    *b = t;
}

void print_array (int *data, int n){
    int i;
    for (i=0; i < n; i++)
       cout << data[i] << ","  ;
    cout << endl;
}


int   partition(int *arr, int low, int high){
    // returns the correct position of the pivot element 

    int i =  low -1;
    // index of smaller element 

    int pivot = arr[high];

    // # pivot 

    for (int j= low; j <  high; j++){

        //# If current element is smaller than the pivot 
        if   (arr[j] < pivot) {
             
            //# increment index of smaller element 
            i = i+1;
            swap (&arr[i], &arr[j]);
          }
   }

    swap (&arr[i+1], &arr[high]);
    return ( i+1);
}


void  quickSort(int *arr, int low, int high) {

    if (low < high) {

        /* pi is partitioning index, arr[pi] is now
           at right place */

        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);  // Before pi
        quickSort(arr, pi + 1, high); // After pi
    }
}


int main (int argc, char *argv[]){
  int *data, i;

  int  n = argc -1;

  data = new int [n];

  for (i=1; i < argc; i++)
      data[i-1] = atoi(argv[i]);

  quickSort(data, 0, n-1);

  print_array (data, n);

  free(data);

}

