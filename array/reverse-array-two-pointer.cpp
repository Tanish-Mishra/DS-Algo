#include<iostream>

using namespace std;

void inputarray(int * arr,int n){
   for (int i = 0; i<n; i++){
   	cin>>arr[i];
   }
}

void reversearray(int * arr,int n);

int main(){

	int n;
	cin>>n;

	int arr[n];
    inputarray(arr,n);
    reversearray(arr,n);

    //output of Array

    for(auto x : arr){
    	cout << x << ",";
    }


	return 0;
}

void reversearray(int * arr, int n){
   int s = 0;
   int e = n - 1;

   while(s<e){
   	swap(arr[s],arr[e]);
   	s++;
   	e--;
   }
}