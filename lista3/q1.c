#include <stdio.h>

#define MAX 15

int main() {

    float vetor[MAX], menor, maior, soma;

    puts("Informe os 15 valores do vetor");
    for(int i = 0; i < 15; i++) {
        printf("%dº:\n ", i + 1);
    }

    maior = vetor[0];
    menor = vetor[0];

    for(int i = 1; i < 15; i++) {
        if (vetor[i] > maior) maior = vetor[i];
        if (vetor[i] < menor) menor = vetor[i];
    }

    soma = maior + menor;

    printf("%.2f + %.2f = %.2f", menor, maior, soma);

return 0;

}