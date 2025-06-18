#include <stdio.h>
#include <string.h>

#define MAX 1010

int divide_por_2(char *num) {
    int len = strlen(num);
    int i, carry = 0, temp;
    char resultado[MAX] = "";

    for (i = 0; i < len; i++) {
        temp = carry * 10 + (num[i] - '0');
        resultado[i] = (temp / 2) + '0';
        carry = temp % 2;
    }

    i = 0;
    while (resultado[i] == '0') i++;
    if (i == len) i--;
    strcpy(num, &resultado[i]);

    return carry;
}

int conta_uns(char *num) {
    int count = 0;
    while (strcmp(num, "0") != 0) {
        count += divide_por_2(num);  
    }
    return count;
}

int main() {
    int T;
    char num[MAX];

    scanf("%d", &T);
    while (T--) {
        scanf("%s", num);
        int total_uns = conta_uns(num);
        printf("%d\n", total_uns);
    }

    return 0;
}
