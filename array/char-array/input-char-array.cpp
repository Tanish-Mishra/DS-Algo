#include <iostream> 

using namespace std;

int main() {
  
     // char greeting[100];
    // We can input  char array using cin but the issue is it cannot read the white spaces and it terminates there it does read after that;


    // cin >> greeting;
   
    // cout << greeting << endl;
   
    // cout << "Input using the cin.getline() By default cin.getline() stops taking input when   newline /n means reverse of it is hit" << endl;
   
     // syntax for cin.getline(nameOfCharArray,LengthOfArray,dilimeter(where this stops taking the input by default it stops taking at the newline as we hit enter(\n)))
   
   char newGreeting[100];

   // cin.getline(newGreeting, 100);

    // we can pass dilimeter as well where it should stop taking the input like what character is entered 

    cin.getline(newGreeting, 100, '#');
  
  cout << newGreeting;  

  cout << endl;

  cout << strlen(newGreeting) << endl;
  



	return 0;
}