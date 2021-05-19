#include<stdio.h>
int main()
{
    char c;
    int asci;
    printf("\nEnter a character: ");
    scanf("%c",&c);
    asci=c;
    if(asci>=65 && asci<=90)
    {
      printf("This is a capital letter\n\n");
    }
    else if(asci>=97 && asci<=122)
    {
      printf("This is a small letter\n\n");
    }
    else if(asci>=48 && asci<=57)
    {
      printf("This is a number\n\n");
    }
    else
    {
      printf("This is a special character\n\n");
    }
}
