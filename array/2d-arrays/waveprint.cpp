#include <iostream>

using namespace std;
void wavePrint(int arr[][100],int rows,int cols){
   cout << "The WavePrint of the Array is " << endl;

   for(int col = 0; col< cols; col++) {

   	 if(col%2==0){
   	 	for(int row = 0;row<=rows-1;row++){

   	 		cout<< arr[row][col] << " ";
   	 	}
   	 }

   	 else {
   	 	for(int row = rows-1;row>=0;row--){
   	 		cout << arr[row][col] << " ";
   	 	}
   	 }
   
   }
}

void inputArray(int arr[][100],int rows,int cols){
   for(int i = 0;i <rows;i++){
   	for(int j = 0;j< cols;j++){
   		cin>>arr[i][j];
   	}
   }
}
int main() {
   
  
  int arr[100][100];
  int rows,cols;
  cin>>rows>>cols;
  inputArray(arr,rows,cols);
  wavePrint(arr,rows,cols);


	return 0;
}