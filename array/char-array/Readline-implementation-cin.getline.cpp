                    // Basically Implementation of the cin.getline(nameOfArray, lengthOfCharArray, dilimeter(where it should it stop taking input ('# or '!'))) by default it stops taking input at newline character

#include <iostream>

using namespace std;

// Problem : Create a ReadLine function to read character array without using library functions such as cin.getline
 // we dont need to terminate at whitespaces as well
// we dont need to exceed the array limit as well and we need to terminate at the dilimeter as well
// we need to read first and store the array 
// last char at the array should be null character 
 
 void readLine(char * greet,int length,char dilimeter){
  

     char ch;
     int cnt = 0;

     while(true){

           ch = cin.get();

           if(ch==dilimeter || cnt == length - 1 ) {
           	break;
           }

           greet[cnt] = ch;
           cnt++;


     }

     // terminate the char array with the null character

     greet[cnt] = '\0';


 }

int main() {


char greet[100];


readLine(greet, 100, '#');
cout << greet << endl;
 
 cout << strlen(greet) << endl;
	return 0;
}

