#include <iostream>

using namespace std;

void passByReference(int &views){

     views = views + 1;
     

}

int main() {


int views = 100;

passByReference(views);

cout << views << endl;


	return 0;
}