#include <stdio.h>
#include <string.h>

#define MAX 50

int main() {
    
    char string[MAX];
    int i = 0;


    puts("Digite a string que desejar:");
    fgets(string, sizeof(string), stdin);

    string[strcspn(string, "\n")] = '\0';

    while (string[i] != '\0') i++;

    printf("Quantidade de caracteres: %d", i );

    return 0;
}