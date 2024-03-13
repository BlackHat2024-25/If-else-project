#include <stdio.h>
#include <stdlib.h>

int main()
{
    int amount;
    int note500, note100, note50, note20, note10, note5, note2, note1;

    note500 = note100 = note50 = note20 = note10 = note5 = note2 = note1 = 0;

    printf("enter a amount");
    scanf("%d", &amount);

    if (amount >= 500)
    {
        note500 = amount / 500;
        amount -= note500 * 500;
    }
    if (amount >= 100)
    {
        note100 = amount / 100;
        amount -= note100 * 100;
    }
    if (amount >= 50)
    {
        note50 = amount / 50;
        amount -= note50 * 50;
    }
    if (amount >= 20)
    {
        note20 = amount / 20;
        amount -= note20 * 20;
    }
    if (amount >= 10)
    {
        note10 = amount / 10;
        amount -= note10 * 10;
    }
    if (amount >= 5)
    {
        note5 = amount / 5;
        amount -= note5 * 5;
    }
    if (amount >= 2)
    {
        note2 = amount / 2;
        amount -= note2 * 2;
    }
    if (amount >= 1)
    {
        note1 = amount;
    }

    printf("Total number of notes = \n");
    printf("500 = %d\n", note500);
    printf("100 = %d\n", note100);
    printf("50 = %d\n", note50);
    printf("20 = %d\n", note20);
    printf("10 = %d\n", note10);
    printf("5 = %d\n", note5);
    printf("2 = %d\n", note2);
    printf("1 = %d\n", note1);

return 0;
}




/*
#include <stdio.h>
#include <math.h>

int main()
{

    int amount;
    int not500, not200, not100, not50, not20, not10, not5, not2, not1;

    printf("enter amount");
    scanf("%d", &amount);

    not500 = not200 = not100 = not50 = not20 = not10 = not5 = not2 = not1 = 0;

    if (amount >= 500)
    {
        not500 = amount / 500;
        amount -= not500 * 500;
    }
    if (amount >= 200)
    {
        not200 = amount / 200;
        amount -= not500 * 200;
    }
    if (amount >= 100)
    {
        not100 = amount / 100;
        amount -= not100 * 100;
    }
    if (amount >= 50)
    {
        not50 = amount / 50;
        amount -= not50 * 50;
    }
    if (amount >= 20)
    {
        not20 = amount / 20;
        amount -= not20 * 20;
    }
    if (amount >= 10)
    {
        not10 = amount / 10;
        amount -= not10 * 10;
    }
    if (amount >= 5)
    {
        not5 = amount / 5;
        amount -= not5 * 5;
    }
    if (amount >= 2)
    {
        not2 = amount / 2;
        amount -= not2 * 2;
    }
    if (amount >= 1)
    {
        not1 == amount;
    }

    printf("Total number of notes :\n");
    printf("500 = %d\n", not500);
    printf("200 = %d\n", not200);
    printf("100 = %d\n", not100);
    printf("50 = %d\n", not50);
    printf("20 = %d\n", not20);
    printf("10 = %d\n", not10);
    printf("5 = %d\n", not5);
    printf("2 = %d\n", not2);
    printf("1 = %d\n", not1);

    return 0;
}
