#include<iostream>
#include<string>
//135920,137214,137177,137307,137187,137179,137285
using namespace std;
void palindrome(string);
void palindrome(string str){
	int start=0;
	int end=str.length()-1;
	while(end>start){
		if(str[start]!= str[end]){
			cout<<str<<" is not a palindrome."<<endl;
		}else{
			cout<<str<<" is a palindrome."<<endl;
		}
		start++;
		end--;
	}
}
	
int main(){
	char resp;
	do{
	string str;
	cout<<"Enter a string: ";
	cin>>str;
    palindrome(str);
    cout<<"Would you like to continue???(y/n)";
    cin>>resp;
	}while(resp=='y'|resp=='Y');
	return 0;
}
