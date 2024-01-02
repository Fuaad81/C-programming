#include <stdio.h>

int main()
{
  int flag, limit;

  printf("Enter a limit");
  scanf("%d", &limit);

  for (int i = 2; i <= limit; i++)
  {
    flag = 0;
    for (int j = 2; j <= i / 2; j++)
    {
      if (i % j == 0)
      {
        flag = 1;
        break;
      }
    }
    if (flag == 0)
    {
      printf("%d\n", i);
    }
  }

  return 0;
}
