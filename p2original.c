#include <stdio.h>
int input()
{
int a;
printf("enter a number\n");
scanf("%d\n", &a);
return a;
}
int main()
{
  int a=input();
  int b=input();
  int c=add(a,b);
  output(a,b,c)
}
int add(int a, int b)
{
  int c;
  c=a+b;
  return c;
}
void output(int a, intb, int sum)
{
  printf("%d + %d is %d\n", a,b,c);
}


#include <stdio.h>
int input()
{
  int a;
  printf("enter a number\n");
  scanf("%d", &a);
  return a;
}
int add (int a, int b)
{
  int c;
  c=a+b;
  return c;
}
void output (int a, int b, int c)
{
printf("%d+%d=%d\n", a, b, c);
}
int main()
{
  int a= input ();
  int b= input ();
  int c= add (a,b);
  output (a,b,c);
}
