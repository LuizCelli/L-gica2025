#include <stdio.h>

int main() {
    int N, deslocamento;
    char texto[51];

    scanf("%d", &N);
    getchar();

    for (int i = 0; i < N; i++) {
        int j = 0;
        char c;
        while ((c = getchar()) != '\n' && c != EOF && j < 50) {
            texto[j++] = c;
        }
        texto[j] = '\0';


        scanf("%d", &deslocamento);
        getchar();

        for (j = 0; texto[j] != '\0'; j++) {
            texto[j] = texto[j] - deslocamento;
            if (texto[j] < 'A') {
                texto[j] += 26;
            }
        }

        printf("%s\n", texto);
    }

    return 0;
}
