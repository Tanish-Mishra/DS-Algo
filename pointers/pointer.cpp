#include <iostream>

using namespace std;

void passbyPointers(int * views);

int main() {

	// & is the operator used to showcase the address of the variable 

	 int x = 5;
	 cout << &x<< endl;

   // Pointer variable stores the address of the other variable 
   
   int * ptr = &x;

   cout << ptr << endl;

   // Dereference operator - Pointer variable points to the address of the operator but if we use dereference operator it will point to the bucket containing the value 

   int y = 10;
   
   int * ptr2 = &x;

   cout << "The address of the variable x is " << y << endl;

   cout << "The bucket ptr2 is point to the bucket is given by the dereference operator is " << *ptr2 << endl;

   // null Pointer is define as the 

   int * ptr3 = 0;
   int * ptr4 = NULL;

   // If we try dereference the null pointer it gives the segmentation fault we can not dereference the null pointer

   // Pass by Pointers - Basically instead of passing the copy of the value to the function we pass the actual address which points to the acutal value and we can make operatios directly to the variable

    int views = 100;
    cout << views << endl;
    passbyPointers(&views);
    cout << "The new value of the pointers is " << views << endl;


	return 0;
}

void passbyPointers(int * views){

	*views = *views + 1;

}