//to separate the individual letters from a word
#include<stdio.h>
void main()
{
  char a[10];
  int i;
  printf("\n*****************\n" );
  printf("Enter a word: ");
  scanf("%s",a);
  printf("The letters are:\n");
  for(i=0;a[i]!='\0';i++)
  {
    printf("%c\n",a[i]);
  }
  printf("*****************\n\n" );
}
