#include<iostream>
using namespace std;


     int binary_to_decimal(int binaryInteger) {
      int p = 1;
      int ans = 0;
      while(binaryInteger!=0){
          int last_digit = binaryInteger % 10;
          ans += last_digit * p;
          p *= 2;
          binaryInteger /= 10;
          
      } 
          return ans;

    }

      int main(){
      int n;
      cin >> n;

     cout << binary_to_decimal(n)<< endl;
     return 0;


      }
  
  
 