#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;





    printf("enter a character :");
    scanf("%c",&ch);

    if(ch >= 'a' && ch <= 'z')
    {
        printf("%c is a lower character", ch);
    }
    else if(ch >= 'A' && ch <= 'Z')
    {
        printf("%c is a upper character", ch);
    }
    else if(ch >= '0' && ch <= '9'){

    printf("%c is a number",ch );
    }

    else
    {
        printf("%c is a special character", ch);
    }
    return 0;
}
