#include "mymalloc.h"

static int i = 0;

void * mymalloc (size_t sz)
{
    i++;
    printf ("%d\n", i);
    if (i == 0)
        return NULL;
    return calloc (sz, 1);
}
