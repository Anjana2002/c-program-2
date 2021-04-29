//transpose of a matrix
#include<stdio.h>
void main()
{
  int a[10][10],b[10][10],i,m,n,j;
  printf("enter the order of the matrix: ");
  scanf("%d%d",&m,&n);
  printf("enter the elements: ");
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("%d\t",a[i][j]);
    }
    printf("\n");
  }
  printf("transpose of matrix:\n ");

  for(j=0;j<n;j++)
  {
    for(i=0;i<m;i++)
    {
      printf("%d\t",a[i][j]);
    }
    printf("\n");
  }
}
