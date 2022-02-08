 #include <stdio.h>
void input_two_string(char *a, char *b)
{
  printf("Enter two strings: ");
  scanf("%s%s", a,b);
}
int strcomp(char *a, char *b)
{
  int i;
  for(i=0;a[i]!='\0'&&b[i]!='\0';i++)
  {
    if(a[i]>b[i])
    {
      return 1;
    }
    if(a[i]<b[i])
    {
      return -1;
    }
    if(a[i]==b[i])
    {
      continue;
    }
  }
}
void output(char *a, char *b, int result)
{
  if(result==1)
  printf("%s is greater than %s.", a,b);
  if(result==-1)
  printf("%s is greater than %s.", b,a);
  if(result==0)
  printf("%s is equal to %s.", a,b);
}
int main()
{
  char a[100],b[100];
  int i;
  input_two_string(a,b);
  int result = strcomp(a,b);
  output(a,b,result);
  return 0;
}
