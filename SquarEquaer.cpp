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
                puts("You made a mistake in the parameters, please try again\nEnter only the parameters\n");
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

bool SergCMP(char* str1, char* str2)
{
    int end_of_str1 = *str1, end_of_str2 = *str2, i = 0;

    while(end_of_str1 != 0 && end_of_str2 != 0)
    {
        i++;

        if(*(str1+i) != *(str2+i))
        {
            return false;
        }

        end_of_str1 = *(str1+i), end_of_str2 = *(str2+i);
    }

    if(end_of_str1 != end_of_str2)
        return false;

    return true;
}

