#include <stdio.h>

int mostOnes(A, n);

int main(void)
{
  int n;
  scanf("%d", &n);
  int bit_matrix[n][n];

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      scanf("%d", &bit_matrix[i][j]);
    }
  }

  return 0;
}

int mostOnes(int A[][], int n)
{
  int raw;
  int x = 0, y = 0;
}