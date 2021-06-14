#include <iostream>
using namespace std;
int main(){
int x,y,p,q;
p = 100;
q = p;
x = ++p;
y = q++;
cout<<x<<endl;
cout<<y<<endl;
return 0;
}
