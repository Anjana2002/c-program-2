// program to copy the contents of one array into another in reverse order.
#include<stdio.h>
#include<string.h>
int main()
{
  char a[100],b[100];
  int i,j,n;
  printf("\nEnter a word: ");
  scanf("%s",a);
  //couting letters
  n=strlen(a);
  //Copying all elements of one array into another   
  for(i=0;i<=n;i++)
  {
    b[i]=a[i];
  }
  printf("Reverse of the word: ");
  for(j=n;j>=0;j--)
  {
    printf("%c",b[j]);
  }
  printf("\n\n");
}
