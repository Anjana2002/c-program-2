
#include<stdio.h>
int main()
{
  int a,c,fact=1,flag=0,i;
  do
  {
    printf("\n 1.Factorial of a number\n 2.Prime or not\n 3.Odd or Even\n 4.Exist\n");
    printf(" Enter your choice: ");
    scanf("%d",&c);
    switch(c)
    {
      case 1:
        fact=1;
        printf(" Enter a number: ");
        scanf("%d",&a);
        for(i=1;i<=a;i++)
        {
          fact=fact*i;
        }
        printf(" Fact=%d\n\n",fact);
        break;

      case 2:
        flag=0;
        printf(" Enter a number: ");
        scanf("%d",&a);
        for(i=2;i<=a/2;i++)
        {
          if(a%i==0)
          {
            flag=1;
            break;
          }
        }
        if(flag==0 && a>=2)
        {
          printf(" Prime\n\n");
        }
        else
        {
          printf(" Not prime\n\n");
        }
        break;

      case 3:
        printf(" Enter a number: ");
        scanf("%d",&a);
        if(a%2==0)
        {
          printf(" Even-%d\n\n",a);
        }
        else
        {
          printf(" Odd-%d\n\n",a);
        }
        break;

      case 4:
        printf(" Exist\n\n");
        break;
    }
  }while(c<4);
}
