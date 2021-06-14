#include <iostream>
using namespace std;
bool PerfSquare(int num) {
   for (int i = 1; i * i <= num; i++) {
      if ((num % i == 0) && (num / i == i)) {
         return true;
      }
   }
   return false;
}
int main() {
    int num;
    cout<<"Enter number: ";
    cin>>num;
   if(PerfSquare(num)){
      cout << num << " is perfect square number";
   } else {
      cout << num << " is not a perfect square number";
   }
   
}
