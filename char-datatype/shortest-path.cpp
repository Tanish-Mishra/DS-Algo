#include <iostream>

using namespace std;

/* Suppose you want to go to a location, located at (X,Y) starting from origin (0,0).
   Your friend tells you a long way by telling the steps you should walk in each direction (N,W,E OR S).
   Find the shortest path. Input and Output is a string, Refer Example

   Input: NNNEEWS

   Output : NNE

   Logic - 


 */

int main() {

	char ch;
	int x=0,y=0;

	while(ch!='\n'){

		ch = cin.get();

		switch(ch){
		case 'N' : y++; break;
		case 'S' : y--; break;
		case 'E' : x++; break;
		case 'W' : x--; break;
		}
	}
 if ( x == 0 && y ==0 ){
 	cout << "Still at Origin (0,0)" << endl;
 }
	if(x>=0 && y >= 0){
		for(int j = 1;j<=y;j++){
			cout<<"N";
		}
		for(int i = 1; i<=x;i++){
			cout <<"E";
		}
	} else if(x < 0 && y > 0) {
		for(int j = 0;j<y;j++){
			cout << "N";
		}
		for(int i = x;i<0;i++){
			cout<<"W";
		}
	} else if (x > 0 && y < 0){
		for(int j = y;j<0;j++){
			cout<<"S";
		}
		for(int i = 0; i<x;i++){
			cout <<"E";
		}

	} else if (x < 0 && y < 0){
		for(int j = y;j<0;j++){
			cout<<"S";
		}

		for(int i = x;i<0;i++){
			cout<<"W";
		}

	} else {
		cout << "Invalid Input" << endl;
	}

	return 0;
}