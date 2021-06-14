#include <iostream>
using namespace std;

int main(){
	int amount, charge, charge1, charge2;
	cout<<"Please enter the amount of deposit: ";
	cin>>amount;
	
	if (amount<1000){
		charge=(0.01 * amount);
	}
	else if((amount>1000) &&(amount<=10000)){
			charge1=(0.02 * (amount-1000));
			charge=charge1+10;
		}
	else if (amount>10000){
			charge2=(0.03 * (amount-10000));
			charge=charge2+190;
	}
		
    	cout<<	"The bank charge is: "<<charge;

	return 0;
}
