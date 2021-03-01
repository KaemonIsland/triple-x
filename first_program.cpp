// Include a library before compilation
// Do not need semicolon at the end of this line
#include <iostream>

// Every C++ program requires "int main()"
// It is the entry point of a c++ program
// Without this, the program won't build!
int main() // int means that we are returning an integer
{
  // std = standard, it's a namespace
  // :: = scope operator
  // cout = Cout defined in std namespace
  std::cout << "Hello World!";

  // 0 states that the code has run correctly
  // Any other number will return an error
  return 0;
}