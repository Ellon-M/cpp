#include <iostream>
using namespace std;

int main(){
	double num1, num2;
	int input;
	cout <<"Please enter 2 numbers: ";
	cin>> num1>>num2;
	cout<<"1. Add"<<endl;
	cout<<"2. Subtruct"<<endl;
    cout<<"3. Multiply"<<endl;
	cout<<"4. Divide"<<endl;
	double add=num1+num2;
	double sub=num1-num2;
	double mul=num1*num2;
	double div=num1/num2;
	cout<<"Please choose an operation: ";
	cin>>input;

	switch (input){

		case 1:
		 cout<<add;
			break;
		case 2:
		 cout<<sub;
			break;
		case 3:
		  cout<<mul;
			break;
		case 4:
		  cout<<div;
		    break;
	}
	return 0;
}
