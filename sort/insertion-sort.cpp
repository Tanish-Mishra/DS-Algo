#include <iostream> 

using namespace std;

void insertionSort(int * arr,int n){

	for(int i = 1;i<=n-1;i++){
		   int current = arr[i];
		   int prev = i - 1;

		   // we are making space for the current element where it should get inserted 

		   while (prev >=0 && arr[prev] > current){

		   	 arr[prev + 1] = arr[prev];
		   	  prev = prev - 1;
		   }

		   arr[prev + 1] = current;
	}

}

void inputArray(int * arr, int n){

	//Input of the Array

	for(int i = 0;i<n;i++){
		cin>>arr[i];
	}
}

int main() {
     int n;
     cin>>n;

     int arr[n];

     inputArray(arr,n);
     insertionSort(arr,n);

     // Print the Sorted Array 

     for(auto x : arr){
     	cout << x << ",";
     }


     
	return 0;
}