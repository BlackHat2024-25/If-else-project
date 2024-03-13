#include <stdio.h>
#include <stdlib.h>

int main()
{
    char al, degit;


    printf("enter a digit, alphabet and special character : ");
    scanf("%c%c",&degit, &al);

    if(isalpha(al))
    {
        printf("its is a alphabet");
    }
    else if(isdigit(degit))
    {
        printf("its is a digit");
    }
    else
    {
        printf("its a special character");
    }
    return 0;
}
