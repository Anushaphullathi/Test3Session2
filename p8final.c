#include<stdio.h>
struct _fraction
{
int num,den;
};
typedef struct  _fraction Fraction;
Fraction input_fraction()
{
  Fraction f;
  printf("enter to fractions\n");
  scanf("%d %d",&f.num,&f.den);
  return f;
}
int find_gcd(int a, int b)
{
   int min,gcd;
 min=(a<b)?a:b;
 for(int i=1;i<=min;i++)
 {
   if(a%i==0 && b%i==0)       
   {
     gcd=i;
   }
 }
  return gcd;
}
Fraction add_fractions(Fraction f1, Fraction f2)
{
  Fraction f3;
  int gcd;
  f3.num=(f1.num*f2.den)+(f2.num*f1.den);
  f3.den=(f2.den*f1.den);
  gcd=find_gcd(f3.num,f3.den);
  f3.num=f3.num/gcd;
  f3.den=f3.den/gcd;
  return f3;
}
void input_n_fractions(int n, Fraction f[n])
{
  for(int i=0;i<=n;i++)
    {
      f[i]=input_fraction();
    }
}
Fraction add_n_fractions(int n,Fraction f[n])
{
  Fraction sum=f[0];
  for(int i=1;i<=n;i++)
    {
      sum=add_fractions(sum,f[i]);
    }
  return sum;
}
void output(int n, Fraction f[n], Fraction sum)
{
  printf("The sum of %d/%d",sum.num,sum.den);
}
int main()
{
 int n;
 Fraction sum;
 scanf("%d",&n);
 Fraction a[n];
 input_n_fractions(n,a);
 sum=add_n_fractions(n,a);
 output(n,a,sum);
 return 0;
}




