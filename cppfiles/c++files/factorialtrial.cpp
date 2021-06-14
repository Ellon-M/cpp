#include <iostream>
using namespace std;

int factorial(int n){
	 if (n==1){
		return 1;
	}
	else return n * factorial(n-1);
}


void callRecursively(){
	int data;
	cout<<"Input: ";
	cin>> data;
	cout<< factorial(data)<<endl;
	callRecursively();
}

int main(){
	callRecursively();
    
}
