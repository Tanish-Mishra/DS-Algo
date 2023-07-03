#include <iostream>

using namespace std;
 // This is what happens behind the strlen() function
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


int length(char * arr) {

	int i;
 
	for( i = 0;arr[i]!='\0';i++){} // It does not count the null character
		return i;
}

int main() {


 char guessMylength[100];

   readLine(guessMylength, 100, '\n');

 cout << length(guessMylength) << endl;


	return 0;
}