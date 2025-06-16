#include <stdio.h>

int main() {
    char O;
    float M[12][12];

    scanf(" %c", &O); 
    
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%f", &M[i][j]);
        }
    }

    float soma = 0;
    int cont = 0;

    
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            if (i + j < 11) {
                soma += M[i][j];
                cont++;
            }
        }
    }

    if (O == 'S') {
        printf("%.1f\n", soma);
    } else if (O == 'M') {
        printf("%.1f\n", soma / cont);
    }

    return 0;
}
