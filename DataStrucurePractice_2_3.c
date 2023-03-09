#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

int prefixAverages1(int arr[], int n);
int prefixAverages2(int arr[], int n);

int main()
{
  LARGE_INTEGER ticksPerSecond;
  LARGE_INTEGER start, end, diff;
  srand(time(NULL));

  int n;
  scanf("%d", &n);
  int *arr = (int *)malloc(sizeof(int) * n);
  for (int i = 0; i < n; i++)
  {
    arr[i] = rand() % 100000 + 1;
  }
  QueryPerformanceFrequency(&ticksPerSecond);
  QueryPerformanceCounter(&start);
  prefixAverages1(arr, n);
  QueryPerformanceCounter(&end);
  diff.QuadPart = end.QuadPart - start.QuadPart;
  printf("\ntime: %12f sec\n\n", (double)diff.QuadPart / (double)ticksPerSecond.QuadPart);

  QueryPerformanceFrequency(&ticksPerSecond);
  QueryPerformanceCounter(&start);
  prefixAverages2(arr, n);
  QueryPerformanceCounter(&end);
  diff.QuadPart = end.QuadPart - start.QuadPart;
  printf("\ntime: %12f sec\n\n", (double)diff.QuadPart / (double)ticksPerSecond.QuadPart);

  free(arr);
  return 0;
}

int prefixAverages2(int arr[], int n)
{
  int prefix = 0;
  for (int i = 0; i < n; i++)
  {
    prefix += arr[i];
    // printf("%d ", prefix / (i + 1));
  }
}

int prefixAverages1(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    int prefix = 0;
    for (int j = 0; j < i + 1; j++)
    {
      prefix += arr[j];
    }
    // printf("%d ", prefix / (i + 1));
  }
}