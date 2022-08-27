#include <stdio.h>
#include <Math.h>

#include "input.h"
#include "SquarEquaer.h"


void input(struct equation *square)
{
    bool is_entered = false;

    printf("Square equation solver ax^2+bx+c=0\n\n");
    printf("Please enter a, b, c: ");

    while(!is_entered)
    {
        int scan = scanf("%f %f %f", &square->a,&square->b,&square->c);

        if(scan == 3)
        {
            is_entered = true;
        }
        else
        {
            puts("Please enter only numbers");

            while(getchar() != '\n')
                ;
        }
    }
}
