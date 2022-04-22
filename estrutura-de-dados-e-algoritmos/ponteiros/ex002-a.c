#include <stdio.h>

/**
 * Os programas a seguir apresentam erros. Faça alterações de modo a corrigi-los.
 */

int main (void) {
    int x, *p;
    x = 100;
    // p = x; Errado
    p = &x; // Correção
    printf("O valor de p: %d.\n",*p);
}