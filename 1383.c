#include <stdio.h>

int is_valid(int matrix[9][9]) {
    int i, j, k, l;
    int seen[10];

   
    for (i = 0; i < 9; i++) {
        for (k = 1; k <= 9; k++) seen[k] = 0;
        for (j = 0; j < 9; j++) {
            int val = matrix[i][j];
            if (val < 1 || val > 9 || seen[val]) return 0;
            seen[val] = 1;
        }
    }

    
    for (j = 0; j < 9; j++) {
        for (k = 1; k <= 9; k++) seen[k] = 0;
        for (i = 0; i < 9; i++) {
            int val = matrix[i][j];
            if (val < 1 || val > 9 || seen[val]) return 0;
            seen[val] = 1;
        }
    }

    
    for (i = 0; i < 9; i += 3) {
        for (j = 0; j < 9; j += 3) {
            for (k = 1; k <= 9; k++) seen[k] = 0;
            for (k = 0; k < 3; k++) {
                for (l = 0; l < 3; l++) {
                    int val = matrix[i+k][j+l];
                    if (val < 1 || val > 9 || seen[val]) return 0;
                    seen[val] = 1;
                }
            }
        }
    }

    return 1;
}

int main() {
    int T, i, j, inst = 1;
    int mat[9][9];

    scanf("%d", &T);

    while (T--) {
        for (i = 0; i < 9; i++)
            for (j = 0; j < 9; j++)
                scanf("%d", &mat[i][j]);

        printf("Instancia %d\n", inst++);
        if (is_valid(mat))
            printf("SIM\n");
        else
            printf("NAO\n");
        printf("\n");
    }

    return 0;
}
