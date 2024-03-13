#include <stdio.h>
#include <stdlib.h>

int main()
{
   int sum, a,b,c;

   printf("enter three angle :");
   scanf("%d%d%d", &a, &b, &c);

   sum = a + b + c;

   if (sum == 180){
   if( a == b && b == c)
   {
       printf("its a quilatera triangle");
   }

   else if(a == b || a ==c || b == c)
   {
       printf("its a Isosceles Triangle");
   }

   else if ( a != b || a !=c || b != c){
    printf("its a Scalene triangle");
   }
   }
   else
   {
       printf("All three angles not equal to 180 so i cannt check triangle type");
   }


      return 0;
}
