#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n, a, b;

  printf("enter a number\n");
  scanf("%d", &n);

  printf("enter both deviders\n");
  scanf("%d%d", &a, &b);



  if (n % a == 0 && n % b == 0)
  {
    printf("%d is divisible by both %d and %d",n,a,b);
  }

  else if(n % a == 0)
  {
      printf("%d is divisible by %d but not divisible by %d",n,a,b);
  }

  else if (n % b == 0)
  {
      printf("%d is divisible by %d but not divisible by %d",n,b,a);
  }
  else
  {
      printf("%d not divisible by %d & %d",n,a,b);
  }
  return 0;
}
