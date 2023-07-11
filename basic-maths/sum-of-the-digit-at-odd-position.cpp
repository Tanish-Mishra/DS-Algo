#include <iostream>

using namespace std;

/* 

  Problem statement - Write the sum of the digits at the odd position

  eg - 2348

  so the no at odd place we need the sum of those - 2 + 4 hence they are at positon 1 and 3;

  */

int main() {
  
  int n;

  cin >> n;

  int temp = n; 
  int sum = 0;
  int count = 0;

  while(temp!=0){
    count++;
    temp /=10;
  }

  if(count % 2 == 0){
    bool add = false;
    while(n!=0){
      int last_digit = n % 10;
      if(add){
        sum += last_digit;
      }
      add ^= 1; // XOR operator when both are true ans will be 0 and both are false it will become true otherwise it will be true always 
      n /=10;
    }  
  }
    else {
      bool add = true; 
      while(n!=0){
        int last_digit = n % 10;
        while(n!=0){
          if(add){
            sum += last_digit;
          }
          add ^= 1;
          n /= 10;
        }
      }
    }

  cout << "The sum at the odd digits is " << sum << endl;
  return 0;

  }



	
