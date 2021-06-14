#include <iostream>
using namespace std;

int main(){
	int num;
	int arr[8];
	int sum=0;
		cout<<"Enter 8 integers: ";
	for(num=0; num<8; num++){
		cin>>arr[num];
		sum+=arr[num];
	}
    cout<<"Sum: "<<sum;
	return 0;
}
