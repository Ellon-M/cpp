// Typecasting in C++ //


// - making a variable of one type act like another type - for one single operation

#include <iostream>
using namespace std;

int main() {

// c- like casting

for (int x = 0; x < 128; x++) {
  cout<< x <<", "<< (char) x << " ";
  // outputs the number as the integer, and the ASCII character equivalent of the number alongside it
}


// static_cast

 cout << static_cast<char> (65) << "\n";
 // outputs A
 // safe casting method - gives you a compile time checking ability that C- style cast doesn't


 // dynamic_cast

 // syntax exactly like static cast
 // only used when casting to a derived class
 // used on pointers/ pointer conversion between base and derived classes
 // unlike other casts it involves a run-time check on objects bound to pointers and fails if they are not of the target type

 // const_cast

 int x = 50;
 const int* y = &x;
 cout<<"Old value: "<< *y<<"\n";
 int* z = const_cast<int *> (y);
 *z = 100;
 cout<<"New value: "<< *y;

 // old value = 50
 // new value = 100
 // when we pass our constant pointer "y", which points at const var "x" and assigns a value to pointer z, we change our const pointer y
 // if the operation above is done without using const_cast, an error("assignment of read-only location") will be thrown.

 // const_cast can be used in programs that have any object with some constant value that needs to be changed at some point


  // reinterpret_cast

  // dangerous
  // guarantees that if you cast a pointer to a different type - using static_cast- then reinterpret_cast will return it back to its original type and the original value is gotten
  // compile time. Does not happen at run time
  //(purely a compiler directive instructing the compiler to treat the object of expression as if it had the type new_type)

  return 0;
}
