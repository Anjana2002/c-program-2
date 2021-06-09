//fibonacci series using functiom
#include<stdio.h>
int fibo(int);
int main()
{
  int i,n;
  printf("\nHow many numbers you want? ");
  scanf("%d",&n);
  for(i=0;i<=n;i++)
  {
    printf("%d\t",fibo(i));
  }
  printf("\n\n");
}
int fibo(int i)
{
  return(i==0 || i==1)?1: fibo(i-1)+fibo(i-2);
}
