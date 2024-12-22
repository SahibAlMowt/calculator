#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "calc.h"

TEST_SUITE("'+' and '-'")
{
    sam::Calculation calc(1, 1);

    TEST_CASE("add")
    {
        CHECK(calc.getres() == 2);
    }

    TEST_CASE("dif")
    {
        CHECK(calc.getdif() == 0);
    }
}

TEST_SUITE("'/' and '*'")
{
    sam::Calculation calc(4, 1);

    TEST_CASE("dev")
    {
        CHECK(calc.getdev() == 4);
    }

    TEST_CASE("mp")
    {
        CHECK(calc.getmp() == 4);
    }
}

