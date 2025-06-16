#include <stdio.h>
#include <string.h>

int main() {
    int N;
    while (scanf("%d", &N) && N != 0) {
        int penalidades[26] = {0};  
        int resolvidos[26] = {0};   
        int tempos[26] = {0};       
        char problema;
        int tempo;
        char resultado[10];

        for (int i = 0; i < N; i++) {
            scanf(" %c %d %s", &problema, &tempo, resultado);
            int indice = problema - 'A';
            if (resolvidos[indice]) continue;
            if (strcmp(resultado, "correct") == 0) {
                resolvidos[indice] = 1;
                tempos[indice] = tempo;
            } else {
                penalidades[indice] += 20;
            }
        }

        int total_resolvidos = 0;
        int tempo_total = 0;
        for (int i = 0; i < 26; i++) {
            if (resolvidos[i]) {
                total_resolvidos++;
                tempo_total += tempos[i] + penalidades[i];
            }
        }

        printf("%d %d\n", total_resolvidos, tempo_total);
    }

    return 0;
}
