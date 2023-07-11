#include <iostream>
using namespace std;
 
int x=0;
int y=10;
void multiply(int a, int b){
    x=a*b; 
    int y=y+5;
    return;
}
 
int main() {
   int a=5,b=10;
   multiply(a,b);
   cout<<x<<endl; // Global variables can be accessed from anywhere. Here x will be updated because it is a global variable. Y will not be updates because it is re-declared inside the function.
   cout<<y<<endl;
 
}