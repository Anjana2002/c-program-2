//palindrome words
#include<stdio.h>
void main()
{
  char a[10];
  int i,length=0,j;
  printf("\n*****************\n" );
  printf("Enter a word: ");
  scanf("%s",a);
  for(i=0;a[i]!='\0';i++)
  {
    length++;
  }
  printf("Reverse of the word:");
  for(j=length;j>=0;j--)
  {
    printf("%c",a[j]);
  }
  printf("\n*****************\n\n" );

}
