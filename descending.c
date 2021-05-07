//arranging no in descending order
#include<stdio.h>
int main()
{
  int n,i,a[10],j,b;
  printf("\n");
  printf("How many numbers you want to print : " );
  scanf("%d",&n );
  printf("Enter the numbers: ");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }

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

  printf("Descending order: ");
  for(i=0;i<n;i++)
  {
    printf("%d\t",a[i]);
  }
  printf("\n\n");
}
