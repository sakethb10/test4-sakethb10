#include <stdio.h>
int input_n()
{
  int n;
  printf("Enter a value: ");
  scanf("%d", &n);
  return n;
}
int sum_n(int n)
{
  int i;
  int sum=0;
  for(i=1;i<=n;i++)
  {
    sum = sum + i;
  }
  return sum;
}
void output(int n, int sum)
{
  printf("Summation is %d", sum);
}
int main()
{
  int x,sm;
  x = input_n();
  sm = sum_n(x);
  output(x,sm);
  return 0;
}
