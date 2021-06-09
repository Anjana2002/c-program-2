//factorial using functions
#include<stdio.h>
int fact(int);
int main()
{
  int n,res;
  printf("\nEnter the number: ");
  scanf("%d",&n);
  res=fact(n);
  printf("%d! = %d\n\n",n,res);
}
int fact(int n)
{
  int res;
  if(n==0)
  {
    res=1;
  }
  else
  {
    res=n*fact(n-1);
  }
  return res;
}
