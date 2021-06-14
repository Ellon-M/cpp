#include <iostream>
using namespace std;

int main(){
	double basicsalary=15000;
	double totalsales;	
	cout<<"Input total sales"<<endl;
	cin>>totalsales;
	double totalearnings=0.15*totalsales + basicsalary;


	cout<<totalearnings<< endl;	
	if (totalsales<40000){
		  cout<<"Below target."<<endl;
		
	}
	else if(totalsales>=40000){
		cout<<"Eligible for bonus.";
		
	}
	 
	return 0;
 
}
