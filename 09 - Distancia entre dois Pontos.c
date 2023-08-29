#include <stdio.h>
#include <math.h>

int main(){
    float x1, y1, x2, y2, x, y, distancia;
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
    x = pow(x2-x1, 2);
    y = pow(y2-y1, 2);
    distancia = sqrt(x+y);
    printf("%.4f\n", distancia);
    return 0;
}