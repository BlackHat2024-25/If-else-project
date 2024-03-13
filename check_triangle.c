#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum , angle1, angle2, angle3;

    printf("enter three angles :");
    scanf("%d%d%d", &angle1, &angle2, &angle3);

    sum = angle1 + angle2 + angle3;

    if(sum == 180 && angle1 >= 0 && angle2 >= 0 && angle3 >= 0)
    {
        printf("Triangle is valid");
    }
    else
    {
        printf("triangle is not valid");
    }
    return 0;
}
