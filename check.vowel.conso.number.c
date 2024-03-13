#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cha;

    printf("Enter a character");
    scanf("%c", &cha);

    if (cha >= 'a' && cha <= 'z' ||cha >= 'A' && cha <= 'Z'  )

        if(cha =='a' || cha =='e' || cha =='i' || cha =='o' || cha =='u' || cha =='A' || cha =='E' || cha =='I' || cha =='O' || cha =='U')
    {
        printf("its a vowel");
    }
    else
    {
        printf("its a consonent");
    }
    else if(cha >= '0' && cha <= '9' )
    {
        printf("its a number");
    }
    else
    {
        printf("its not a vowel, consonent or number");
    }
    return 0;
}


