//check whether a year is leap or not
#include<stdio.h>
int main()
{
  int y,b;
  printf("\nEnter the year: ");
  scanf("%d",&y);
  b=(y%100==0 && y%400==0)?printf("leap year"):(y%4==0?printf("leap year"):printf("not leap year"));
  printf("\n\n");
}
