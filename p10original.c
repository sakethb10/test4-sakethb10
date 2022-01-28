#include <stdio.h>
typedef struct_complex Complex;
struct_complex
{
  float real,imaginary;
};
int input()
{
  int n;
  printf("Enter the number of complex numbers: ");
  scanf("%d", &n);
  return n;
}
Complex input_complex()
{
  Complex h;
  printf("Enter a complex number: ");
  scanf("%f%f", &h.real,&h.imaginary);
  return h;
}
void input_n_complex(int n, Complex c[n])
{
  for(int i=1;i<=n;++i)
  {
    c[i] = input_complex();
  }
}
Complex add_n_complex(int n,complex c[n])
{
  Complex out;
  for(int i=1;i<=n;++i)
  {
    out.real = out.real + c[i].real;
    out.imaginary = out.imaginary + c[i].imaginary;
  }
  return out;
}
void output(int n, Complex c[n], Complex result)
{
  Complex out;
  for(int i=1;i<=n;++i)
  {
    if(i==0)
    {
      continue;
    }
    if(i<n&&i!=0)
    {
      printf("%f + i%f+", c[i].real,c[i].imaginary);
    }
    else
    {
      printf("%f + i%f) is (%f + i%f)", c[i].real,c[i].imaginary,result.real,result.imaginary);
    }
  }
}
int main()
{
  int n;
  n = input();
  Complex c[n],result;
  input_n_complex(n,c);
  result = add_n_complex(n,c);
  output(n,c,result);
  return 0;
}
