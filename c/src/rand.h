#include "rand/array.h"

int main(void)
{
    int i;
    int* arr = malloc(10 * sizeof(int));
    for (int i = 0; i < 10; i++)
        arr[i] = i-5;

    free(arr);
}
