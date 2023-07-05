#include <iostream>

using namespace std;

bool checkPassword(char *password,char * originalPass){
 int i = 0;

 while(password[i]!='\0'){

 	if(password[i]!=originalPass[i]){
 		return false;
 	}
   i++;
 }
 
 return true;

}

int main() {


  char  * originalPass = "HACK101"; // Its only a pointer to read only string  store in a read only memory
  char password[100]; // Array that is stored in your stack (updated)

  cin.getline(password,100);

  if(checkPassword(password,originalPass)){
  	cout << "Login Successfull" << endl;
  } else {
  	cout << "Enter The Correct Password ! Try Again" << endl;
  }
   

	return 0;
}