#include <stdio.h>
 
int main() {
 
    int NUMERO, HORAS;
    float VALOR, SALARIO;
    
    scanf("%d %d %f", &NUMERO, &HORAS, &VALOR);
    
    SALARIO = HORAS * VALOR;
    
    printf("NUMBER = %d\n", NUMERO);
    printf("SALARY = U$ %.2f\n", SALARIO);
    
    return 0;
}
