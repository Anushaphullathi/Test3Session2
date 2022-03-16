#include<stdio.h>
struct _fraction
{
int num,den;
};
typedef struct _fraction Fraction;
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
  printf("%d\n",f3.num);
  f3.den=(f2.den*f1.den);
  gcd=find_gcd(f3.num,f3.den);
  f3.num=f3.num/gcd;
  f3.den=f3.den/gcd;
  return f3;
}
void output(Fraction f1, Fraction f2, Fraction f3)
{
  printf("the sum of %d/%d + %d/%d = %d /%d",f1.num,f1.den,f2.num,f2.den,f3.num,f3.den);
}
int main()
{
  Fraction f1,f2,sum;
  f1=input_fraction();
  f2=input_fraction();
  sum=add_fractions(f1,f2);
  output(f1,f2,sum);
  return 0;
}
