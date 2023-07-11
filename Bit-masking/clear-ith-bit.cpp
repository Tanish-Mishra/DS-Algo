#include <iostream>

using namespace std;

void clearIthBit(int &n,int i){

	int mask = ~(1<<i);

	n = n & mask;

}

int main() {

 int a,i; 
 cin >> a>> i;



 clearIthBit(a,i);
 cout << a << endl;


	return 0;
}