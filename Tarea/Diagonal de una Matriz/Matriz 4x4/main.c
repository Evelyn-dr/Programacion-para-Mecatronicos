#include <stdio.h>

int main()
{
    int matriz[4][4] = {{1, 2, 3, 4},
                        {5, 6, 7, 8},
                        {9, 10, 11, 12},
                        {13, 14, 15, 16}};
    int producto_diagonal_secundaria = 1;

    for (int i = 0; i < 4; i++) {
        producto_diagonal_secundaria *= matriz[i][3 - i];
    }

    printf("El producto de la diagonal secundaria es: %d\n", producto_diagonal_secundaria);

    return 0;
}
