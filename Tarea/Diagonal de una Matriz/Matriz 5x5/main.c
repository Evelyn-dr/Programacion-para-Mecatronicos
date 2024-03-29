#include <stdio.h>

int main()
 {
    int matriz[5][5] = {{1, 2, 3, 4, 5},
                        {6, 7, 8, 9, 10},
                        {11, 12, 13, 14, 15},
                        {16, 17, 18, 19, 20},
                        {21, 22, 23, 24, 25}};
    int suma_diagonales = 0;

    for (int i = 0; i < 5; i++) {
        suma_diagonales += matriz[i][i] + matriz[i][4 - i];
    }

    printf("La suma de ambas diagonales es: %d\n", suma_diagonales);

    return 0;
}
