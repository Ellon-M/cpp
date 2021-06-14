#include<iostream>
#include<string>

using namespace std;

// function declaration
string lower(string word);
bool isPalindome(string data);

int main(){
    isPalindome("Anna")? cout << "Yes": cout << "No";

    return 0;
}

bool isPalindome(string data){
    int size = data.size();
    for (int i = 0; i < size; i++){
        if(data[i] != data[size - i + 1]){
            return false;
        }
    }
    return true;
}

string lower(string mystring){
    for (int i = 0; i < mystring.size(); ++i){
        if(mystring[i] >= 65 && mystring[i] <= 92 && !isspace(mystring[i])){
            mystring[i] = mystring[i] + 32;
        }
    }
    return mystring;
}

