        // You are given a binary number and you need to conver it in a decimal form 
#include <iostream>

using namespace std;
 
void binary_to_decimal(int n) {
	int ans = 0;
	int p = 1;
	while(n>0){
		int last_digit = n % 10;
		ans = ans + last_digit * p;
		p*=2;
		n/=10;
	}

	cout << ans << endl;
}
int main() {


  int n;
  cin >> n;
  binary_to_decimal(n);




	return 0;
}