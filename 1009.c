#include <stdio.h>

int main() {
    char nome[50];
    double SALARIO, VENDAS, TOTAL;

    scanf("%s", nome);
    scanf("%lf %lf", &SALARIO, &VENDAS);

    TOTAL = SALARIO + (VENDAS * 0.15);

    printf("TOTAL = R$ %.2lf\n", TOTAL);

    return 0;
}
