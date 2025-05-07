#include <stdio.h>
 
int main() {
 
    int n;
    int f = 1;
    
    scanf("%d", &n);
    
    for(int i = n; i > 0; i --) {
        f *= i;
        
    }
    
    
    
    printf("%d\n",f);
 
    return 0;
}