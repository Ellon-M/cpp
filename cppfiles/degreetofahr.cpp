#include <iostream>
using namespace std;
int main(){
	double TempFahr;
	cout<<"Enter the temperature(F): \n";
	cin>>TempFahr;
	
	double TempCelc;
	TempCelc=(TempFahr-32)*5/9;
	cout<<"Temperature in degrees: "<< TempCelc;
	return 0;	
}
