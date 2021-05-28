// print all ASCII values and their equivalent characters using a while loop.
#include<stdio.h>
int main()
{
  int i=33;
  printf("\nASCII TABLE\n\n");
  while(i<=126)
  {
    printf("%3d=%c\n",i,i);
    i++;
  }
}
