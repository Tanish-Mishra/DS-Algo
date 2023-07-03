#include <iostream> 

using namespace std;

  // Problem statement - Sum of the odd digit in a number for eg - 345 so sum of 5+3 = 8 so print 8 on the screen 
 
 int main () {

 	int n; 
 	cin>>n;
     int sum = 0;
 	int temp = n;

 	while (temp !=0){
        int last_digit = temp % 10;

      if(last_digit % 2 !=0){
      	sum += last_digit;
      }


 		temp = temp /10;
 	}

 	cout << "The sum of the odd digits in the number is " << sum << endl;

 	return 0;
 }