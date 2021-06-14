#include <iostream>
#include <vector>
using namespace std;


bool isPrimeNumber(int n) {
   for(int i = 2; i <= n/2; i++) {
      if (n % i == 0) {
         return true;
         break;
      }
   }
   return false;
}

void linearSearch(int q, vector<int> v) {

  for (int i = 0; i <= v.size(); i++){
      if (q == v[i]){
         cout<< "Index: " << i;
         break;
      }
      else if (q != v[i] && q < v[i]) {
          cout<< "Not found";
          break;
      }
    }
}

int main() {
  bool isPrime;
  int q = 0;
  vector<int> v;

  cout<<"Enter a number: "<< endl;
  cin>>q;

  for(int n = 2; n < 100; n++) {
    isPrime = isPrimeNumber(n);
    if (isPrime){
       v.push_back(n);
    }
   }
  linearSearch(q, v);
  return 0;
}





