#include <iostream>

using namespace std;
  
 // Problem : Take input a letter ,identify if it is a 

/* 
- white space 
-Digit 0-9
-Upper case letter (A-Z) or Lower Case letter (a-z)
-special symbol (*,%,$) 
*/

int main() {

   char ch;
   ch = cin.get();

   if(ch == ' ' || ch == '\n'){

   	cout << "Whitespace"<< endl;

   } else if(ch >= 'A' && ch <= 'Z' ) {

    cout << "Upper Case Letter" << endl;

   } else if (ch >= 'a' && ch <= 'b') {

   cout << "Lower Case Letter" << endl;

   } else if(ch >='0' && ch<='9'){

    cout << "Digit" << endl;

   } else {
  
     cout << "Special Symbol" << endl;

   }


	return 0;
}