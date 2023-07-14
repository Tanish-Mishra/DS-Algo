#include <iostream>

using namespace std;

 pair<int,int> fun(int arr[],int n) {


   int min_element = INT_MAX;
   int max_element = INT_MIN;

   for(int i = 0; i<n;i++) {


        int element = arr[i];

        min_element = min(min_element,element);
        max_element = max(max_element,element);



   }


   return make_pair(max_element,min_element);



}

int main() {

 int arr[] = {3,32,4,2};
 int n = sizeof(arr) / sizeof(n);

 pair<int , int > ans = fun(arr,n);

 cout << ans.first << " " << ans.second << endl;



	return 0;
}