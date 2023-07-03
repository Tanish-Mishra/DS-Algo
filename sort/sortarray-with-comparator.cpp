#include<iostream>

using namespace std;

int main() {

    int n;
    cin>>n;

    int arr[n];

 //input 

    for(int i = 0; i<n;i++){
    	cin >> arr[i];
    }

    // sort using comparator

    sort(arr,arr+n,greater<int>());

    //output 

    for(auto x: arr){
    	cout << x << ",";
    }
	return 0;
}