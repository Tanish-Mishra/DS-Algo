#include <iostream>

using namespace std;
 // To get the ith bit of the given number 
int get_IthBit(int n,int i){

	int mask = 1<<i;

	  return (n&mask) > 0 ? 1 : 0;


}

int main() {

  int n,i;
  cin >> n >> i;

  cout << get_IthBit(n,i);

	return 0;
}