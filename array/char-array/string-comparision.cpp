#include <iostream>
#include <cstring>

using namespace std;

 // Problem - Check wheather these two string are equal or not with the string comparision function you cant make your own string comparision function as password checker we did this is same 

int main() {

  char word1[100];
  char word2[100];
  cin >> word1 >> word2;

  // strcmp(string1,string2) - used to compare to strings 
  /*
   This function starts comparing the first character of each string. If they are equal to each other, 
  it continues with the following pairs until the characters differ or until a terminating null-character is reached.
   
return value	indicates
<0	the first character that does not match has a lower value in ptr1 than in ptr2
0	the contents of both strings are equal
>0	the first character that does not match has a greater value in ptr1 than in ptr2


   */


  int cmp = strcmp(word1,word2);

  if(cmp==0){

  	cout << "Words are Same" << endl;

  }else if(cmp>0){

     cout << "Word 1 Comes before the Word 2 in Dictionary" << endl;

  }else {
        cout << "Word 1 Comes after the Word 2 in Dictionary " << endl;
  }


}