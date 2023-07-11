#include <iostream>

using namespace std;

int main() {


 // arrays automatically can increase their size we need to dyanmically allocate so that they can increase their size of the runtime as given by the user and we need to delete this array because they are create in the heap memory
 int n;
 cin >> n;
 int * arr = new int[n];
 // for each loop to fill the array
  
   for(int i = 0;i<n;i++) {
   	cin >> arr[i];
   }

   //printing the array 

   for(int i = 0;i<n;i++){
   	cout << arr[i] << " ";
   }

   // we need to delete this dynamic allocated memory because occupies space in the memory compiler does not delete it because it is in a heap memory

   delete [] arr;

   return 0;
}