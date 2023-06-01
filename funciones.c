#include <stdlib.h>

float caldet(float matriz[3][3]) {
    int dete;
    
    dete = (matriz[0][0] * matriz[1][1] * matriz[2][2]) +
          (matriz[0][1] * matriz[1][2] * matriz[2][0]) +
          (matriz[0][2] * matriz[1][0] * matriz[2][1]) -
          (matriz[0][2] * matriz[1][1] * matriz[2][0]) -
          (matriz[0][1] * matriz[1][0] * matriz[2][2]) -
          (matriz[0][0] * matriz[1][2] * matriz[2][1]);
    
    return dete;

}
void calma(float matriz[3][3], float coeficientes[3]) {
    float determatriz = caldet(matriz);
    
    if (determatriz == 0) {
        printf("El sistema de ecuaciones no tiene solucion unica \n");
        return;
    }
    
    float detex[3][3] = 
    {
        {coeficientes[0], matriz[0][1], matriz[0][2]},
        {coeficientes[1], matriz[1][1], matriz[1][2]},
        {coeficientes[2], matriz[2][1], matriz[2][2]}
    };
    
    float detey[3][3] = 
    {
        {matriz[0][0], coeficientes[0], matriz[0][2]},
        {matriz[1][0], coeficientes[1], matriz[1][2]},
        {matriz[2][0], coeficientes[2], matriz[2][2]}
    };
    
    float detez[3][3] =
     {
        {matriz[0][0], matriz[0][1], coeficientes[0]},
        {matriz[1][0], matriz[1][1], coeficientes[1]},
        {matriz[2][0], matriz[2][1], coeficientes[2]}
    };
    
    float xval = caldet(detex);
    float yval = caldet(detey);
    float zval = caldet(detez);
    
    float x = xval / determatriz;
    float y = yval / determatriz;
    float z = zval / determatriz;
    
    printf("Las posiciones son:\n");
    printf("x = %f\n", x);
    printf("y = %f\n", y);
    printf("z = %f\n", z);
}