#include <iostream>

using namespace std;

int main() {
    // Read A Integer N , followed by the N strings 
    // Print the largest string and give the lenght of that
    int n; 
    cin >> n;

  char current[1000]; // as per the problem statement 
  int largest = 0;
  // read the data 
  char largestStr[1000];

   // One problem is we enter  n = 3 we are able to read only 2 strings why because whats happening is as we hit newline by enter it reads that as well and i = 0 is consumed there so we dont want to read that we want to fix and we can fix it by cosuming that using cin.get() or cin.getline()
     cin.get(); // consume the extra '\n' that we have integer input 
     //cin.getline(current,1000,'\n'); // works in the same way it just stores that newline in array but we remove it we get in loop as we staring enter our string but cin.get() is more optimized way

  for(int i = 0;i<n;i++){
  	 cin.getline(current,1000,'\n');
     int current_largest = strlen(current);

     if(current_largest>largest){
     	//update
     	largest = current_largest;
     	//write a loop to insert the current largest string in the largestStr or using the strcpy 

         strcpy(largestStr,current);

     }

  }

  cout << largest << endl;
  cout << largestStr << endl;
  cout << "The original current which stores the sting is "<< endl;
  cout << current << endl;
 



	return 0;
}