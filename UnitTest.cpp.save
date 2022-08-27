#include<stdio.h>

#include "SquarEquaer.h"
#include "comparison.h"
#include "UnitTest.h"


int UnitTest()
{

    bool is_testing = true;

    struct equation squares [] =
    {
        1, 2, 1, 0, 0, -1, -1, 1,
        1, 2, 2, 0, 0,  0,  0, 0,
        1, 3, 2, 0, 0, -2, -1, 2,
        0, 0, 1, 0, 0,  0,  0, 0,
        0, 0, 0, 0, 0,  0,  0, SS_INF_ROOTS,
        3, 4, 1, 0, 0, -2, -1, 0,
        1, 4, 4, 0, 0, -2, -2, 1,
        1, 0,-4, 0, 0, -2,  2, 2,
        1, 2, 0, 0, 0, -2,  0, 2,
        1, 0, 0, 0, 0, -0, -0, 1
    };


    for(int i = 0; i < sizeof(squares)/sizeof(squares[0]); i++)
    {
        printf("Number of Test: %d\n", (i+1));

        struct equation this_equation = squares[i];

        int num_roots = SquarEquaer(&this_equation, is_testing);


        if (!((num_roots       ==       this_equation.num_roots) &&
              fequals(this_equation.x1, this_equation.realy_x1)  &&
              fequals(this_equation.x2, this_equation.realy_x2)))
        {

            printf("FAILED:   nRoots = %d, x1 = %lg, x2 = %lg\n"
                   "EXPECTED: nRoots = %d, x1 = %lg, x2 = %lg\n",
                   num_roots,               this_equation.x1,       this_equation.x2,
                   this_equation.num_roots, this_equation.realy_x1, this_equation.realy_x2);

        }
    }
//    fclose(fp);
    return 0;
}
