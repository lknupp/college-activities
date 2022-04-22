#include <stdio.h>

/**
 * Os programas a seguir apresentam erros. Faça alterações de modo a corrigi-los.
 */

void troca (int* const i, int* const j);

int main (void) {
    int a = 10;
    int b = 100;
    puts("Valores antes da troca: ");
    printf("a = %d\tb = %d\n",a, b);

    troca(&a, &b);

    puts("Valores após a troca: ");
    printf("a = %d\tb = %d\n",a, b);

    return 0;        
}

void troca (int* const i, int* const j) {
    // int* tmp; Errado
    int tmp;
    tmp = *i;
    *i = *j;
    *j = tmp;

}