#include <stdio.h>
 
int main() {
    int N[10];
    int V;
    scanf("%d", &V);
    
    for (int i = 0; i < 10; i++){
        N[i] = V;
        printf("N[%d] = %d\n", i, N[i]);
        V *= 2;
    }
    
    return 0;
}