#include <iostream>

using namespace std;
int fact_ans(int n){

  // base case 

	if(n==0){
		return 1;
	}

	// recursive case

	int ans = n * fact_ans(n-1);

return ans;


}
int main() {


     int fact; 
     cin>>fact;

    int ans =  fact_ans(fact);

     cout << ans;


	return 0;
}