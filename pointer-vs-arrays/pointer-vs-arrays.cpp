#include <iostream> 

using namespace std;

int main() {



int arr[] = {3,2,4,5};

//arr is the base address of the array

//arr acts like the constant pointer variable which cant be further modified as like the other pointer variables

cout << arr << endl;

// same as the arr base address of the array
cout << &arr[0] << endl;

// ptr is the pointer variable storing the arr base address of the array

int * ptr = arr;

// ptr is the pointer variable storing the arr base address + 1 means next address of the 0th index it means the address of the 1st index
int* ptr2 = arr + 1;

cout << ptr2 << endl;

cout << ptr + 1 << endl;

// Dereferencing the (ptr + 1) means the 1st index bucket it gives the value of the 1st bucket in the array
   
cout << *(ptr + 1) << endl;

// How compiler breaks the values is same thing as the above one is *(arr+1) and we write it as arr[1] both are the same thing 

cout << arr[1] << endl;

// Compiler breaks it as 

cout << *(arr+1) << endl;

// Pointer Arithmetic (++.--.+=some integer,-=someinteger,ptr1 + ptr2(not valid operation),ptr1-ptr2(valid operation and useful operation))

// ++

cout << ptr++ << endl;

// -- 

cout << ptr-- << endl;

// +=

ptr+= 3;

cout << ptr << endl;

ptr -= 3;

cout << ptr << endl;

// Subtracting the two pointer variables gives us the no of elements between them that s why in some cases it is useful 

int * path1 = arr;
int * path2 = arr + 3;

cout << path2 - path1 << endl;


// Pointer to an Array (Pointer to the whole array not the single array element)

// This is the pointer variable to the array containing 4 elements 
int (*pointer)[4];
 pointer = &arr;

 // This will point to some other address not the element after the 0th index address because it s pointer to the while array

 cout << pointer + 1 << endl;


 // Dereferencing Pointer to an array ( we can say that they are the row pointers)

 cout << *(*(pointer) + 0) << endl;

 cout << *(&arr) << endl;








}