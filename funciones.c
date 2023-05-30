#include <stdlib.h>

int caldet(int matriz[3][3]) {
    int dete;
    
    dete = (matriz[0][0] * matriz[1][1] * matriz[2][2]) +
          (matriz[0][1] * matriz[1][2] * matriz[2][0]) +
          (matriz[0][2] * matriz[1][0] * matriz[2][1]) -
          (matriz[0][2] * matriz[1][1] * matriz[2][0]) -
          (matriz[0][1] * matriz[1][0] * matriz[2][2]) -
          (matriz[0][0] * matriz[1][2] * matriz[2][1]);
    
    return dete;

}
void calma(int matriz[3][3], int coeficientes[3]) {
    int determatriz = caldet(matriz);
    
    if (determatriz == 0) {
        printf("El sistema de ecuaciones no tiene solucion unica \n");
        return;
    }
    
    int detex[3][3] = 
    {
        {coeficientes[0], matriz[0][1], matriz[0][2]},
        {coeficientes[1], matriz[1][1], matriz[1][2]},
        {coeficientes[2], matriz[2][1], matriz[2][2]}
    };
    
    int detey[3][3] = 
    {
        {matriz[0][0], coeficientes[0], matriz[0][2]},
        {matriz[1][0], coeficientes[1], matriz[1][2]},
        {matriz[2][0], coeficientes[2], matriz[2][2]}
    };
    
    int detez[3][3] =
     {
        {matriz[0][0], matriz[0][1], coeficientes[0]},
        {matriz[1][0], matriz[1][1], coeficientes[1]},
        {matriz[2][0], matriz[2][1], coeficientes[2]}
    };
    
    int xval = caldet(detex);
    int yval = caldet(detey);
    int zval = caldet(detez);
    
    int x = xval / determatriz;
    int y = yval / determatriz;
    int z = zval / determatriz;
    
    printf("Las posiciones son:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n", z);
}