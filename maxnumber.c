#include <stdio.h>

int main()
{
  int x, y;
  printf("Enter first number: ");
  scanf("%d", &x);
  printf("Enter second number: ");
  scanf("%d", &y);
  if (x > y)
  {
    printf("X Maximum = %d", x);
  }
  else
  {
    printf("Y Maximum = %d", y);
  }
}
