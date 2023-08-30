#include "item.h"
#include "sort.h"

void sort(Item *a, int lo, int hi)
{
  int i, j, swapped;
  for (i = lo; i < (hi + 1 - lo) / 2; i++)
  {
    swapped = 0;
    for (j = i; j < hi - i; j++)
    {
      if (a[j] < a[j - 1])
      {
        swap_i(a, j, j - 1);
        swapped = 1;
      }
    }
    for (j = hi - 1; j >= i; j--)
    {
      if (a[j] < a[j - 1])
      {
        swap_i(a, j, j - 1);
        swapped = 1;
      }
    }
    if (!swapped)
      break;
  }
}