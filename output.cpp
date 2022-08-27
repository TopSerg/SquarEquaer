#include <stdio.h>

#include "output.h"
#include "SquarEquaer.h"


void output(struct equation *square, int num_roots)
{


    switch(num_roots)
    {
        case 0: printf("There aren't roots\n");
            break;

        case 1: printf("x = %.3f\n", square->x1);
            break;

        case 2: printf("x1 = %.3f, x2 = %.3f\n", square->x1, square->x2);
            break;

        case SS_INF_ROOTS: printf("Any value is fine\n");
            break;

        case ERR: printf("ERROR 404");
            break;

        default: printf("Something is wrong");
            break;
    }
}
