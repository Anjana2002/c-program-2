//range
#include<stdio.h>
int main()
{
  int a[100],n,i,j,b,large,small,range;
  printf("\nHow many numbers you want to enter? ");
  scanf("%d",&n);
  printf("Enter the numbers: ");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }

  //finding the largest number
  for(i=0;i<n-1;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(a[i]<a[j])
      {
        b=a[i];
        a[i]=a[j];
        a[j]=b;
      }
    }
  }
  printf("Largest number:%d\n",a[0]);
  large=a[0];
  //finding the smallest number
  for(i=0;i<n-1;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(a[i]>a[j])
      {
        b=a[i];
        a[i]=a[j];
        a[j]=b;
      }
    }
  }
  printf("Smallest number:%d\n",a[0]);
  small=a[0];
  range=large-small;
  printf("Range=%d\n\n",range);
}
