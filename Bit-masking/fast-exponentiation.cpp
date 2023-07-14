#include <iostream>

using namespace std;

// find a to the power b 

// Time complexity for this fast_exponentiation is logb near by logb its the no of the bits time 
void fast_exponentiation(int a,int n) {

   int ans = 1;

    while(n>0) {

      int last_digit = n & 1;

      if(last_digit) {
      	ans = ans * a;
      }

      a = a * a;
      n = n >> 1;
    }
    
   cout << ans;



}
int main() {


 int a,n;

 cin >> a >> n;

 fast_exponentiation(a,n);




	return 0;
}