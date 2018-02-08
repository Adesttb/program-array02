#include <stdio.h>
int main()
{
  int i;
  int array[7];
  int N;
 
  N = 7;
  printf("Isi dan cetak array dengan indeks 1 s/d 7\n");
  for (i=1; i<=N; i++)
    {
      array[i] = i;
    }
  for (i=1; i<=N; i++)
    {
      printf("i = %d, array[i] = %d\n", i, array[i]);
    }
    return 0;
}
