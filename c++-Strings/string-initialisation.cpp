#include <iostream>
#include <string>
using namespace std;

int main() {

  string name = "Tanish";
  cout << name << endl;
  string newName;
  newName = "Mishra";

  cout << newName << endl;


  string s1{"Tanish"};

  cout << s1 << endl;
  string s2{s1}; // holds the same value as s1
  cout << s2 << endl;
  string s3{"Tanish",3}; // it will hold upto index 3
  cout << s3 << endl;
  string s4{"Tanish Mishra",3 ,6}; // it will hold upto starting with index 3 to 6
  cout << s4 << endl;
  string s5{3,'X'}; // It will hold "XXX" 3 times 
  cout << s5 << endl;

  string s6 = "Tanish Mishra";
  string s8 = "Mishra Op";
  s8= s8 + " Very op";
  cout << s8 << endl;
  s8 = s8 + s6;
   cout << s8 << endl;

   // To check out at what index what is 

   cout << s1[1] << endl;
    // Both are same thing
   cout << s1.at(1) << endl;  // this function is acutally define in the string class.


	return 0;
}