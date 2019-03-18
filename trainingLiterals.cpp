#include <stdio.h>
#include <iostream>
// g++ -Wall -std=c++1y literals.cpp -o literals
int main(int argc, char const *argv[])
{
  printf("This is integer literal %d\n", 42);
  printf("This is integer literal in hex format =  %d\n", 0x1234);
  printf("This is integer literal represent in octal format %o\n", 18);
  printf("This is float literal %f\n", 5.56);
  printf("This is float literal %f\n", 1.25e3);
  printf("This is char literal %c\n", 'r');
  printf("This is string literal %s\n", "this is changed test string");

  std::cout << std::boolalpha;
  std::cout << true << " " << false << std::endl;
  return 0;
}