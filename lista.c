#include  <stdio.h>
#include <math.h> 

void primeira_questao() {
    
    int x;

    printf("Informe um valor: ");
    scanf("%d", &x);

    printf("Valor na base 16: %x\n", x);
    printf("Valor na base 8: %o\n", x);
}

void segunda_questao() {
    
    float x;
    
    printf("Informe um número pertencente aos reais:\n");
    scanf("%f", &x);

    printf("Valor com apenas uma casa decimal: %.1f", x);
}

void terceira_questao() {

    int n; 

    printf("Informe um número:\n");
    scanf("%d", &n);
    printf("Você escolheu o número: %d\n", n);
    printf("O triplo desse valor é: %d\n", n * 3);
    printf("O quadrado desse valor é: %d\n", n * n);
    printf("A metade desse valor é: %.2f\n", (float)n * 0.5);

}

void quarta_questao() {
    
    float conta;

    printf("Qual o valor da conta?:\n");
    scanf("%f", &conta);
    printf("O valor dos 10%% é: %.2f reais\n", conta * 0.10);
    printf("O valor total da conta é: %.2f reais\n", conta * 1.10);

}

void quinta_questao() {
    
    float altura;
    char sexo;

    printf("Informe sua altura (em metros):\n ");
    scanf("%f", &altura);

    printf("Informe seu sexo (H - homem ou M - mulher):\n ");
    scanf(" %c", &sexo);

    if (sexo == 'H' || sexo == 'h') {
        printf("Altura: %.2f metros.\n", altura);
        printf("Sexo: Homem.\n");
        printf("Peso ideal: %.2f kg", 72.7 * altura - 58);
    } else if (sexo == 'M' || sexo == 'm') {
        printf("Altura: %.2f metros.\n", altura);
        printf("Sexo: Mulher.\n");
        printf("Peso ideal: %.2f kg", 62.1 * altura - 44.7);
    } else {
        printf("Sexo Inválido!");
    }

    
}

void sexta_questao() {
  
    int horas, minutos, segundos, totalSegundos;
   
    printf("Quantidade de horas: ");
    scanf("%d", &horas);
    printf("Quantidade de minutos: ");
    scanf("%d", &minutos);
    printf("Quantidade de segundos: ");
    scanf("%d", &segundos);

   totalSegundos = (horas * 3600) + (minutos * 60) + segundos;
   printf("Total de segundos: %d\n", totalSegundos);

}

void setima_questao() {

    int n;

    printf("Informe um valor:\n ");
    scanf("%d", &n);
    printf("O quadrado desse valor é: %d", n * n);

}

void oitava_questao() {

    int n;

    printf("Informe um número:\n ");
    scanf("%d", &n);
    printf("Número escolhido: %d\n", n);
    printf("Seu sucessor: %d\n", ++n);
    printf("Seu antecessor: %d", n - 2);

}

void nona_questao() {
    
    float volume, comprimento, largura, altura;

    printf("Informe o comprimento da caixa:\n");
    scanf("%f", &comprimento);
    printf("Informe a largura da caixa:\n");
    scanf("%f", &largura);
    printf("Informe a altura da caixa:\n");
    scanf("%f", &altura);
    volume = comprimento * largura * altura;
    printf("O volume da caixa é: %.2f", volume);
}

void decima_questao() {
    
    float cotacao, quantReais;

    printf("Qual o valor da cotação do dólar?:\n ");
    scanf("%f", &cotacao);
    printf("Qual a quantidade de reais que você deseja converter?:\n ");
    scanf("%f", &quantReais);
    printf("O valor em dólar é: %.2f $", cotacao * quantReais);

}

void questao_onze() {
    int a, b;

    printf("Informe um valor A:\n ");
    scanf("%d", &a);
    printf("Informe um valor B:\n ");
    scanf("%d", &b);
    printf("A soma é: %d\n", a + b);
    printf("A diferença é: %d\n", a - b);
    printf("O produto é: %d\n", a * b);
    printf("O quociente é: %.2f\n", (float)a / b);
    printf("O resto é: %d\n", a % b);


}

void questao_doze() {
   
    int A, B;

    printf("Informe o valor de A: ");
    scanf("%d", &A);
    printf("Informe o valor de B: ");
    scanf("%d", &B);

    A = A ^ B;  
    B = A ^ B;  
    A = A ^ B;  

    printf("Valor de A após a troca: %d\n", A);
    printf("Valor de B após a troca: %d\n", B);
}

void questao_treze() {

    int c;

    printf("Informe a temperatura em graus Celsius:\n");
    scanf("%d", &c);
    printf("A temperatura em Farenheit é: %.2f °F", (float)(9 * c + 160) / 5);


}

void questao_quatorze() {

}

void questao_quinze() {

    float hora_aula, desconto;
    int horas_trabalhadas;
    printf("Valor da hora aula:\n ");
    scanf("%f", &hora_aula);
    printf("Quantidade de horas trabalhadas:\n ");
    scanf("%d", &horas_trabalhadas);
    printf("Percentual de desconto do INSS:\n ");
    scanf("%f", &desconto);
    printf("Salário bruto: %.2f R$\n", hora_aula * horas_trabalhadas);
    printf("Salário líquido: %.2f R$\n", (hora_aula * horas_trabalhadas) - desconto / 100 * 100);

}

