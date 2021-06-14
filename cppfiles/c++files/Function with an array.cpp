#include <iostream>
using namespace std;

int sums(int nums[]);

int sums(int nums[]){
	int sum=0;
	for(int i=0; i<5; i++){
		sum=sum+nums[i];
	}
	return sum;
}

int main(){
	int arr[]={2,4,6,8,10};
   int a= sums(arr);
	cout<<"The sum is "<< a<<endl;
	
	return 0;
	
}
