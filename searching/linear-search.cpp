#include<iostream>

using namespace std;
int linearsearch(int * arr,int n,int key){
	for(int i = 0; i < n; i++){
          if(arr[i]==key){
          	return i;
          }
	}

	return -1;
}

void arrayinput(int arr[],int n){
	for(int i = 0;i < n;i++){
		cin>> arr[i];
	}
}


int main() {

	 int n;
	 int key;
	 cin>>n>>key;
      
	 int arr[n];

     arrayinput(arr,n);
     linearsearch(arr,n,key);
   
   for(auto x: arr){
   	cout << x << ",";
   }

   int ans = linearsearch(arr,n,key);
   if(ans != -1){
   	 cout << "Element is present at the index" <<  ans;
   } else {
   	cout << "No is not present at the index you want" << endl;
   }



	return 0;
}