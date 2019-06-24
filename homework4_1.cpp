#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;

    printf("Enter a character: ");
    scanf("%c",&c);

    if ((c>='1') && (c<='9'))
         printf("%c is a digit.",c);
    else
         printf("%c is not a digit.",c);
    return 0;
}