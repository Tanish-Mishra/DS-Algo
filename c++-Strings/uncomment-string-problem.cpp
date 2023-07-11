#include <iostream>
#include <string>
using namespace std;

string uncomment(string s){

   int index1 = s.find("/*");
   int index2 = s.find("*/");

     int start = index1 + 2;
     int end = index2 - start;

     return s.substr(start,end);
  

}

int main() {
 

   string comment = "     /*   Hello   */";

   string newString = uncomment(comment);
   
   cout << newString << endl;

	return 0;
}