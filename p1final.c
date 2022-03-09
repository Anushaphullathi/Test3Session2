#include<stdio.h>
void input(int *num1, int *den1, int *num2, int *den2)
{
  printf("Enter two fractions\n");
  scanf("%d %d %d %d",num1,den1,num2,den2);
}
void add(int num1,int den1, int num2, int den2, int *num3, int *den3)
{
  int min,gcd;
 min=(den1<den2)?den1:den2;
 for(int i=1;i<=min;i++)
 {
   if(den1%i==0 && den2%i==0)       
   {
     gcd=i;
     printf("%d",i);
   }
  *num3=(num1*den2+num2*den1)/gcd;
  *den3=(den1*den2)/gcd;
   }
}
void output(int num1, int den1, int num2, int den2, int num3, int den3)
{
  printf("The sum of %d,%d,%d,%d two fractions is %d/%d",num1,den1,num2,den2,num3,den3);
}
int main()
{
  int num1,den1,num2,den2,num3,den3;
  input(&num1,&den1,&num2,&den2);
  add(num1,den1,num2,den2,&num3,&den3);
  output(num1,den1,num2,den2,num3,den3);
  return 0;
}