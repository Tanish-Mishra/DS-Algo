#include <iostream>
#include <cstring>

using namespace std;

int main () {
 
 char greet[100];
// greet = "Tanish"; // not a valid operation to assign a string literal to the var name because we cannot assing anything to the name of the array because its acts like a pointer variable and holds the address of the array

 // To do this we have a function called  strcpy(dest,srd)

 strcpy(greet, "Tanish Mishra");


 cout << greet << endl;

 // contcatination of the string 
  
  char name[100];

  strcpy(name, "Hi ");

  strcat(name, "How are you man");

  cout << name << endl;

  // Find the substring in a string   strstr(string in which to find ,substring) if it kind find it returns a null pointer it return all the string after the substring we have provided


  char story[100];
    strcpy(story, "I love book on science ");

 char findStory[100];

 cin >> findStory;

 char * str = strstr(story, findStory);

 if(str == NULL) {
 	cout << findStory << " Not Found" << endl;
 } else {

 cout << strstr(story, findStory) << endl;
}
	return 0;
}