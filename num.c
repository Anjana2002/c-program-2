//program to find if the number to be searched is present in the array and  display the number of times 
#include<stdio.h>
int main()
{
  int i,a[100],n,j,count=0;
  printf("\nHow many numbers you want to print: ");
  scanf("%d",&n);
  printf("Enter the numbers: ");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("Which number you want: ");
  scanf("%d",&j);
  for(i=0;i<=n;i++)
  {
    if(a[i]==j)
    {
      count++;
    }
  }
  printf("count of the number %d = %d\n\n",j,count);

}
