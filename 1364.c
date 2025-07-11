#include <stdio.h>

int sudoku_valido(int matriz[9][9]) {
    int linha, coluna, bloco_linha, bloco_coluna;
    int valores[10];

    for (linha = 0; linha < 9; linha++) {
        for (int n = 1; n <= 9; n++) valores[n] = 0;
        for (coluna = 0; coluna < 9; coluna++) {
            int valor = matriz[linha][coluna];
            if (valor < 1 || valor > 9 || valores[valor]) return 0;
            valores[valor] = 1;
        }
    }

    for (coluna = 0; coluna < 9; coluna++) {
        for (int n = 1; n <= 9; n++) valores[n] = 0;
        for (linha = 0; linha < 9; linha++) {
            int valor = matriz[linha][coluna];
            if (valor < 1 || valor > 9 || valores[valor]) return 0;
            valores[valor] = 1;
        }
    }

    for (bloco_linha = 0; bloco_linha < 9; bloco_linha += 3) {
        for (bloco_coluna = 0; bloco_coluna < 9; bloco_coluna += 3) {
            for (int n = 1; n <= 9; n++) valores[n] = 0;
            for (linha = 0; linha < 3; linha++) {
                for (coluna = 0; coluna < 3; coluna++) {
                    int valor = matriz[bloco_linha + linha][bloco_coluna + coluna];
                    if (valor < 1 || valor > 9 || valores[valor]) return 0;
                    valores[valor] = 1;
                }
            }
        }
    }

    return 1;
}

int main() {
    int testes, linha, coluna, instancia = 1;
    int grade[9][9];

    scanf("%d", &testes);

    while (testes--) {
        for (linha = 0; linha < 9; linha++)
            for (coluna = 0; coluna < 9; coluna++)
                scanf("%d", &grade[linha][coluna]);

        printf("Instancia %d\n", instancia++);
        if (sudoku_valido(grade))
            printf("SIM\n");
        else
            printf("NAO\n");
        printf("\n");
    }

    return 0;
}
