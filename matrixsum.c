//matrix sum
#include<stdio.h>
void main()
{
  int a[10][10],b[10][10],m,n,i,j,sum[10][10];
  printf("enter the order of two matrix: ");
  scanf("%d%d",&m,&n);
  printf("the matrix A=");
  //entering 1 matrix
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
    printf("\n" );
  }

  printf("the matrix B=");
  //entering 2 matrix
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      scanf("%d",&b[i][j]);
    }
  }

  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("%d\t",b[i][j]);
    }
    printf("\n" );
  }
  //sum of the matrix
  printf("sum of the matrix:\n");
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      sum[i][j]=a[i][j]+b[i][j];

    }
  }

  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("%d\t",sum[i][j]);
    }
    printf("\n" );
  }

}
