#include <iostream>

using namespace std;

// To make the ith bit as 1 

void set_Ith_bit(int &n,int i) {

    int mask = (1<<i);

    n = (n | mask);

}

int main() {

  int n,i;
 
 cin >> n >> i;

 set_Ith_bit(n,i);

 cout << n;

	return 0;
}