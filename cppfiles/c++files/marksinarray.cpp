#include <iostream>
using namespace std;


int main(){
	int marks[7];
	double sum = 0;
	double avg;	
	for (int mark=0; mark<=6; mark++){
		cout<<"Please enter your marks: ";
		cin>>marks[mark];
	}
     
	for (int mark=0; mark<=6; mark++){
	    sum=sum+marks[mark];
		
		if (marks[mark]<marks[0]){
			marks[0]=marks[mark];
		}
		else if(marks[mark]>marks[1]){
			marks[1]=marks[mark];
		}
		
	
	}
	    avg= sum/7;
	    cout<< "The minimum is: "<<marks[0]<<endl;
	     cout<< "The maximum is: "<<marks[1]<<endl;
	     cout<< "The average is: "<<avg;
     return 0;
}
