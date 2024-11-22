#include <stdio.h>
#include <stdlib.h>
#include <time.h>

unsigned char armario = 0;


void armarios_att() {
   
   
    printf("Armários Ocupados:\n ");
    printf("\n1 2 3 4 5 6 7 8\n");

    for (int i = 0; i < 8; i++) {
        if ((armario >> i) & 1) {  
            printf("1 ");           
                
        } else {
             printf("0 ");     
        }
    }

    printf("\n");
}




void ocupar() {
   unsigned char pos;
   unsigned char mask = 0x01;
   
   srand(time(NULL));

   pos = rand() % 8;

    mask <<= (pos);
    armario = armario | mask;
    
    printf("Armário %hhu Ocupado!\n", pos + 1);
    armarios_att();
}
    
   
void liberar() {
    unsigned char pos;
    unsigned char mask = 0x01;

    printf("Qual armário você quer liberar?: ");
    scanf(" %hhu", &pos);

   

    armario = armario & ~(mask << (pos-1));

    printf("Armário %hhu Liberado!\n", pos);
    armarios_att();

}

int main() {
    unsigned char option;

    while (1) {
        
        printf("O que você deseja?\n");
        printf("1. Ocupar Armário\n");
        printf("2. Liberar Armário\n");
        printf("3. Sair\n");
        scanf(" %c", &option);

       
        
        switch (option) {
            case '1':
                ocupar();
                break;
            case '2':
                liberar();
                break;
            case '3':
                printf("Sair!\n");
                return 0;
            default:
                printf("Opção inválida, Por favor tente novamente!\n");
                break;
        }

       
    }

    return 0;
}
