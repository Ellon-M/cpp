#include <iostream>
#include <string>
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

string binarySearch(int arr[], int size, int q) {
   int left = 0;
   int right = size - 1;

   while (left <= right) {
     int middle = (right + left) / 2;
     if (q == arr[middle]) {
         string s = string("The index of ") + to_string(q) + string(" is ") + to_string(middle);
         return s;
         break;
     }
     else if (q <= arr[middle]) {
        right = middle - 1;
     }
     else if (q >= arr[middle]) {
        left = middle + 1;
     }
   }
      string t = string("The number ") + to_string(q) + string(" is not found in the array");
      return t;
}

int main() {
  bool isPrime;
  int q;
  int index = 0;
  int arr[25];
  int size = sizeof(arr)/sizeof(arr[0]);


  cout<<"Enter a number: "<< endl;
  cin>>q;

  for(int n = 2; n < 100; n++) {
    isPrime = isPrimeNumber(n);
     if (isPrime){
       arr[index] = n;
       index++;
    }
  }
  cout<<binarySearch(arr, size, q);

  return 0;
}
