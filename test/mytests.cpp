#include <ctest.h>
#include <libgeometry/check_overlaps.h>
#include <libgeometry/check_shape.h>
#include <libgeometry/print.h>
#include <stdio.h>
#include <stdlib.h>

CTEST(number, test1)
{
    char a[] = "circle(2 4, 3)";
    char b[] = "circle";
    ASSERT_EQUAL(0, check_circle(a, b));
}

CTEST(number, test2)
{
    char a[] = "circle(1 2,,3)";
    char b[] = "circle";
    ASSERT_EQUAL(1, check_circle(a, b));
}

CTEST(number, test3)
{
    char a[] = "circle(1,2 3)";
    char b[] = "circle";
    ASSERT_EQUAL(1, check_circle(a, b));
}

CTEST(number, test4)
{
    char a[] = "triangle((1 2, 2 4, 4 2, 1 2))";
    char b[] = "triangle";
    ASSERT_EQUAL(0, check_triangle(a, b));
}

CTEST(number, test5)
{
    char a[] = "triangle(1 2, 2 3, 3 4, 1 2)";
    char b[] = "triangle";
    ASSERT_EQUAL(1, check_triangle(a, b));
}

CTEST(number, test6)
{
    char a[] = "triangle((1 5, 2 3, 3 4, 1 6))";
    char b[] = "triangle";
    ASSERT_EQUAL(1, check_triangle(a, b));
}

CTEST(number, test7)
{
    char a[] = "triangle((1 5, 2 3, 3, 4,1 5))";
    char b[] = "triangle";
    ASSERT_EQUAL(1, check_triangle(a, b));
}
