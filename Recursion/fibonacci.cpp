#include <iostream>

using namespace std;

int fibo_ans(int n) {


 if(n==0 || n ==1){
 	return n;
 }
  
  int fib1 = fibo_ans(n-1);
  int fib2 = fibo_ans(n-2);

  return fib1 + fib2;


}

int main() {


  int n;
  cin >> n;

  int ans = fibo_ans(n);

  cout << ans;


	return 0;
}