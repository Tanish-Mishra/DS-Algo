#include <iostream>

using namespace std;

// check wheather the number is power of 2 or not 

void powerOf2(int n) {

     int ans = (n & (n-1));

     if(ans == 0){

     	cout << "The number is the power of 2" << endl;
     } else {

     	cout << "The number is not power of 2" << endl;
     }

	
}

int main() {


  int n;
  cin >> n;

  powerOf2(n);

	return 0;
}