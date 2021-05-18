//count how many positive,negative & zero
#include<stdio.h>
int main()
{
  int a[100],n,i,j,pos=0,neg=0,zero=0;
  printf("\nHow many numbers you want to enter?  ");
  scanf("%d",&n);
  printf("Enter the numbers: ");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  //counting
  for(i=0;i<n;i++)
  {
    if(a[i]>0)
    {
      pos++;
    }
    else if(a[i]<0)
    {
      neg++;
    }
    else
    {
      zero++;
    }
  }
  printf("\ncount of positive numbers:%d\n",pos );
  printf("count of negative numbers:%d\n",neg );
  printf("count of zero:%d\n",zero );
  printf("\n");
}
