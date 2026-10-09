#include <stdio.h>
int main()
{
 int m,n,V;

 printf("Enter size of v:");
 scanf("%d",&V);
 printf("Square pattern of size %d is\n",V);
 for (m =1; m<= V; m++)
  {
  for (n =1; n<= V; n++)
  { printf("* ");
   }
    printf("\n");
     }
      return 0;
      }

