#include <ctype.h>
#include <libgeometry/check_shape.h>
#include <libgeometry/print.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int p = 50;
    int w = 10;
    char str[p];
    char re[w];

    while (1) {
        fgets(str, 50, stdin);
        str[strlen(str) - 1] = '\0';
        sscanf(str, "%[^(]%*[\n]", re);

        for (int i = 0; re[i]; i++)
            re[i] = tolower(re[i]);

        if (strcmp(re, "circle") == 0) {
            check_circle(str, re);

        } else if (strcmp(re, "triangle") == 0) {
            check_triangle(str, re);

        } else
            printf("Invalid input!\n");
    }

    return 0;
}
