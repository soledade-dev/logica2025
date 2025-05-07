#include <stdio.h>
#include <math.h>
 
int main() {
 
    double a,b,c;
    
    while(scanf("%lf %lf %lf", &a, &b, &c) == 3){
    double p = (a + b + c) / 2;
    
    double area = sqrt(p * (p - a) * (p - b) * (p - c)); 
    
    double raio = area / p;
    
    double rosas = 3.1415926535897 * raio * raio;
    
    double violeta = area - rosas;
    
    double raio2 = (a * b * c) / (4 * area);
    
    double girassol = 3.1415926535897 * raio2 * raio2 - area;
    
    printf("%.4lf %.4lf %.4lf\n",girassol, violeta, rosas);
    
        
    }
    
 
    return 0;
}