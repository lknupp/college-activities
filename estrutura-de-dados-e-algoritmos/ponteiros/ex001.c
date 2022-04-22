#include <stdio.h>

/**
 * Quais são os valores de x, y, p, ao final do seguinte código:
 */

int main (void) {
    int x, y, *p;
    y = 0;
    // *p = 0
    p = &y;
    // x = 0
    x = *p;
    x = 4;
    // y = 1
    (*p)++;
    // x = 3
    x--;
    // y = 4
    (*p) += x;

    printf("x = %d\ny = %d\n*p = %d\n", x, y, *p);
    printf("&x = %p\n&y = %p\np = %p\n", &x, &y, p);

    return 0;
}