#ifndef SQUAREQUAER_H_INCLUDED
#define SQUAREQUAER_H_INCLUDED

struct equation
{
    float a, b, c, x1, x2, realy_x1, realy_x2;
    int num_roots;
};

const int SS_INF_ROOTS = -1;
const int ERR = 3;
const int END = 12345;

void test_function();

//------------------------------------------------------
//
//! @note Help to understand what you wont
//
//-------------------------------------------------------

bool Test_choise();

bool SergCMP(const char* str1, const char* str2);

//------------------------------------------------------
//
//! @param [in] argc - Number of arguments
//! @param [in] argv - Arguments
//!
//! @return Must we run tests
//!
//! @note [kna.s,dmvboeirhbn vjhbv reoa8 87hcosb vo eka
//
//-------------------------------------------------------

bool try_test(int argc, char **argv);

//------------------------------------------------------
//
//! @param [in] square - structure with coefficients
//! @param [in] is_testing - regulates system testing
//!
//! @return Number of solutions to the equation
//!
//! @note Equation must be in ax^2 + bx + c = 0 format
//
//-------------------------------------------------------

int SquarEquaer(struct equation *square, bool is_testing);

#endif // SQUAREQUAER_H_INCLUDED
