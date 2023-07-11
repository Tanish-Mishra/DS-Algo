#include <iostream>
#include <vector>
using namespace std;

int main() {
   int n; 
   cin >> n;

   // This is how we initialise the vector array they are dynamic and they can expand their size initially we what size we initiate it with it takes that and as it fulls it doubles it self
   vector<int> arr1;

   arr1= {3,3,42,6};

   cout << arr1[3] << endl;

    vector <int> arr = {2,32,1,2,2};

  cout << arr[2] << endl;
 
  // print the array using the loop 
  for (int i = 0;i<arr.size();i++){
       
        cout << arr[i] << " ";

  }
  // we can print all the elements using the for each loop 

  for(int x : arr){
  	cout << x << " ";
  }
   


	return 0;
}