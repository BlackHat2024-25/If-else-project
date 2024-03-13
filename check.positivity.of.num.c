#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n;

   printf("enter a number");
   scanf("%d", &n);

   if (n == 0){

    printf("number is zero");
   }

   else if ( n > 0 ){
    printf("number is positive");
   }
   else if (n < 0)
    {

    printf("number is nigative");
   }

   else{
    printf("invalid choice");
   }
   return 0;

}
