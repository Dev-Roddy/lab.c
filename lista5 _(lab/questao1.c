#include <stdio.h>
#include <stdlib.h>

int main () {

    int x, y, *pt_x, *pt_y, *pt_sum;

    printf("Informe o primeiro valor:\n ");
    scanf("%d", &x);
    printf("Informe o segundo valor:\n ");
    scanf("%d", &y);

    pt_x = &x;
    pt_y = &y;
    pt_sum = *pt_x + *pt_y;

    printf("%d + %d = %d\n", *pt_x, *pt_y, pt_sum);
    printf("[%p]", pt_sum);

}