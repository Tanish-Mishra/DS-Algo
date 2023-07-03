#include<iostream>

using namespace std;

void selectionsort(int arr[],int n);
int main(){

   int n;
   cin>>n;
   int arr[n];

   // input the arrray

   for(int i = 0; i < n;i++){
   	cin>> arr[i];
   }
  selectionsort(arr,n);
  //output

  for(auto x: arr){
  	cout << x << ",";
  }

	return 0;
}

void selectionsort(int arr[],int n)  {
 

  for(int pos = 0;pos<n-1;pos++){
     int current = arr[pos];
  	 int min_ele = pos;

  	 
  	 //logic 
  	 for(int j = pos;j<n;j++){
  	 	if(arr[j] < arr[min_ele] ){
  	 		min_ele = j;
  	 	}
  	 }

  	 swap(arr[pos],arr[min_ele]);
     }
   }