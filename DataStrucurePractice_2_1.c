#include <stdio.h>

int modulo(a, b)
{
  return a % b;
}

int main()
{
  int a, b;
  scanf("%d%d", &a, &b);
  printf("%d\n", modulo(a, b));
  return 0;
}