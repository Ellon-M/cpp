#include <iostream>
using namespace std;

int main(){
	float num1, num2;
	int input;
	cout<<"Enter 2 numbers: "<<endl;
	cin>>num1;
	cin>>num2;
	float add=num1+num2;
	float minus=num2-num1;
	float product=num1*num2;
    float divide=num1/num2;
	cout<<"1.'+':Summation\n 2.'-':Subtruction(second number from first number)\n 3.'*':Multiplication\n ";
	cout<<"4.'/':Division(First number divided by second number)"<<endl;
	cout<<"Choose operation: ";
	cin>>input;
	
	switch(input){
	
		case 1:
			cout<<add;
			break;
		case 2:
			cout<<minus;
			break;
	   case 3:
			cout<<product;
			break;
	
	    case 4:
			cout<<divide;
			break;
	
}
return 0;
}
