#include <stdio.h>
#include <string.h>

#define MAX 50

void versao_sem_func () {

 char string1[MAX], string2[MAX];
 int i = 0, igual = 1;

 puts("Informe uma string:");
 fgets(string1, sizeof(string1), stdin);

string1[strcspn(string1, "\n")] = '\0';

puts("Informe outra string:");
fgets(string2, sizeof(string2), stdin);

string2[strcspn(string2, "\n")] = '\0';

 while (string1[i] != '\0' || string2[i] != '\0') {
        if (string1[i] != string2[i]) {
            igual = 0;
            break;
        }
        i++;
    }

    if(igual) puts("As duas strings são iguais!");
    else puts("As duas strings não são iguais!");
}

void versao_com_func () {

char string1[MAX], string2[MAX];


 puts("Informe uma string:");
 fgets(string1, sizeof(string1), stdin);

string1[strcspn(string1, "\n")] = '\0';

puts("Informe outra string:");
fgets(string2, sizeof(string2), stdin);

string2[strcspn(string2, "\n")] = '\0';

if (strcmp(string1, string2) == 0) puts("As strings são iguais!");
else puts("As strings são diferentes!");
    
}

int main() {
    versao_com_func();
    versao_sem_func();
   
return 0;

}