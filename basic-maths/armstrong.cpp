#include <iostream>

using namespace std;

/*
Armstrong Number are the numbers - 

eg. 153 

The no of digits the no have we have to do to that power of every number

153 = 1*1*1 + 5*5*5 + 3*3*3  if this is equal to the input number here which is 153 hence its a armstorng number

*/

// Print 1 if the no is armstrong and print 0 if the number is not armstrong 

int main() {

  int n,sum,cubes;
 cout << "enter the no n" << endl;
  cin >> n;
  
  int temp = n;
  sum = 0;

  for(;n!=0;n = n / 10){
 
  	  cubes = (n%10)*(n%10)*(n%10);
  	  sum = sum + cubes;
  }

  if(sum==temp){

  	cout << "The Number is ArmStrong";
  } else {
  	cout << "The Number is not ArmStrong";
  }


	return 0;
}