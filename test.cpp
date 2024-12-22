#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "calc.h"

TEST_SUITE("'+' and '-'")
{
    TEST_CASE("Testing Calculator class") 
    {
        sam::Calculation calc(1, 1);

        SUBCASE("Addition") 
        {
            CHECK(calc.getres() == 2);
        }

        SUBCASE("Subtraction") 
        {
            CHECK(calc.getdif() == 0);
        }
    }
}
