#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;
 
 // Take a input a string terminated with a '$'
 // Count the number of letters ,digits ,whitespaces, other special symbols before $

// eg - hello5 word $ 

// It should print 1 digit 9words 2 whitespaces 

int main() {

   char input[1000];
   int letters = 0,digits=0,whitespaces=0,symbols=0;

   cin.getline(input, 1000, '$');

   for(int i = 0;input[i] != '\0';i++) {

   	 char ch = input[i];

     if(isdigit(ch)){

        digits++;

     } else if(isalpha(ch)){
     	letters++;
     } else if (isspace(ch)){

     	whitespaces++;

     }


   }
 
  cout << "Alphabets " << letters << endl;
  cout << "Numbers " << digits << endl;
  cout << "whitespaces " << whitespaces << endl;
   symbols = strlen(input) - digits - letters - whitespaces;
   cout << "symbol " << symbols << endl;

	return 0;
}