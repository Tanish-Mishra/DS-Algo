#include <iostream>

using namespace std;

int main() {

char ch = 'A';

cout << ch << endl; // It will print A only

cout << ch + 1 << endl; // It will print 66 because A is stored as int val 65 and we increment 1 in it so its 66  and we if add char + int so its int. Priority order float -- int -- char -- bool 

ch = ch + 1; // It will be 66 but we are storing it again in a char datatype so it will giver a character 

cout << ch << endl; // Output will be a character (Integer 66 is assigned as B in a ASCII Table)


	return 0;
}