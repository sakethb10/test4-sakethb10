#include <stdio.h>
int input_array_size()
{ 
  int n; 
  printf("Enter size of array: ");
  scanf("%d", &n);
  return n;
}
void input_array(int n)
{
  int a[n];
  int i;
  for(i=0;i<n;i++)
  {
    printf("\nEnter %d element: ", i);
    scanf("%d", &a[i]);
  }
}
int sum_n_arrays(int n, int a[n], int i)
{
  int sum=0;
  for(i=0;i<n;i++)
  {
    sum = sum + a[i];
  }
  return sum;
}
void output(int n, int a[n], int sum)
{
    printf("Sum is %d", sum);
}  
int main()
{
  int x,sm;
  x = input_array_size();
  int a[x];
  int i;
  sm = sum_n_arrays(x,a,i);
  input_array(x);
  output(x,a,sm);
  return 0;
}
