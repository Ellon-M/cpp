#include <iostream>
using namespace std;



int isPrimeNumber(int n) {
  bool isPrime = true;

   for(int i = 2; i <= n/2; i++) {
      if (n % i == 0) {
         isPrime = false;
         break;
      }
   }
   return isPrime;
}

void linearSearch(int q, int arr[]) {

  for (int i = 0; i <= 100; i++){
      if (q == arr[i]){
        cout<<"The index of " << q << " is " << i;
        break;
      }
      else if(q != arr[i] && q < arr[i]){
        cout<<"Not found";
        break;
      }
    }
}

int main() {
  bool isPrime;
  int q = 0;
  int index = 0;
  int arr[25];


  cout<<"Enter a number: "<< endl;
  cin>>q;

  for(int n = 2; n < 100; n++) {
    isPrime = isPrimeNumber(n);
     if (isPrime == true){
       arr[index] = n;
       index++;
    }
  }
  linearSearch(q, arr);

  return 0;
}
