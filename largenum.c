//finding the largest number using conditinal operators
#include<stdio.h>
int main()
{
  int a,b,c,x;
  printf("\nEnter the three numbers: ");
  scanf("%d%d%d",&a,&b,&c);
  x=(a>=b && a>=c)?a:(b>=a && b>=c)?b:c;
  printf("The largest number is %d\n\n",x );
}
