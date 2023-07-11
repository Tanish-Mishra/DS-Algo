// traversal basically means iterating over every character and print it 
 
 #include <iostream>
#include <cstring>
 #include <string>

using namespace std;

int main() {

    // char traversal and string traversal 

    char newOne[1000];

    cin.getline(newOne,1000);

    for(int i = 0;i<strlen(newOne);i++){
        cout << newOne[i] << " ";
    }
    cout << endl;

    // or

    for(int i = 0;newOne[i] != '\0';i++){
        cout << newOne[i] << " ";
    } 

    cout << endl;

 
    // string traversal 

    string name;
    getline(cin, name, '\n');

    // length() is defined in the string class we can use to get the length of the string

    for(int i = 0;i<name.length();i++){
        cout << name.at(i) << " ";
    } 

      cout << endl; 

      // oR we can use for each loop

      for (auto x : name){
        cout << x << " ";
      }
	return 0;

}