#include <stdio.h>

int main() {
    int c;
    char T;
    float M[12][12];

    scanf("%d", &c);
    scanf(" %c", &T); 

   
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%f", &M[i][j]);
        }
    }

    float soma = 0;
  
    for (int i = 0; i < 12; i++) {
        soma += M[i][c];
    }

    if (T == 'S') {
        printf("%.1f\n", soma);
    } else if (T == 'M') {
        printf("%.1f\n", soma / 12);
    }

    return 0;
}
