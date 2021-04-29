//print a matrix
#include<stdio.h>
int main()
{
  int a[10][10],i,j,r,c,n;
  printf("Enter the rows and columns: ");
  scanf("%d%d",&r,&c);
  printf("Enter the matrix: ");
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  for(i=0;i<c;i++)
  {
    for(j=0;j<c;j++)
    {
      printf("%d\t",a[i][j]);
    }
    printf("\n");
  }
}
