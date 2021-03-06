#include <iostream>
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

void linearSearch(int q, vector<int> v) {

  for (int i = 0; i <= v.size(); i++){
      if (q == v[i]){
        cout<<"The index of " << q << " is " << i;
         break;
      }
      else if (q != v[i] && q < v[i]) {
          cout<< "The number "<< q << " is not found";
          break;
      }
    }
}

int main() {
  bool prime;
  int q = 0;
  vector<int> v;



  cout<<"Enter a number: "<< endl;
  cin>>q;

  for(int n = 2; n < 100; n++) {
    prime = isPrimeNumber(n);
    if (prime){
       v.push_back(n);
    }
   }
  linearSearch(q, v);
  return 0;
}


































//...
// LAB 1

/*Task 1*/
// array of numbers from 1 - 100
// get the prime no's

/*Task 2*/
// design a linear search fn that will take in 2 parameters, param 1 = q param 2 = array
// (q is the user input)

/*Task 3*/
// key in q, if found return its index, if not return not found
