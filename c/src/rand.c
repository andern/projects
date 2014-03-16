#include <stdio.h>
#include "rand/array.h"

static void print_arr(int* arr, int len)
{
        int i;
        for (i = 0; i < len; i++)
                printf(" %d", arr[i]);
        printf("\n");
}

int main(void)
{
    int i;
    int* arr = malloc(10 * sizeof(int));
    for (i = 0; i < 10; i++)
        arr[i] = i-5;

    print_arr(arr, 10);
    shuffle(arr, 0, 9);
    print_arr(arr, 10);

    free(arr);

    return 0;
}
