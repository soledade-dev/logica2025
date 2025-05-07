#include <stdio.h>
 
int main() {
    int cp1,np1,cp2,np2;
    float vp1,vp2,p1,p2,t;
    
    scanf("%d",&cp1);
    scanf("%d",&np1);
    scanf("%f",&vp1);
    
    
    scanf("%d",&cp2);
    scanf("%d",&np2);
    scanf("%f",&vp2);
    
    
    scanf("%f",&p1);
    scanf("%f",&p2);
    scanf("%f",&t);
    
    p1 = np1 * vp1;
    p2 = np2 * vp2;
    t = p1 + p2;
    
    printf("VALOR A PAGAR: R$ %.2lf\n",t);
 
    return 0;
}