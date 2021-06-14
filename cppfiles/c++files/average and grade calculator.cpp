#include <iostream>
using namespace std;

double avgMark(double,double,double);
double avgMark(double nums, double sum, double count){
	int i;
	double num[100];
	nums=num[i];
	sum=0;
	cout<<"Enter no of subjects: ";
	cin>>count;
	cout<<"Enter your mark for the subject: ";
	for(i=0; i<count ;i++){
	cin>>num[i];
	sum+=num[i];
	}
	return (sum)/count;
}

int main(){
	double admno;
	double nums;
	double sum, count;
	string surname;
	cout<<"Please enter your admission number: ";
	cin>>admno;
	cout<<"Please enter your surname: ";
	cin>>surname;
	double average= avgMark(nums, sum, count);
	cout<<"Admission Number: "<<admno<<endl;
	cout<<"Surname: "<<surname<<endl;
	cout<<"Your average mark is: "<<average<<endl;
	if(average>0 && average<50){
		cout<<"Grade: "<<" "<<"D";
	}
	else if(average>50 && average<60){
		cout<<"Grade: "<<" "<<"C";
	}
	else if(average>60 && average<70){
		cout<<"Grade: "<<" "<<"B";
	}
	else{
	    cout<<"Grade: "<< " "<<"A";
	}
	return 0;
}
