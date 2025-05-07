#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);
    getchar();

    while (T--) {
        char numero[100010];
        scanf("%s", numero);

        int count = 0;
        int i = 0;

        while (numero[i]) {
            int resto = 0;
            int temp[100010];
            int len = strlen(numero);
            int j, k = 0;

            for (j = 0; j < len; j++) {
                int atual = resto * 10 + (numero[j] - '0');
                temp[k++] = atual / 2;
                resto = atual % 2;
            }

            if (resto == 1) count++;

            int comeco = 0;
            while (comeco < k && temp[comeco] == 0) comeco++;

            for (j = comeco; j < k; j++) {
                numero[j - comeco] = temp[j] + '0';
            }
            numero[j - comeco] = '\0';

            if (numero[0] == '\0') break;
        }

        printf("%d\n", count);
    }

    return 0;
}
