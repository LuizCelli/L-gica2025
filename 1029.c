#include <stdio.h>

int chamadas = 0;

int fib(int n) {
    chamadas++;
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int N, X;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &X);

        chamadas = -1;
        int resultado = fib(X);
        printf("fib(%d) = %d calls = %d\n", X, chamadas, resultado);
    }

    return 0;
}
