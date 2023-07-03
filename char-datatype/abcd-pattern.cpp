#include <iostream> 

using namespace std;

/* 

AA
ABBA
ABCCBA
ABCDDCBA


*/

int main() {

 int n; 
 cin >> n;
 
 for(int i = 1; i <= n; i++) {
   char val = 'A';
   for(int j=1; j<=i; j++ ) {
   	cout << val;
   	val++;
   }

   val = val - 1;

   for(int j = 1;j<=i;j++){
   	cout << val;
   	val--;
   }
   cout << endl;


 }


	return 0;
}