#include<stdio.h>
int input_degree()
{
  int n;
  printf("Enter the degree of polynomial\n");
  scanf("%d",&n);
  return n;
}
int input_x()
{ 
  int x;
  printf("Enter the value of x");
  scanf("%d",&x);
  return x;
}
void input_coefficients(int n, int a[n])
{ 
  printf("Enter the cofficients of polynomial");
  for(int i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
    }
}
int evaluate_polynomial(int n, int a[n], int x)
{ 
  int result=a[0];
  for(int i=0;i<n-1;i++)
    {
      result=(x*result)+a[i+1];
    }
  return(result);
}
void out_put(int n, int a[n], int x, int result)
{
  printf("%d",result);
}
int main()
{
  int n,x,b,c;
  n=input_degree()+1;
  int a[n];
  x=input_x();
  input_coefficients(n,a);
  c=evaluate_polynomial(n,a,x);
  out_put(n,a,x,c);
  return 0;
}
