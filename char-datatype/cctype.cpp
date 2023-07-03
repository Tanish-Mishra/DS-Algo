#include <iostream>
#include <cctype>
using namespace std;

int main() {

 char ch;

 ch = cin.get();

 // conversion function

 ch = toupper(ch);

 cout << ch << endl;

 ch = tolower(ch);

 cout << ch << endl;

 // Testing Function

 if(isupper(ch)){
 	cout << "UpperCase" << endl;
 } else if(islower(ch)){
 	cout << "Lowercase" << endl;
 } else if (isdigit(ch)) {
 	cout << "CH is a digit" << endl;
 } else if(isspace(ch)) {
 	cout << "Space is Given " << endl;
 } else if(isalpha(ch)){
 	cout << "It is alpha" << endl;
 } else {
 	cout << "I am not Programed as where this input is Defined ! Sorry :)" << endl;
 }


	return 0;
}