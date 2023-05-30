#include <stdio.h>
#include "funciones.h"

int main() {
    int matriz[3][3];
    int coeficientes[3];
    
    printf("Ingrese los elementos de la matriz en forma de filas :\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("Ingrese los elementos de ka otra matriz:\n");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &coeficientes[i]);
    }
    
    int determinante = caldet(matriz);
    
    printf("La determinante de la matriz es: %d\n", determinante);
    
    calma(matriz, coeficientes);
    
    return 0;
}