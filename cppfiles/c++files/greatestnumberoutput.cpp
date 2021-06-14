#include <iostream>
using namespace std;

float getmax(float x, float y, float z, float max){

  if(x>y && x>z){
    max=x;
  }
  else if(y>x && y>z){
    max=y;
  }	
   else if(z>x && z>y){
    max=z;
  }
  return max; 
}

int main(){
	float x, y, z, max;
	cin>>x;
	cin>>y;
	cin>>z;
	
	cout<<"Max: "<<getmax( x, y, z, max);
	return 0;
}
