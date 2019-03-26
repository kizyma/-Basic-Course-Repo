#include <iostream> 
using namespace std;
int main() { 
   int num = 63972, rev = 0;
   while(num > 0) { 
      rev = rev*10 + num%10; 
      num = num/10; 
   } 
   cout<<"Reverse of number is "<<rev;
   return 0; 
}   