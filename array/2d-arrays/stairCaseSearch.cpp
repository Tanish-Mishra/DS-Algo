#include <iostream>

using namespace std;

pair<int,int> staircaseSearch(int arr[][4],int n,int m,int key) {

	if(key < arr[0][0] && key > arr[n-1][m-1]){
		return {-1,-1};
	}
	int i = 0;
	int j = m-1;

	while(i<=n-1 && j>=0) {

		if(arr[i][j]==key){
			return {i,j};
		}else if( key > arr[i][j]){
			i++;
		} else {
			j--;
		}



	}

	return {-1,-1};
}

int main(){

      // Write a function that Searches for an element in row-wise and column-wise sorted 2d array

	int arr[4][4];
	int key;
	cin>>key;
	int rows = 4;
	int cols = 4;


   // input the array 

	for(int i = 0; i<4;i++){
		for(int j = 0;j<4;j++){
			cin>>arr[i][j];
		}
	}

	pair <int,int> ans = staircaseSearch(arr,rows,cols,key);
   cout << ans.first << ","<< ans.second << endl;

	return 0;
}