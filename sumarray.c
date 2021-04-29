//sum of n numbers
#include<stdio.h>
void main()
{
  int n,a[50],sum=0,i=0;
  printf("how many numbers you want to add?(should be less than 50) :  ");
  scanf("%d",&n);
  if(n<=50)
  {
    printf("enter the %d numbers: ",n);
    while(i<n)
    {
      scanf("%d",&a[i]);
      sum=sum+a[i];
      i++;
    }
    printf("sum= %d\n",sum);
  }
  else
  {
    printf("please enter numbers less than or equal to 50");

  }
}
