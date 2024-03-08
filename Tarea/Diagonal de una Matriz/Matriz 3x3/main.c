#include <stdio.h>

int main()
{
    int matriz[3][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};
    int suma_diagonal = 0;

    for (int i = 0; i < 3; i++) {
        suma_diagonal += matriz[i][i];
    }

    printf("La suma de la diagonal principal es: %d\n", suma_diagonal);

    return 0;
}
