#include<iostream>
#include<cstring>
using namespace std;
void palindrome(char string);
void palindrome(char string[]){
	int i,length;
	int flag=0;
	length=strlen(string);
	for(i=0;i<length;i++){
		if(string[i] != string[length-i-1]){
			flag=1;
			break;
		}
	}
	if(flag){
		cout<<string<<" is not a palindrome."<<endl;
	}else{
		cout<<string<<" is a palindrome."<<endl;
	}
}
int main(){
	int flag;
	char string[];
	cout<<"Enter a string: ";
	cin>>string;
	cout<<palindrome(char string[]);

