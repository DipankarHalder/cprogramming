#include <stdio.h>

int main()
{
  int x, y, z, m;
  printf("Enter first number: ");
  scanf("%d", &x);
  printf("Enter second number: ");
  scanf("%d", &y);
  printf("Enter third number: ");
  scanf("%d", &z);
  if (x > y)
  {
    m = x;
  }
  else
  {
    m = y;
    if (m < z)
    {
      m = z;
      printf("Y Maximum = %d", m);
    }
  }
}