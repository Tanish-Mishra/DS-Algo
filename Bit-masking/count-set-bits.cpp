#include <iostream>

using namespace std; 
  // count the set bits(1) of the number

int countSetBits(int n) {

  int cnt = 0;
// this is going to take logN time because no of bits in a decimal number is close to (logN + 1 ) bits
  while (n>0){
  	 int last_bit = (n & 1);
     cnt += last_bit;
    
    n = n >> 1;



  }

  return cnt;
}
int main() {

  
int n;
cin >> n;

int noOfSetBits = countSetBits(n);
 cout << noOfSetBits << endl;

	return 0;
}