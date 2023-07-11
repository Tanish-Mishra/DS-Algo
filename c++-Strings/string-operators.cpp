#include <iostream>
#include <string>
using namespace std;

int main() {


    // ==,!=,>,>=,<=,+=,+

    string s1,s2;
    cin >> s1 >>s2;

    if(s1==s2){
    	cout << "Both are the Same" << endl;
    } else if(s1>s2){
    	cout << "s1 is greater than s2" << endl; // being greater or smaller means it compares character by character it compares the int value then it tells the first character it found its int value is greater or smaller so it acts accordingly if same then goes to another character 
    } else {
    	cout << "s1 is less than s2" << endl;
    }

    string name = "Tanish";
    string last_name = " Mishra";

     name += last_name;
     cout << name << endl;


	return 0;
}