#include <iostream>
using namespace std;
int main(){
int i, trial[4];
const int pin=1234;
 for(int i=4; i>0; i--){
 	cout<<"Enter pin: ";
		cin>>trial[i];
		if(trial[i]!=pin && i!=1){
			cout<<"Incorrect pin."<<i-1<<" "<<"trials left."<<endl;	
		}
		else if(trial[i]!=pin){
		cout<<"Phone Locked!";
		}
		else if(trial[i]==pin){
			cout<<"Phone Unlocked!";
			break;
		}
	}
return 0;
}

