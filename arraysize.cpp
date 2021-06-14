#include <iostream>

using namespace std;

 int main() {

   // array size
     int arr[] = {20,30,40,50,60,70,80};
     int arrSize = sizeof(arr)/sizeof(arr[0]);

     std::cout << arrSize << '\n';
     std::cout << sizeof(arr) << '\n';
  return 0;
}
