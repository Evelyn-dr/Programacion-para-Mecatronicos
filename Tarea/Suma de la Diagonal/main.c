#include <stdio.h>

int main() {
  int n;
  printf("Ingrese el tamaño de la matriz: ");
  scanf("%d", &n);

  int matriz[n][n];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d", &matriz[i][j]);
    }
  }

  int suma_diagonal_principal = 0;
  for (int i = 0; i < n; i++) {
    suma_diagonal_principal += matriz[i][i];
  }
  int suma_diagonal_secundaria = 0;
  for (int i = 0; i < n; i++) {
    suma_diagonal_secundaria += matriz[i][n - i - 1];
  }
  printf("Suma diagonal principal: %d\n", suma_diagonal_principal);
  printf("Suma diagonal secundaria: %d\n", suma_diagonal_secundaria);

  return 0;
}
