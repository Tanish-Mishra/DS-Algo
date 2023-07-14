// check wheather the array is sorted or not using recursion

#include <iostream>

using namespace std;

bool isSorted(int arr[],int n) {
  
  if(n==1 || n==0){

  	return true;

  }

  if(arr[0] < arr[1] && isSorted(arr+1,n-1)){
  	return true;
  }


return false;




}

bool anotherWayIsSorted(int arr[],int i,int n){
	if(i== n -1){
		return true;
	}

	if(arr[i] < arr[i+1] && anotherWayIsSorted(arr,i+1,n)){
		return true;
	}
	return false;
}

int main() {

	int arr[] = {3,1,6,8};
	int size = sizeof(arr) / sizeof(int);

	cout << isSorted(arr,size) << endl;

	cout << anotherWayIsSorted(arr,0,size);




	return 0;
}