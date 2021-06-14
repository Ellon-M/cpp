#include <iostream>
#include <string>
using namespace std;

int main(){
	string fullName;
	int listedprice;
	cout<<"Please enter your full name: \n ";
	getline(cin, fullName);
	cout<<"Your name is: "<<fullName<<endl;
	cout<<"Please enter the home listed price: \n ";
	cin>>listedprice;
	
	
	double salestax, commission, sellingprice;
	salestax = 0.16 * listedprice;
	commission = 0.065 * listedprice;
	sellingprice = listedprice - salestax - commission; 
	
	cout<<"Name: "<< fullName; 
	cout<<"Selling price:  "<<sellingprice <<endl; 
	cout<<"Salestax: "<<salestax<<endl; 
	cout<<"Agent commission: "<<commission <<endl;
	
	return 0;
}
