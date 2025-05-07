#include <stdio.h>
#include <math.h>
 
int main() {
    float x1,y1,x2,y2,d,x,y,xy;
    
    scanf("%f",&x1);
    scanf("%f",&y1);
    scanf("%f",&x2);
    scanf("%f",&y2);
    scanf("%f",&d);
    scanf("%f",&x);
    scanf("%f",&y);
    scanf("%f",&xy);
    
    
    x = (x2 - x1) * (x2 - x1);
    y = (y2 - y1) * (y2 - y1);
    xy = x + y;
     
    d = sqrt(xy);
    
    printf("%0.4f\n",d);
 
   
    return 0;
}