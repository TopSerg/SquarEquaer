#include <stdio.h>
#include <Math.h>

#include "comparison.h"

const float EPS = 0.000002;


bool fequals(float val1, float val2)
{
    return fabs(val1 - val2) < EPS;
}

bool fmore(float val1, float val2)
{
    return (val1 > val2 + EPS);
}

bool fless(float val1, float val2)
{
    return (val1 < val2 - EPS);
}
