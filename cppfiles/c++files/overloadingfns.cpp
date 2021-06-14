#include <iostream>
using namespace std;

int intSum(int,int);
int intSum(int x, int y){
	return x + y;
}

int intSum(int,int,int);
int intSum(int x, int y, int z){
	return x + y + z;
}

int main(){
	int myNum = intSum(3,8);
	int myNum2 = intSum(2,1,9);
	cout<<"Int 1: "<< myNum<<endl;
	cout<< "Int 2: "<< myNum2;
	
	return 0;
}
