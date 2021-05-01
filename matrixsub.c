//subtraction of matrix
#include<stdio.h>
void main()
{
  int a[10][10],b[10][10],m,n,i,j,sub[10][10];
  printf("Enter the order of two matrix: ");
  scanf("%d%d",&m,&n);
  printf("The matrix A=");
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

  printf("The matrix B=");
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
  //Difference of the matrix
  printf("Difference of two matrix:\n");
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      sub[i][j]=a[i][j]-b[i][j];

    }
  }

  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("%d\t",sub[i][j]);
    }
    printf("\n" );
  }

}
