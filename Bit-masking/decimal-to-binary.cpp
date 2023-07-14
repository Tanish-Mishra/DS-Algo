#include <iostream>

using namespace std;

void decimal_to_binary(int n){

   int ans = 0;
   int p = 1;

   while(n>0){

    int last_digit = n & 1;
    ans = ans + last_digit * p;
    p*=10;
    n = n >> 1;



   }


  cout << ans;
	return;
}

int main() {

  int n;
  cin >> n;

  decimal_to_binary(n);


	return 0;
}