#include "item.h"
#include "sort.h"

void sort(Item *a, int lo, int hi)
{
    int i, k;
    for (i = lo + 1; i < hi; i++)
      for(k=i;k > 1 && a[k] < a[k-1];k--)
        swap_i(a,k,k-1);
}