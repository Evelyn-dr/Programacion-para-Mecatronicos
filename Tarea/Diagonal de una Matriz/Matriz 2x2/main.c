#include <stdio.h>

int main()
{
    int matriz[2][2] = {{1, 2},
                        {3, 4}};
    int producto_diagonal = 1;

    for (int i = 0; i < 2; i++) {
        producto_diagonal *= matriz[i][i];
    }

    printf("El producto de la diagonal principal es: %d\n", producto_diagonal);

    return 0;
}
