#include <iostream>

using namespace std;

 int main() {

 int n;
 cin >> n;
 
 bool check = 1;
    for(int i = 2 ; i<=n;i++){

         for(int j = 2;j<i;j++){
            cout << "running for " << i << endl;
             if(i%j==0){
                 check = 0;
                 break;
             }
         }
          if(check) cout << i << " ";
          check = 1;
    }

 	return 0;
 }