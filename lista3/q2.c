#include <stdio.h>
#include <string.h>

#define MAX 50

int main() {

    char string[MAX], caractere;
    int contem = 0;

    puts("Digite a string que desejar:");
    fgets(string, sizeof(string), stdin);

     string[strcspn(string, "\n")] = '\0';

    puts("Informe um caractere:");
    scanf("%c", &caractere);

    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == caractere) {
            contem = 1;    
        }
    }

    if(contem) puts("A string contém o caractere informado!");
    else puts("A string não contém o caractere informado!");

    return 0;
}