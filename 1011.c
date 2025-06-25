#include <stdio.h>

int main() {
    double RAIO, VOLUME;
    const double PI = 3.14159;

    scanf("%lf", &RAIO);

    VOLUME = (4.0 / 3) * PI * RAIO * RAIO * RAIO;

    printf("VOLUME = %.3lf\n", VOLUME);

    return 0;
}
