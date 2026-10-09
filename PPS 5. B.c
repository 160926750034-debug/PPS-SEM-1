#include <stdio.h>

int main()
{
  int a, b, K;

  printf("Enter size ofK:");
  scanf("%d",&K);

  printf("Pattern up to %d rows is\n",K);

  for (a = 1; a <= K; a++)
    {
      for (b = 1; b <= a; b++)
        {
            printf("%d ", b);
        }
       printf("\n");
    }

  return 0;
}
