#include <iostream>

using namespace std;

int main() {

// char array declaration of size 10;

	char names[10];

// It is always to be done that char arrays should be terminated by null-terminated by null character (\o) because we can print 
  





	char names1[10]{"Tanish"};
	char naems3[10] = {"Tanish"};
	// This is how names is initialisation with name Tanish as a String literal (String literal are always null terminated we dont need to use null character after the end
	char names2[3] = {'a','b','\0'};  // This is normal char array intialisation with char at their indexes and we need to put null character in the end it is mandatory

	// we can print char array using the cout because it has special functionality and it prints the char array until it finds the null character(\0) if it cross the array size it will keep on printing garbage values until it gets the null character thats why it is madatory to use the null character at the last index

    cout << names2 << endl;

    // To print the length of the array we can use strlen(nameofarray)  and strlen() functionality automatically ignores the null character(\0) in the end and it doesnot count that;


  cout << strlen(names2) << endl;




	return 0;
}