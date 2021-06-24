#include <iostream>
using namespace std;

int factorial(int n);

int factorial(int n) {
  if (n == 0){
    return 1;
  }
  else {
    return factorial((n-1)) * n;
  }
}

int main() {
  int x;
  bool resp = false;
  do {
    cout<<"Number:"<<endl;
    cin >>x;
    resp = true;
    cout<< factorial(x)<<endl;
  }
 while (resp);

 return 0;
}
