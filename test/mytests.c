#include <ctest.h>
#include <libgeometry/check_shape.h>
#include <libgeometry/print.h>
#include <stdio.h>
#include <stdlib.h>

CTEST(number, test1)
{
    ASSERT_EQUAL(0, check_circle("circle(2 4, 3)", "circle"));
}

CTEST(number, test2)
{
    ASSERT_EQUAL(0, check_circle("circle(1 2,,3)", "circle"));
}

CTEST(number, test3)
{
    ASSERT_EQUAL(0, check_circle("circle(1,2 3)", "circle"));
}

CTEST(number, test4)
{
    ASSERT_EQUAL(
            0, check_triangle("triangle((1 2, 2 4, 4 2, 1 2))", "triangle"));
}

CTEST(number, test5)
{
    ASSERT_EQUAL(0, check_triangle("triangle(1 2, 2 3, 3 4, 1 2)", "triangle"));
}

CTEST(number, test6)
{
    ASSERT_EQUAL(0, check_triangle("triangle((1 5, 2 3, 3 4, 1 6))", "triangle"));
}

CTEST(number, test7)
{
    ASSERT_EQUAL(0, check_triangle("triangle((1 5, 2 3, 3, 4,1 5))", "triangle"));
}
