#include <iostream>
#include <cstring>

using namespace std;

int main() {

 char a[1000] = "apple";
 char b[1000];
  

  // strlen()

   cout << strlen(a) << endl;
 // strcpy(destination , source )

 strcpy(b,a);
 cout << b << endl;

 // strcmp (str1,str2)

 cout << strcmp(a,b) << endl;

 // strcat

 char web[] = "www.";
 char domain[] = "tanish.com";

 // cout << strcat(web,domain) << endl;

 // we can copy this concatination to new string as well 

 strcpy(b,strcat(web,domain));

 cout << b;

	return 0;
}