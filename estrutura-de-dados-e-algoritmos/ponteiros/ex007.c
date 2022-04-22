#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void* aloca_dinamica(const size_t data_size, const size_t n);
void preenche_vetor(int* const array, const size_t n);

// Verifica se a alocação foi realizada
void testa_aloc(void* const array);

void imprime_vetor(int* const array, const size_t n);

// Encontra a posição do elemento máximo e mínimo
void min_max(const int* const v,int n, int* l,int* r);

int main (void) {
    size_t n; // quantidade de posições do vetor
    puts("Digite a quantidade de posições do vetor: ");
    scanf("%ld", &n);

    int* array = NULL;
    int p_max, p_min;

    array = aloca_dinamica(sizeof(int), n);

    preenche_vetor(array, n);

    imprime_vetor(array, n);

    min_max(array, n, &p_min, &p_max);

    printf("min = %d\t max = %d\n", p_min, p_max);

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

void preenche_vetor(int* const array, const size_t n) {
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        array[i] = rand() % 101;
    }
    return;
}

void imprime_vetor(int* const array, const size_t n) {

    for (int i = 0; i < n; i++) {
        printf("array[%d] = %3d\n", i, array[i]);
    }

    return;
}


void min_max(const int* const v,int n, int* lmin,int* rmax) {
    *lmin = 0;
    *rmax = 0;

    for (int i = 1; i < n; i++) {
        if(v[i] > v[*rmax]) {
            *rmax = i;
        }
        else if(v[i] < v[*lmin]) {
            *lmin = i;
        }
    }
}