#include <iostream> 

using namespace std;

void clearIBits(int &n, int i){

	int mask = (-1<<i); //(~0 << i); ;

	n = n & mask;

}

int main() {

  int n,i;
  cin >> n >> i;
  clearIBits(n,i);
  cout << "After clearing the last i bits in rage the number is " << n << endl;





	return 0;
}