#include <stdio.h>
#include <string.h>

#define MAX 50

void versao_com_func () {

 char string1[MAX], string2[MAX];

 puts("Informe uma string:");
 fgets(string1, sizeof(string1), stdin);

string1[strcspn(string1, "\n")] = '\0';

puts("Informe outra string:");
fgets(string2, sizeof(string2), stdin);

string2[strcspn(string2, "\n")] = '\0';

strcat(string1, string2);

    
printf("String concatenada: %s\n", string1);

}

int main() {
    versao_com_func();

    
    return 0;
}