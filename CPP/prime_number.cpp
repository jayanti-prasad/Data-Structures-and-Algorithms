#include<iostream>
#include<vector>

using namespace std;

void prime_numbers  (int n1, int n2, vector <int> *p) {
   int i, j;
   vector <int> v;
   bool c; 

   for (i=n1; i < n2; i++){
     c = true; 
     for (j=2; j < i; j++){
        if ( i % j ==0 && c== true ){
         c = false ; 
        }
      }

     if(c == true ) 
       v.push_back (i); 
     }

     *p = v; 
}

int main (int argc, char *argv[]){

   int n1 = atoi(argv[1]);
   int n2 = atoi(argv[2]);
   vector <int> v;

   cout << "Prime between " << n1 << " & "  << n2 << endl; 

   prime_numbers  (n1, n2, &v);

   for (int i=0; i < v.size(); i++)
      cout << v[i] << endl; 

}
