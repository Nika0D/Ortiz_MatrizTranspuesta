#include <stdio.h>
#include <stdlib.h>
//se incluye la biblioteca base y "stdlib.h" para generar numeros random.
int main(){
    int n, m;
    //establsco las dimecniones de las matrices escaneando "n" y "m" y llamo a la funcion de "srand"
    srand(time(NULL));
    printf("Escriba un tamaño de filas\n");
    scanf("%d", &n);
    printf("Escriba un tamaño de columnas\n");
    scanf("%d", &m);
    int matrix[n][m];
    int matriy[n][m];
    //doy un valor random "matrix" y doy el valor a las cordenadas transpuestas.
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            matrix[i][j]=rand()%101;
            matriy[j][i]=matrix[i][j];
        }
    }
    //imprimo tanto la "matrix" como "matriy" rotando los valores en "j" e "i" con las condicionales for.
    printf("La matriz generada es:\n");   
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf(" %d ", matrix[i][j]);
        }
        printf("\n"); 
    }
    printf("\n");
    printf("La matriz transpuesta es:\n");   
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf(" %d ", matriy[i][j]);
        }
        printf("\n"); 
    }
    return 0;
}