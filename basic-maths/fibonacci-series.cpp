#include <iostream> 

using namespace std;

/* 
    Fibonacci Series 
    n = 5 

    0 1 1 2 3 

    first a = 0 ;
    second b = 1; then we keep on chaning values 

    */

int main() {

	int n;
	cin >> n;

   int a = 0;
   int b = 1;

   if(n==0){
    return -1;
   }else if(n==1){
    cout<< 1;
   } 
     if(n>=2){
     cout << a << " " << b << " ";
}
   int i = 2;
   while (i<n) {
   
    

      int c = a + b;

      
        cout << c << " ";
      
      a = b;
      
      b = c;
      
      i++;


   }

   
	 return 0;
}