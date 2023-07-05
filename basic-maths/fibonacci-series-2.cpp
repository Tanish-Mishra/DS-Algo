#include <iostream>

using namespace std;
 
 //Problem Statement  - Print the last digit of the fibonacci series 

int main() {

  int n;
  cin>>n;

  int a = 0;
  int b = 1;

  if(n==0){
  	cout << "The last Digit of the fibonacci Series is " << a;
  } else if(n==1){
  	cout << "The last Digit of the fibonacci Series is " << b;
  } 


  int c = a + b;

  int i = 2;

  while(i<=n){
     
     c = a + b;

     a = b;
     b = c;


  	i++;
  }
  
  cout << "The last Digit of the fibonacci Series is " << c;

	return 0;
}