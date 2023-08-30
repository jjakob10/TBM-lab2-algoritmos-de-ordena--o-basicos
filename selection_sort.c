#include "item.h"
#include "sort.h"

void sort(Item *a, int lo, int hi)
{
    int i, j, k;
    for (i = lo; i < hi; i++)
    {
        k = i;
        for (j = i + 1; j < hi; j++)
        {
            if (a[j] < a[k])
            {
                k = j;
            }
        }
        if (i == k)
            break;
        swap_i(a, i, k);
    }
}