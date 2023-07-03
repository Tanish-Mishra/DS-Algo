#include <iostream>

using namespace std;

      // Passing a two dimensional array to function using Row pointer 

 void pass2dArray(int (*ptr)[4]){
       
       cout << ptr << endl;

       cout << ptr + 1 << endl;  // gives the address to the next row it pointer to next row

       // if we dereference it we get the value of the next row first col value 

       cout << *(ptr + 1) << endl;

       // To get the value of the particular element 

       int i = 1;
       int j = 3;

        cout << *(*(ptr + i) + j) << endl; // This same happens at the compiler level what compiler understands 

       // it is similar to 

        cout << ptr[i][j] << endl; 

	
 }

 void pass2dArrayAnotherWay(int arr[][4],int rows,int cols){
	
    cout << arr << endl;

    cout << arr[rows-1][cols-1] << endl;
          
 }

int main() {

int arr[3][4] = {{1,2,3,4},
                 {5,6,7,8},
                 {9,10,11,12}};

                 // Give the address of the element at the particular index  

 cout << &arr[0][1]  << endl;

  // How to get the address of the particular element in the 2 D array

   int (*ptr)[4];
   ptr = arr;

   // This is acutally a row pointer ptr + 1 will take you to the next row and to get the particular element add element index you want 
  
  cout << ((ptr  + 1) + 3) << endl;
     
    // This is acutally a row pointer ptr + 1 will take you to the next row and to get the particular element add element index you want and to dereference it

  cout << *(*(ptr +1)+3) << endl;  // This happens at the compiler level what compiler does (how compiler understands)

  // It is similar to 

  cout << arr[1][3] << endl;


 
   pass2dArrayAnotherWay(arr+1,2,4);  //arr + 1 means that it will skip the 0 the row and pass the row from first col sow out function will get the row from the 1st index that will be the 0th index for the function
  pass2dArrayAnotherWay(arr,3,4);
  pass2dArray(arr+1);
   pass2dArray(arr); 
   
  



	return 0;
}