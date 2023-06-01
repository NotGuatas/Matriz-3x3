#include <stdio.h>
#include "funciones.h"

int main() {
    float matriz[3][3];
    float coeficientes[3];
    
    printf("Ingrese los elementos de la matriz en forma de filas :\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%f", &matriz[i][j]);
        }
    }
    
    printf("Ingrese los elementos de la otra matriz:\n");
    for (int i = 0; i < 3; i++) {
        scanf("%f", &coeficientes[i]);
    }
    
    float determinante = caldet(matriz);
    
    printf("La determinante de la matriz es: %f\n", determinante);
    
    calma(matriz, coeficientes);
    
    return 0;
}