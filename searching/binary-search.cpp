#include<iostream>

using namespace std;
int binarysearch(int arr[],int n,int key){

  int s = 0;

  int e = n -1;

  while(s<=e){

   int mid = (s+e/2);

   if(arr[mid]==key){

      return mid;

   }else if(arr[mid]>key){

      e = mid - 1;

   } else {

      s = mid + 1;
   }

  }


   return -1;
}
int main(){

   int n,key;
   cin>>n>>key;
   int arr[n];


   //input in the array

   for(int i = 0; i<n;i++){
   	cin>>arr[i];
   }

  int index = binarysearch(arr,n,key);
  if(index!=-1){
   cout << "The index at which the key is present " << index <<endl;
  } else {
   cout << "The index is not present"<< endl;
  }



	return 0;
}