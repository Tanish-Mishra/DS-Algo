#include <iostream>

using namespace std;

int main() {
    

    // First way
// It automatically enter the null character in the end
  char arr[][6] = {
  	  "Tanis",
  	  "Ayush",
  	  "Manis",
  	  "Mamta",
  	  "Inter",
  };
  
  //Printing of the Array 
    cout << arr[0] << endl; // It will print the whole row at once 
   for(int i = 0;i<6;i++){
   	 cout << arr[i][1] << endl;; // It will print the first index character of every row 

   }
   cout << endl;

   for(int i = 0;i<6;i++){
   	 cout << arr[i] << endl;
   }
/* 

cout treats the character arrays differently 
it is a behaviour that is conditionally written in the cout statement it  only happens for character arrrays not for any other types of arrays
here arr is the address but the cout treats it diffently


*/

  // second-messy-way 

  char newArr[][6] = {

    {'T','a','n','i','s','\0'},
    {'A','y','u','s','h','\0'},
    {'M','a','n','i','s','\0'},
    {'M','a','m','t','a','\0'},
    {'I','n','t','e','r','\0'},



  };

	return 0;
}