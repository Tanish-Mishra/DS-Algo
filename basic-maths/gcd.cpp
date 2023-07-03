#include <iostream>
 
using namespace std;

int main() {

  int num1,num2;
  int gcd = 1;

  cin>> num1 >> num2;

  for(int i = 2; i <= min(num1,num2);i++) {

  	if(num1 % i == 0 && num2 % i == 0){
  		gcd = i;
  	}

  }


  cout << "The Gcd for the Given Values is " << gcd << endl;

}