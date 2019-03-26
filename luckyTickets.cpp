#include <iostream>
using namespace std;
 
int main() 
{
 int N, c = 0;
 cin >> N;
 
 for ( int i = 0; i < 10; i++) //all variations of the first number
 {
  for( int j = 0; j < 10; j++) //all variations of the second number
  {
    if( N - i - j >= 0 && N - i - j < 10 ) // conditions of the third number
     { c++; } //++ acceptable numbers
  }
 }
 cout << c*c; //multiplying in "c" times, since we have 6-digit number
 return 0;
}