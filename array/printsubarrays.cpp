#include<iostream>

using namespace std;

void printsubarrays(int * arr,int n){
	
	for(int i = 0; i<n; i++){

		
		for(int j = 0;j<n;j++){
		
			for(int k = i;k<=j;k++){
		
				cout << arr[k] << ",";
		
			}
		
			cout<<endl;
		
		}
		
		cout<<endl;
	}
}

int main(){
	int n;

	cin >> n;
	
	int arr[n];
	
	for(int i =0;i<n;i++){
  
      cin >> arr[i];		
	
	}
  
  printsubarrays(arr,n);
	

	return 0;
}