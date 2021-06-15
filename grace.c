//grace mark
#include<stdio.h>
int main()
{
  int fail,c;
  printf("\n 1.First class\n 2.second class\n 3.third class\n");
  printf(" \n Enter the class: ");
  scanf("%d",&c);
  printf("How many subject failed: ");
  scanf("%d",&fail);
  switch(c)
  {
    case 1:
      if(fail>3)
      {
        printf(" no grace\n");
      }
      else
      {
        printf(" five marks per subject\n");
      }
      break;
    case 2:
      if(fail>2)
      {
        printf(" no grace\n");
      }
      else
      {
        printf(" four marks per subject\n");
      }
      break;
    case 3:
      if(fail>1)
      {
        printf(" no grace\n");
      }
      else
      {
        printf(" five marks per subject\n");
      }
      break;
  }

}
