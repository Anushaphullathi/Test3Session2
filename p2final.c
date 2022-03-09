#include<stdio.h>
struct _fraction
{
int num,den;
};
typedef _fraction Fraction
Fraction input_fraction()
{
  float f1,f2,f3;
  printf("Enter three fractions\n");
  scanf("%f,%f,%f",&f1,&f2,&f3);
}
Fraction Largest_fraction(Fraction f1, Fraction f2, Fraction f3)
{
 int num1i,den1i,num2i,den2i,num3i,den3i;

 int den1=(den1i*den2i*den3i)/gcd;
 int den2=(den1i*den2i*den3i)/gcd;
 int den3=(den1i*den2i*den3i)/gcd;
 int num1=num1i*gcd;
 int num2=num2i*gcd;
 int num3=num3i*gcd;
 f1=num1/den1;
 f2=num2/den2;
 f3=num3/den3;
 if(f1>f2 && f1>f3)
 {
   return 1;
 }
  else if(f2>f3)
  {
    return 2;
  }
  else 
  {
    return 3;
  }
}
void output(Fraction f1, Fraction f2, Fraction f3, Fraction largest)
{
  if(largest==1)
  {
    printf("the largest of %d %d %d three fractions is %d",f1,f2,f3,f1);
  }
  if(largest==2)
  {
    printf("the largest of %d %d %d three fractions is %d",f1,f2,f3,f2); 
  }
  if(largest==3)
  {
     printf("the largest of %d %d %d three fractions is %d",f1,f2,f3,f3);
  }
}
int main()
{
  return 0;
}
