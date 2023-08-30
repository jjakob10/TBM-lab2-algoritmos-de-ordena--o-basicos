#include <stdio.h>
#include <stdlib.h>
#include "item.h"

extern void sort(Item *a, int lo, int hi);

int main()
{
    int i, n;
    scanf("%d", &n);

    int *data = malloc(sizeof(Item) * n);

    for (i = 0; i < n; i++)
        scanf("%d", data + i);

    sort(data, 0, n);

    // for(i=0;i<n;i++)
    //     printf("%d ",data[i]);

    free(data);
}