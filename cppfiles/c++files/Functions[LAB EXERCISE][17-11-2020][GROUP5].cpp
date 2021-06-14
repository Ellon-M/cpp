#include<iostream>
#include<cmath>
135920,137214,137177,137307,137187,137179,137285
using namespace std;
bool perfSquare (int);
bool perfSquare (int num){
     double sr= sqrt(num);
     return ((sr-floor(sr))==0);
     
}
int main (){
	double num , sq;
	char resp;
	do{
		cout<<"Enter any number to check if it is a perfect square:  ";
		cin>>num;
		sq=sqrt(num);
		if(perfSquare(num)){
			cout<<"True!!!"<<endl;
			cout<<"The number "<<num<<" is a perfect square.";
	}else{
		cout<<"False!!!"<<endl;
			cout<<"The number "<<num<<" not a perfect square.";
	}
		cout<<"\nWould you like to try another number (y/n)"<<endl;
		cin>>resp;
		}while(resp=='Y'|resp=='y');
		
		return 0;
		
}

