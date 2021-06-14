#include <iostream>
#include <string>
#include <vector>
using namespace std;


bool isPrimeNumber(int n) {

   for(int i = 2; i <= n/2; i++) {
      if (n % i == 0) {
        return false;
         break;
      }
   }
   return true;
}

string binarySearch(vector<int> v, int q) {
   int left = 0;
   int right = v.size() - 1;

   while (left <= right) {
     int middle = (right + left) / 2;
     if (q == v[middle]) {
         return string("The index of ") + to_string(q) + string(" is ") + to_string(middle);
         break;
     }
     else if (q <= v[middle]) {
        right = middle - 1;
     }
     else if (q >= v[middle]) {
        left = middle + 1;
     }
   }
      return string("The number ") + to_string(q) + string(" is not found in the array");
}

int main() {
  bool isPrime;
  int q;
  int index = 0;
  vector<int> v;

  cout<<"Enter a number: "<< endl;
  cin>>q;

  for(int n = 2; n < 100; n++) {
    isPrime = isPrimeNumber(n);
     if (isPrime){
      v.push_back(n);
    }
  }
  cout<<binarySearch(v, q);

  return 0;
}
