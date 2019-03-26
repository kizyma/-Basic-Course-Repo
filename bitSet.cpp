#include<stdio.h>
// #include <cmath>
int main()
{
 int num,n;
 printf("Enter the number");
 scanf("%d",&num);
 printf("Enter the bit number to check");
 scanf("%d",&n);
 num=num>>(n-1);
 if(num^1==0)
   printf("Bit is set");
 else
   printf("Bit is not set");
 return 0;