#include <iostream>

using namespace std;

void clear_i_bits_in_range(int &n,int i,int j){

  int a = (-1<<(j+1));
  int b = (1<<i) - 1;
  int mask = a | b;

  n = n & mask;

  cout << n << endl;




	return;
}

int main() {


 int n,i,j;
 cin >> n >> i >> j;

 clear_i_bits_in_range(n,i,j);

	return 0;
}