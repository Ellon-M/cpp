#include <iostream>
using namespace std;

int main(){
	int marks[7];
	cout<<"Please enter your marks: ";
	for (int mark=0; mark<=7; mark){
		cin>>marks[mark];
		int min = marks[0];
		int max = marks[0];
		if (marks[mark]<min){
			min=marks[mark];
			cout<< "The minimum is: "<<min<<"\n";
		}
		else if (marks[mark]>max){
			max=marks[mark];
			cout<< "The maximum is: "<<max<<"\n";
		}
		
	
	}
	   
     return 0;
}