void questao_dezesseis() {
   
    int n;

    printf("Digite um número: ");
    scanf("%d", &n);

    int modulo = (n < 0) ? -n : n;

    printf("O módulo de %d é: %d\n", n, modulo);
}

void questao_dezessete() {
    
    float raio;

    printf("Informe o valor do raio:");
    scanf("%f", &raio);
    printf("Valor da circunferência: %f", 2 * 3.14159 * raio);
    printf("Valor do raio: %f", 2 * raio);
    printf("Valor da área: %f", 3.14159 * raio * raio);
}

void questao_dezoito() {
   
    printf("Retângulo:\n");
    printf("********\n");
    printf("*      *\n");
    printf("*      *\n");
    printf("*      *\n");
    printf("*      *\n");
    printf("*      *\n");
    printf("*      *\n");
    printf("*      *\n");
    printf("********\n\n");

    
    printf("Elipse:\n");
    printf("   ***    \n");
    printf("  *   *  \n");
    printf(" *     * \n");
    printf(" *     * \n");
    printf(" *     *  \n");
    printf(" *     *  \n");
    printf(" *     *  \n");
    printf("  *   *  \n");
    printf("   ***    \n\n");

   
    printf("Seta:\n");
    printf("    *    \n");
    printf("   ***   \n");
    printf("  *****  \n");
    printf("    *    \n");
    printf("    *    \n");
    printf("    *    \n");
    printf("    *    \n");
    printf("    *    \n");
    printf("    *    \n\n");

    
    printf("Losango:\n");
    printf("    *    \n");
    printf("   * *   \n");
    printf("  *   *  \n");
    printf(" *     * \n");
    printf("*       *\n");
    printf(" *     *\n");
    printf("  *   *\n");
    printf("   * *\n");
    printf("    * \n");
    
}

void questao_dezenove() {

    int x;

    printf("Informe um número:");
    scanf("%d", &x);
    printf("%d\n", x);

    !(x % 2) ? printf("É par!") : printf("É ímpar!");

}

void questao_vinte() {
    
    int a, b;

    
    printf("Digite o primeiro número: ");
    scanf("%d", &a);
    printf("Digite o segundo número: ");
    scanf("%d", &b);

    (b != 0 && !(a % b)) ? printf("É múltiplo.\n") : printf("Não é múltiplo.\n");
}

void questao_vinteum() {

    printf("%d\n", 'A');
    printf("%d\n", 'B');
    printf("%d\n", 'C');
    printf("%d\n", 'a');
    printf("%d\n", 'b');
    printf("%d\n", 'c');
    printf("%d\n", '0');
    printf("%d\n", '1');
    printf("%d\n", '2');
    printf("%d\n", '$');
    printf("%d\n", '*');
    printf("%d\n", '+');
    printf("%d\n", '/');
    printf("%d\n", ' ');
}

void questao_vintedois() {
   
    int n, centena, dezena, unidade;

    printf("Digite um número com 3 dígitos: ");
    scanf("%d", &n);

    centena = n / 100;         
    dezena = (n / 10) % 10;    
    unidade = n % 10;           

    printf("Número após a inversão: %d\n", unidade * 100 + dezena * 10 + centena);
}

void questao_vintetres() {

    int x, n, produto;

    
    printf("Valor de x: ");
    scanf("%d", &x);
    printf("Valor de n: ");
    scanf("%d", &n);

    int potenciacao = 1 << n;

   produto = x * potenciacao;

    printf("%d\n", produto);
}

void questao_vintequatro() {
    
    int total_segundos;
    int horas, minutos, segundos;

    printf("Digite os segundos: ");
    scanf("%d", &total_segundos);

 
    horas = total_segundos / 3600;           
    minutos = (total_segundos % 3600) / 60;  
    segundos = total_segundos % 60;          

    printf("Em %d segundos há:\n", total_segundos);
    printf("%d horas\n", horas);
    printf("%d minutos\n", minutos);
    printf("%d segundos\n", segundos);
}

void questao_vintecinco() {
  

     double x1, x2, y1, y2, distancia;

   
    printf("x1: ");
    scanf("%lf", &x1);
    printf("y1: ");
    scanf("%lf", &y1);
    printf("x2: ");
    scanf("%lf", &x2);
    printf("y2: ");
    scanf("%lf", &y2);

   
    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
    printf("Distância: %.2lf\n", distancia);

}

void questao_vinteseis() {
    float n1, n2, n3, mediaA, mediaG;

    printf("Informe o primeiro valor:\n ");
    scanf("%f", &n1);
    printf("Informe o segundo valor:\n ");
    scanf("%f", &n2);
    printf("Informe o terceiro valor:\n ");
    scanf("%f", &n3);

    mediaA = (n1 + n2 + n3) / 3;
    mediaG = pow(n1 * n2 * n3, 1.0 / 3.0);

    printf("Valor da média Aritmética: %.2f\n", mediaA);
    printf("Valor da média geométrica: %.2f\n", mediaG);

}

int main() {
    // chamar a função equivalente a questao que desejar compilar.

    return 0;
}