#include <stdio.h>
#include <Math.h>
#include <assert.h>

#include "Solve.h"
#include "comparison.h"
#include "SquarEquaer.h"


int Solve(struct equation *square)
{
    int num_roots = 0;
    float D = 0, a = square->a, b = square->b, c = square->c, x1 = square->x1, x2 = square->x2;

    //assert ();
    assert(isfinite(a));
    assert(isfinite(b));
    assert(isfinite(c));
    assert(&x1 != NULL);
    assert(&x2 != NULL);
    assert(&x1 != &x2);

    if(fequals(a,0))
    {
        if(fequals(b,0))
        {
            return (fequals(c,0))? SS_INF_ROOTS: 0;
        }
        else
        {
            x2 = x1 = (-c/b);

            num_roots = 1;
        }
    }
    else
    {
        D = b*b - 4*a*c;
        float sqrtD = sqrt(D), a2 = 2*a;
        if(fless(D, 0))
        {
            num_roots = 0;
        }
        else if(fequals(D,0))
        {
            x2 = x1 = -b / (2*a);
            num_roots = 1;
        }
        else if(fmore(D, 0))
        {
            x1 = (-b - sqrtD) / a2;

            x2 = (-b + sqrtD) / a2;

            num_roots = 2;
        }
        else
        {
            puts("Something wrong\n\n\n");
            return ERR;
        }
    }
    square->a = a, square->b = b, square->c = c, square->x1 = x1, square->x2 = x2;
    return num_roots;
}
