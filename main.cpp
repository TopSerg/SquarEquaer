#include "UnitTest.h"
#include "SquarEquaer.h"
// .gitignore

int main(int argc, char **argv)
{

    bool is_testing = try_test(argc, argv);

    if(!is_testing)
    {

        float a = 0, b = 0, c = 0, x1 = 0, x2 = 0;

        struct equation square = {a, b, c, x1, x2, 0, 0, 0};

        SquarEquaer(&square, is_testing);
    }
    else
    {
        UnitTest();
    }
    return 0;
}
