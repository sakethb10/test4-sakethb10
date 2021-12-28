#include <stdio.h>
int input()
{
  int s;
  printf("Enter a value: ");
  scanf("%d", &s);
  return s;
}
int cmp(int a, int b, int c)
{
  if((a>b)&&(a>c))
  {
    return a;
  }
  else if((b>c))
  {
    return b;
  }
  else
  {
    return c;
  }
}
void output(int a, int b, int c, int s)
{
  printf("Among %d, %d, %d\n%d is greatest", a,b,c,s);
}
int main()
{
  int r,p,t,s=0;
  r = input();
  p = input();
  t = input();
  s = cmp(r,t,p);
  output(r,t,p,s);
  return 0;
}
