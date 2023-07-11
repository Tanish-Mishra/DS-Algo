#include <iostream>
#include <vector>
using namespace std;

int main() {

 vector <vector<int>> arr = {     // we can have differenent number of column in the vector
 	{2,34,3},  
 	{3,6,54,8,1},
 	{8,9,5,4,3},};

 	arr[0][0] = 10 ; // update compiler treates it as *(*(arr+0) + 0)
    
   // we can print using the for each loop 
      for(int i = 0;i<arr.size();i++){
      	   for(int number : arr[i]){
      	   	cout << number << " ";
      	   }
      	   cout << endl;
      }
	return 0;
}