#include <iostream>

using namespace std;

bool even_odd(int n){
     if(n&1){
     	return true;
     } else {
     	return false;
     }
}

int main() {

    // Find wheather the number is even or odd using the bitwise operator

   int n;
   cin>>n;

   string ans =  even_odd(n) ? "Odd" : "Even";

   cout << ans;
 	return 0;
}