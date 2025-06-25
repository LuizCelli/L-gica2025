#include <stdio.h>

int main() {
    double A, B, C;
    const double PI = 3.14159;

    scanf("%lf %lf %lf", &A, &B, &C);
    
    double TRIANGULO = (A * C) / 2;
    double CIRCULO = PI * C * C;
    double TRAPEZIO = (A + B) * C / 2;
    double QUADRADO = B * B;
    double RETANGULO = A * B;

    printf("TRIANGULO: %.3lf\n", TRIANGULO);
    printf("CIRCULO: %.3lf\n", CIRCULO);
    printf("TRAPEZIO: %.3lf\n", TRAPEZIO);
    printf("QUADRADO: %.3lf\n", QUADRADO);
    printf("RETANGULO: %.3lf\n", RETANGULO);

    return 0;
}
