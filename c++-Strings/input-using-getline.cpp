#include <iostream>
#include <string>
using namespace std;

int main() {
      
     string s1;
      
      // cin >> s1; // but it does not read the white spaces 
      // cout << s1 << endl;

      // getline(cin,nameofString,dilimeter) by default dilimeter is newline(\n)

      getline(cin,s1);

      cout << s1 << endl;

      getline(cin,s1,'#');

      cout << s1 << endl;


	return 0;
}