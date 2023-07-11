#include <iostream>

using namespace std;

int main() {

	// Refer to the notes 
  
  // Binary and 

	int a = 4;
	int b = 3;
    int anss = a&b;
    cout << anss << endl;
	

	// // Binary or 

	 int c = 3;
	 int d = 2 ;

    int ans = c|d;
    cout << ans << endl;

    // // Binary XOR (Exclusive OR) - if both bit are same then result gonna be zero 

    int e = 3;
     int f = 2;
       int ans2 =  e^f;

     cout << "The XOR for a ,b is" << ans2 << endl;

    // // Binary Not reverse the number 

     int g = 0;

    // // here output will be -1 because it will also change the most significant bit at bit level it will change to 0 but overall number will become -1.

     int ans3 = ~g;
      cout << "The not for a is "<<  ans3 << endl;

    //  // Binary left shift operator 

    int h = 3 ;
     int i = 2;
     int ans4 = h<<i;

      cout << "The left shifte of a to b is " << ans4 << endl;

    //  // Binary Right shift operator 

     int j = 4;
      int k = 7;
     int ans5 = j>>k;
      cout << "The right shift of a to b is " << ans5 << endl;



	return 0;
}