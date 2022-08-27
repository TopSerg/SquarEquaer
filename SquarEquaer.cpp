#include <iostream>
#include <stdio.h>
#include <Math.h>

#include "input.h"
#include "output.h"
#include "Solve.h"
#include "SquarEquaer.h"


int SquarEquaer(struct equation *square, bool is_testing)
{

    if(!is_testing)
    {
        input(square);
    }

    int num_roots = Solve(square);

    if(!is_testing)
    {
        output(square, num_roots);
    }

    return num_roots;
}

bool try_test(int argc, char **argv)
{
    while(true)
    {
        if(argc > 1)
        {
            if(SergCMP(*(argv+1), "-test"))
                return true;
            else
            {
                puts("You made a mistake in the parameters, please try again\n"
                     "Enter only the parameters\n");
                scanf("%s", *(argv+1));
            }
        }
        else
        {
            return false;
        }
    }
}

bool Test_choise()
{
    bool is_entered = false;
    char yes_or_no;

    printf("Do you wont to ? Y/N\n");

    while(!is_entered)
    {
        int scan = scanf("%c", &yes_or_no);

        if(scan == 1 && (yes_or_no == 'Y' || yes_or_no == 'N'))
        {
            is_entered = true;
        }
        else
        {
            puts("Stop messing around");

            while(getchar() != '\n')
                ;
        }
    }
    return yes_or_no == 'Y';
}

bool SergCMP(const char* str1, const char* str2)
{
    int num_of_letter = 0;

    while(*(str1+num_of_letter) != 0 && *(str2+num_of_letter) != 0)
    {
        if(*(str1+num_of_letter) != *(str2+num_of_letter))
        {
            return false;
        }

        num_of_letter++;
    }

    if(*(str1+num_of_letter) != *(str2+num_of_letter))
        return false;

    return true;
}

