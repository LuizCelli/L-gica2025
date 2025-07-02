#include <stdio.h>

int valido(int matriz[9][9]) {
    int i, j, k, l;
    int freq[10];

    for (i = 0; i < 9; i++) {
        for (k = 1; k <= 9; k++) freq[k] = 0;
        for (j = 0; j < 9; j++) {
            int val = matriz[i][j];
            if (val < 1 || val > 9 || freq[val]) return 0;
            freq[val] = 1;
        }
    }

    for (j = 0; j < 9; j++) {
        for (k = 1; k <= 9; k++) freq[k] = 0;
        for (i = 0; i < 9; i++) {
            int val = matriz[i][j];
            if (val < 1 || val > 9 || freq[val]) return 0;
            freq[val] = 1;
        }
    }

    for (i = 0; i < 9; i += 3) {
        for (j = 0; j < 9; j += 3) {
            for (k = 1; k <= 9; k++) freq[k] = 0;
            for (k = 0; k < 3; k++) {
                for (l = 0; l < 3; l++) {
                    int val = matriz[i + k][j + l];
                    if (val < 1 || val > 9 || freq[val]) return 0;
                    freq[val] = 1;
                }
            }
        }
    }

    return 1;
}

int main() {
    int n, matriz[9][9];

    scanf("%d", &n);

    for (int inst = 1; inst <= n; inst++) {
        // Lê a matriz 9x9
        for (int i = 0; i < 9; i++)
            for (int j = 0; j < 9; j++)
                scanf("%d", &matriz[i][j]);

        printf("Instancia %d\n", inst);

        if (valido(matriz))
            printf("SIM\n");
        else
            printf("NAO\n");

        printf("\n");
    }

    return 0;
}
