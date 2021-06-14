#include <iostream>
using namespace std;

int main(){
	int num=89;
	int sum=0;
	do{
		
		if(num%2!=0){
			sum+=num;
		}
		num++;
	}
	while(num<113);
	cout<<"sum:"<<sum<<endl;
	return 0;
}
