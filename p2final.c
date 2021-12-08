#include <stdio.h>
int input()
{
  int a;
  printf("Enter the value of a number to be added:\n");
  scanf("%d", &a);
  return a;
}
int add(int a, int b)
{
  int sum;
  sum=a+b;
  return sum;
}
void output(int a, int b, int sum)
{
  printf("sum of %d and %d is %d", a,b,sum);
}
int main()
{
  int x,y, sum;
  x = input();
  y = input();
  sum = add(x,y);
  output(x,y,sum);
  return 0;
}
