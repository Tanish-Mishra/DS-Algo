#include<iostream>

using namespace std;

void bubblesort(int arr[],int n){

for(int i = 1;i<=n-1;i++){
   for(int j = 0; j < n-1-i;j++){
   	if(arr[j]>arr[j+1]){
   		swap(arr[j],arr[j+1]);
   	}
   }
}

}

int main(){

          //bubble sort

	int n;
	cin>>n;

	int arr[n];

	//input 

	for (int i = 0; i<n;i++){


          cin>>arr[i];

	}
     
     bubblesort(arr,n);

     //output 

     for(auto x: arr){
     	cout << x << ",";
     }



	return 0;
}