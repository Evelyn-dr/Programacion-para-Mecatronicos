#include <stdio.h>

int main() {
    char *cad0;
    cad0 = "Argentina";
    puts(cad0);
    cad0 = "Brasil";
    puts(cad0);

    char cad1[100] = ""; // Se inicializa cad1 como una cadena vacía
    gets(cad1); // Se lee una cadena y se almacena en cad1
    puts(cad1); // Se imprime la cadena almacenada en cad1

    char cad2[20] = "Mexico"; // Se declara e inicializa cad2
    puts(cad2); // Se imprime cad2
    gets(cad2); // Se lee una nueva cadena y se almacena en cad2
    puts(cad2); // Se imprime la nueva cadena almacenada en cad2

    // No se puede asignar "Guatemala" directamente a un elemento de la cadena
    // cad2[10] = "Guatemala";

    return 0;
}
