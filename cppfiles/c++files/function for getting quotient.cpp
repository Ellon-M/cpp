#include <iostream>
using namespace std;

double division(double, double);
double division(double num1, double num2){
	return num2/num1;
}

int main(){
	double num1, num2;
	cout<<"Please enter two numbers: ";
	cin>> num1>>num2;
	cout<< division(num1,num2);
	return 0;
}
