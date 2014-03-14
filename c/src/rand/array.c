#include "rand/array.h"
#include "rand/int.h"

/* Use the modern Fisher-Yates algorithm. */
/* Both start and end are inclusive */
void shuffle(int* arr, size_t start, size_t end)
{
        for (;end > start; end--)
                swap(arr, end, rand_int(start, end));
}

void swap(int* arr, size_t i1, size_t i2)
{
        int temp = arr[i1];
        arr[i1] = arr[i2];
        arr[i2] = temp;
}
