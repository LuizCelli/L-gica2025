#include <stdio.h>

int main() {
    int N;
    char linha[1001];

    scanf("%d", &N);
    getchar();
    
    for (int i = 0; i < N; i++) {
        int len = 0;
        char c;
        while ((c = getchar()) != '\n' && c != EOF && len < 1000) {
            linha[len++] = c;
        }
        linha[len] = '\0';

        for (int j = 0; j < len; j++) {
            if ((linha[j] >= 'a' && linha[j] <= 'z') || (linha[j] >= 'A' && linha[j] <= 'Z')) {
                linha[j] += 3;
            }
        }

        for (int j = 0; j < len / 2; j++) {
            char temp = linha[j];
            linha[j] = linha[len - 1 - j];
            linha[len - 1 - j] = temp;
        }

        for (int j = len / 2; j < len; j++) {
            linha[j] -= 1;
        }

        printf("%s\n", linha);
    }

    return 0;
}
