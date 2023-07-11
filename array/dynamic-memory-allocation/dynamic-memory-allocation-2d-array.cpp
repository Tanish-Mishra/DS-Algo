#include <iostream>

using namespace std;
int ** create2dArray(int rows,int cols){
	// we dont need to define the array in the main we can still get the values because its a dynamic array if fuction calls get over the arr in the main will point to the address in the heap memory
	int ** arr = new int *[rows]; //  arr stores the address of array in heap there that address holds another address of the array in row thats why pointer to the pointer variable is user here 

     for(int i = 0;i<rows;i++){
     		arr[i] = new int[cols]; 
     }
  int value = 0;
     for(int i = 0;i<rows;i++){
     	for(int j = 0;j<cols;j++){

     		arr[i][j] = value; // same as   *(*(arr+i)+j)
     		value++;
     	}
     }
  return arr;
}
int main() {

	// we dont have direct way to create the dynamic memory allocation for the 2d arrays 
	int rows,cols;
	cin >> rows>> cols;


	  int ** arr = create2dArray(rows,cols);
   // printing the array
	   for(int i =0;i<rows;i++){
	   	 for(int j = 0;j<cols;j++){
	   	 	cout << arr[i][j] << " ";

	   	 }
	   	 cout << endl;
	   }

    

 // we dont delete the dynamic array thats why we can still access the elements because they are in heap memory even the fucntion call is over 


	return 0;
}