#include <stdio.h>

int main() {
    char operacao;
    double matriz[12][12], soma = 0;
    int i, j;

    scanf(" %c", &operacao);

    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            scanf("%lf", &matriz[i][j]);
            if (j < i && j < 11 - i) {
                soma += matriz[i][j];
            }
        }
    }

    if (operacao == 'M') {
        soma /= 30.0;
    }

    printf("%.1lf\n", soma);

    return 0;
}
