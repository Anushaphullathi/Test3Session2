#include<stdio.h>
void input_n_and_r(int *n, int *r)
{
  printf("Enter the value of n and r");
  scanf("%d %d",n,r);
}
int ncr(int n, int r)
{
 int i,factn=1,factr=1,fact[n-r];
 for(i=1;i<=n;i++)
 factn=factn*i;
 for(i=1;i<=r;i++)
 factr=factr*i;
 for(i=1;i<=(n-r);i++)
 fact[n-r]=fact[n-r]*i;
 int result=(factn/fact[n-r]*factr);
 return result;
}
void output(int n, int r, int result)
{
  printf("%d %d is %d",n,r,result);
}
int main()
{
  int n,r,b;
  input_n_and_r(&n,&r);
  b=ncr(n,r);
  output(n,r,b);
  return 0;
}