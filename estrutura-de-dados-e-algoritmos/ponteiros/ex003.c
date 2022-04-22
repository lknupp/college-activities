#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/**
 * Faça um programa que leia um inteiro n e crie um vetor de n números inteiros reais.
 * O vetor deve ser alocado de maneira dinâmica.
 * 
 */

void* aloca_dinamica(const size_t data_size, const size_t n);

void testa_aloc(void* const array);

void preenche_vetor(double* const array, const size_t n);

void imprime_vetor(double* const array, const size_t  data_size, const size_t n);

int main (void) {
    size_t n; // quantidade de posições do vetor
    puts("Digite a quantidade de posições do vetor: ");
    scanf("%ld", &n);

    double *array = NULL;
    
    array = aloca_dinamica(sizeof(double), n);

    preenche_vetor(array, n);

    imprime_vetor(array, sizeof(double), n);

    return 0;
}

void* aloca_dinamica(const size_t data_size, const size_t n) {
    void* ptr = malloc(n * data_size);
    testa_aloc(ptr);
    return ptr;
}

void testa_aloc(void* const array) {
    if(array == NULL) {
        printf("Impossível alocar memória dinamicamente\n");
        exit(EXIT_FAILURE);
    }
    return;
}

void preenche_vetor(double* const array, const size_t n) {
    srand(time(NULL));
        
    for (int i = 0; i < n; i++) {
        array[i] =  rand() % 1001 / 100.0;
    }

    return;
}

void imprime_vetor(double* const array, const size_t data_size, const size_t n) {

    for (int i = 0; i < n; i++) {
        printf("array[%d] = %.2f\n", i, array[i]);
    }

    return;
}