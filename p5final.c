#include<stdio.h>
int input_size()
{
  int s;
  printf("Enter the size of array");
  scanf("%d",&s);
  return s;
}
void input_array(int n, int a[n])
{
  for(int i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
}
int find_largest(int n, int a[n])
{
  int largest=a[0],id=0;
  for(int i=0;i<n;i++)
    {
      if(largest<a[i])
      {
        id=i;
        largest=a[i];
      }
    }
  return largest;
}
void out_put(int n, int a[n], int largest)
{
  printf("")
}
int main()
{
  int s,n,a,largest;
  s=input_size();
  input_array(n,a);
  out_put(n,a,largest);
  return 0;
}