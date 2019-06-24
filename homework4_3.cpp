#include <stdio.h>
#include <string.h>

int main()
{
  	char myString[256]; //Я вообще хз какой размер масива нужно было давать в этом случае. Код вроде бы работает, но получилось по-дебильному
  	int i;
 
  	printf("\n Please Enter a String that you want to Convert into Lowercase :  ");
  	scanf("%s", myString);
  	
        for (i = 0; myString[i]!='\0'; i++)
        {
            if(myString[i] >= 'A' && myString[i] <= 'Z')
            {
                myString[i] = myString[i] +32;//ASCII только, юникод мне сломал башку
            }
        }

  	printf("\n The given String in Lower Case = %s", myString);
  	
  	return 0;
}