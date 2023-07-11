#include <iostream>

using namespace std;

void clearIthBit(int &n,int i){
  int mask = ~(1<<i);
  n = n & mask;
	return;
}
  
void updateIthBit(int &n,int i,int v){
  
  clearIthBit(n,i);

  int mask = (v<<i);

  n = (n | mask);
 

	return;
}
 
int main(){

int n,i,u;
cin >> n >> i >> u;


updateIthBit(n,i,u);

cout << "After Updating the Ith Bit Number is " << n << endl;




	return 0;
}