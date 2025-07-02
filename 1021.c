#include <stdio.h>

int main() {
    int notas, moedas, valor_int;
    double valor;

    scanf("%lf", &valor);

    valor_int = (int)(valor * 100 + 0.5);

    printf("NOTAS:\n");
    notas = valor_int / 10000;
    printf("%d nota(s) de R$ 100.00\n", notas);
    valor_int %= 10000;

    notas = valor_int / 5000;
    printf("%d nota(s) de R$ 50.00\n", notas);
    valor_int %= 5000;

    notas = valor_int / 2000;
    printf("%d nota(s) de R$ 20.00\n", notas);
    valor_int %= 2000;

    notas = valor_int / 1000;
    printf("%d nota(s) de R$ 10.00\n", notas);
    valor_int %= 1000;

    notas = valor_int / 500;
    printf("%d nota(s) de R$ 5.00\n", notas);
    valor_int %= 500;

    notas = valor_int / 200;
    printf("%d nota(s) de R$ 2.00\n", notas);
    valor_int %= 200;

    printf("MOEDAS:\n");
    moedas = valor_int / 100;
    printf("%d moeda(s) de R$ 1.00\n", moedas);
    valor_int %= 100;

    moedas = valor_int / 50;
    printf("%d moeda(s) de R$ 0.50\n", moedas);
    valor_int %= 50;

    moedas = valor_int / 25;
    printf("%d moeda(s) de R$ 0.25\n", moedas);
    valor_int %= 25;

    moedas = valor_int / 10;
    printf("%d moeda(s) de R$ 0.10\n", moedas);
    valor_int %= 10;

    moedas = valor_int / 5;
    printf("%d moeda(s) de R$ 0.05\n", moedas);
    valor_int %= 5;

    moedas = valor_int / 1;
    printf("%d moeda(s) de R$ 0.01\n", moedas);

    return 0;
}
