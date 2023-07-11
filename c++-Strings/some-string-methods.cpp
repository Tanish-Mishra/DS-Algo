#include <iostream>
#include <string>

using namespace std;

int main() {


    string name {"Tanish Mishra"};

    // gives us the sub string in a string 

    cout << name.substr(3,5) << endl;

    // find method to find a word in a string

    string newName;

    getline(cin,newName);

    string word;

    getline(cin,word);

    // cout << newName.find(word) << endl; 
    // if it cannot find the word it gives the largest unsigned long int number if we get it in a integer it will give - 1 if it can't find a word 

    int index = newName.find(word);

    if(index != -1){

        cout << "First-occurence of the word " << index << endl;
    } else {
        cout << "Word Not found" << endl;
    }

   // let find the second occurence 

    int index = newName.find(word,index + 1);
    
    if(index != -1){
        cout << "Second occurence " << index << endl;
    }
    


	return 0;
}