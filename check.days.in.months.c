#include <stdio.h>
#include <stdlib.h>

int main()
{
    int month;



    printf("Enter the number of months(1 - 12) :");
    scanf("%d", &month);

    if(month == '1' || month == '3' || month == '5' || month == '7' || month == '8' || month == '10' || month == '12')
    {
        printf("31 days in %d month", month);
    }
    else if(month == 2)
    {
        printf("28 / 29 days days in %d month", month);
    }

    else
    {
        printf("30 days in %d month", month);
    }


        return 0;
}
