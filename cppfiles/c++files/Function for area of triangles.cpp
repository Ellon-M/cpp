#include <iostream>
using namespace std;

double myTriangle(double, double);
double myTriangle(double b, double h){
	return 0.5*b*h;
}


int main(){
	double b, h;
	cout<<"Enter the dimensions of the triangle 1: ";
	cin>>b>>h;
	cout<<"Enter the dimensions of the triangle 2: ";
	cin>>b>>h;
	cout<<"Enter the dimensions of the triangle 3: ";
	cin>>b>>h;
	  
	 
	for(double d=0; d<4; d++){
		cout<<myTriangle(b, h)<<"\n";
	}
	
	return 0;
	
}
