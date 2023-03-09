#include <stdio.h>

int mostOnes(int A[][100], int n)
{
  int raw;
  int x = 0, y = 0;
  while (x != n && y != n)
  {
    if (A[y][x] == 1)
    {
      x++;
      raw = y;
    }
    else
    {
      y++;
    }
  }
  return raw;
}

int main(void)
{
  int n;
  int bit_matrix[100][100];
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      scanf("%d", &bit_matrix[i][j]);
    }
  }

  printf("%d", mostOnes(bit_matrix, n));

  return 0;
}
