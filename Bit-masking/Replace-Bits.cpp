#include <iostream>

using namespace std;

/*

    Replace Bits in N by M 

    You are given tow 32 bit Numbers , N and M , and two bit Positions i and j

    write a method to set all bits between i and j in N equal to M 

    M(becomes a substring of N locationed at at i and substring of j)


       */

void clearBits(int &n,int i,int j){

	int a = (~0 << (j+1));
	int b = (1 << i) - 1;

	int mask = a | b;

	n = n & mask;

}

void Replace_Bits(int &n,int m,int i,int j){

clearBits(n,i,j);

int mask = m << i;

n = n & mask;

cout << "The Number after Replacing the Bits is " << n << endl;

}
int main() {


    int n,m,i,j;

    cout << "Input in the order N first then M , I , J" << endl;

    cin >> n >> m >> i >> j;
     
     Replace_Bits(n,m,i,j);



	return 0;
}