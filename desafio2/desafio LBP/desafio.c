#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 6 

int main() {
    int matriz[TAM][TAM];
    int imagem_lbp[TAM-2][TAM-2];  //evitar as bordas pois deve-se tratar como valor 0
    int histograma[256] = {0};

    
    srand(time(NULL));

    
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            matriz[i][j] = rand() % 256;  
        }
    }

    
    printf("Matriz original:\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }

   
    for (int i = 1; i < TAM-1; i++) {  
        for (int j = 1; j < TAM-1; j++) {
            int pixel_central = matriz[i][j];  
            int bin = 0;

            
            bin |= (matriz[i-1][j-1] >= pixel_central) ? (1 << 7) : 0;  
            bin |= (matriz[i-1][j] >= pixel_central) ? (1 << 6) : 0;    
            bin |= (matriz[i-1][j+1] >= pixel_central) ? (1 << 5) : 0;  
            bin |= (matriz[i][j+1] >= pixel_central) ? (1 << 4) : 0;   
            bin |= (matriz[i+1][j+1] >= pixel_central) ? (1 << 3) : 0;  
            bin |= (matriz[i+1][j] >= pixel_central) ? (1 << 2) : 0;   
            bin |= (matriz[i+1][j-1] >= pixel_central) ? (1 << 1) : 0; 
            bin |= (matriz[i][j-1] >= pixel_central) ? (1 << 0) : 0;   

            
            imagem_lbp[i-1][j-1] = bin;
        }
    }

    
    printf("\nMatriz LBP 4x4:\n");
    for (int i = 0; i < TAM-2; i++) {
        for (int j = 0; j < TAM-2; j++) {
            printf("%3d ", imagem_lbp[i][j]);
        }
        printf("\n");
    }

    
    for (int i = 0; i < TAM-2; i++) {
        for (int j = 0; j < TAM-2; j++) {
            int valor = imagem_lbp[i][j];
            histograma[valor]++;  
        }
    }

    
    printf("\nHistograma da imagem LBP:\n");
    for (int i = 0; i < 256; i++) {
        if (histograma[i] > 0) {  
            printf("Elemento %3d: %d vezes\n", i, histograma[i]);
        }
    }

    return 0;
}
