#include <stdio.h>

void ehmenor(int *menor, int valorAtual) {
    if (valorAtual < *menor) 
        *menor = valorAtual;    
}

int main() {
    int n, menor;

    menor = 1000000000;

    while (1) {
        printf("Digite um numero. Caso queira sair, digite 0:\n ");
        scanf("%d", &n);

        if (n == 0) 
            break;
        
        ehmenor(&menor, n);
        
       
    }

    printf("\nSaindo... Menor valor: %d\n", menor);
    
    return 0;
}
