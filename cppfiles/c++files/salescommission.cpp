#include <iostream>
using namespace std;

double comm(double, double);
double comm(double sales, double rate){
	if(sales<=50000){
		rate=10;
	}
	else if(sales>50000 && sales<=150000){
		rate=15;
	}
	else if(sales>150000 && sales<=350000){
		rate=20;
	}
	else if(sales>350000){
		rate=25;
	}
	double commission=(rate/100)*sales;
	double total=commission + 20000;
	return total;
}

int main(){
	double sales, total, rate;
	cout<<"Enter sales: ";
	cin>>sales;
	double tcomm=comm(sales, rate);
	cout<<"Total commission: "<<tcomm;
	return 0;
}

