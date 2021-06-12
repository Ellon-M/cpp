#include <iostream>
using namespace std;

int main(){
	char inp;
	float pi=3.142;
	double r;
	cout<< "Please input the radius of the circle: ";
	cin>>r;
	double area=pi*(r*r);
	double perimeter= pi*(r+r);
	cout<<"Calculate the area(a) or the perimeter(p): ";
	cin>>inp;


	switch (inp){
		case 'A':
			cout<<"Area: "<<area;
	
	    break;
	    case 'P':
	    	cout<<"Perimeter: "<<perimeter;
	    break;
		default:
		    cout<<"Invalid Input ";
	}
			
	return 0;			
}
