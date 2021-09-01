 #include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define max 100

void main()
{
    char str[max];
    int i, count;

    printf("Enter the string: ");
    gets(str);
    i= 0;
    count = 1;
    do
    {
        if(str[i]==' '|| str[i]=='\n'|| str[i]=='\t')
        {
            count++;
        }
        i++;
    } while (str[i]!='\0');

    printf("Total number of words in the string is: %d\n", count);
    

}
