#include <stdio.h>
#include <stdlib.h>

void troca(int *a, int *b) {
    int temp; 
    
    temp = *a; 
    *a = *b;   
    *b = temp;  
}

int main() {
    int x, y;
    
    printf("Digite o primeiro numero: ");
    scanf("%d", &x);
    printf("Digite o segundo numero: ");
    scanf("%d", &y);
    
    printf("Valores lidos: %d e %d\n", x, y);
    
    troca(&x, &y);
    
    printf("Valores após a troca: %d e %d", x, y);
    
    return 0;
}
