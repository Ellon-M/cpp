#include <iostream>
using namespace std;

int main(){
	int x;
	cout<<"Input the values of x:";
	cin>>x;
	
	switch(x){
		case 1:
			cout<<"Its a busy day!"<<endl;
			break;
		case 3:
			cout<<"Good!"<<endl;
			break;
		case 4:	
		    cout<<"Good!"<<endl;
		    break;
		default:
			cout<<"All right!"<<endl;
			break;
	}
	return 0;
}
