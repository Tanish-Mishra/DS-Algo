#include <iostream>

using namespace std;

// find a to the power b 

// Time complexity for this fast_exponentiation is logb near by logb its the no of the bits time 

void fast_exponentiation(int a,int b) {

	int ans = 1;

	while(b>0){
		int last_bit = (b&1);
		if(last_bit){
			ans = ans * a;
		}
		b = b >> 1;
		a = a * a;
	}

	cout << ans;
   
}

int main() {

int a,b;
cin >> a >> b;

fast_exponentiation(a,b);

	return 0;
}