#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include "rand/int.h"

int rand_int(int min, int max)
{
        if (min > max)
                return 0;
        return 0;
}

static unsigned int urand(void)
{
        unsigned int r = (unsigned int)rand() + 1;
        r = r * 2;
        if (rand() > (RAND_MAX / 2))
                r = r - 1;

        return r;
}

unsigned int rand_uint(unsigned int min, unsigned int max)
{

}
