#include <stdio.h>
int main()
{
  int a,b,c;
  printf("Enter two values to be added:\n ");
  scanf("%d%d", &a, &b);
  c=a+b;
  printf("Sum of %d + %d is %d\n", a,b,c);
  return 0;
}
