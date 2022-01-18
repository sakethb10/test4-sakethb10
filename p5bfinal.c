#include <stdio.h>
void input(int *a, int *b, int *c)
{
  printf("Value of a is: %d\n", *a);
  printf("Value of b is: %d\n", *b);
  printf("Value of c is: %d\n", *c);
}
void cmp(int a, int b, int c, int *large)
{
  if((a>b)&&(a>c))
  {
    *large=a;
  }
  else if((b>c)&&(b>a))
  {
    *large=b;
  }
  else
  {
    *large=c;
  }
}
void output(int a, int b, int c, int large)
{
  printf("Among %d, %d, %d\n %d is the greatest", a, b, c, large);
}
int main()
{
  int a,b,c;
  int large;
  printf("Enter the value for a: ");
  scanf("%d", &a);
  printf("Enter the value for b: ");
  scanf("%d", &b);
  printf("Enter the value for c: ");
  scanf("%d", &c);
  input(&a, &b, &c);
  cmp(a, b, c, &large);
  output(a, b, c, large);
}
