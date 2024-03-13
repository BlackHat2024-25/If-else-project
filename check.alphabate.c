#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cha;

    printf("enter a character");
    scanf("%c", &cha);

    if(isalpha(cha))
    {
        printf("%c is a elphabet", cha);
    }
    else{
        printf("%c not a elpha", cha);
    }
    return 0;
}
