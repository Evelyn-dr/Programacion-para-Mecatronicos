#include <stdio.h> // Incluyo la biblioteca estándar de entrada y salida
#include <string.h> // Incluyo la biblioteca necesaria para manipular cadenas

#define MAX_CLIENTES 5 // Defino MAX_CLIENTES como una constante con un valor de 5

typedef struct // Creo una estructura llamada ClienteNuevo que incluye:
{
    char automovil[5];
    float precio_auto;
    double prom_meses_uso;
    double consumo_comb;
    double costo_combustible;
    double km_por_litro;
    double distancia_viaje;
} ClienteNuevo;

void mostrarDetalles(ClienteNuevo cliente)
{
    // Imprimo los detalles del cliente en un formato organizado
    printf("| %-20s | %-15.2f | %-20.2lf | %-15.2lf | %-15.2lf | %-15.2lf | %-15.2lf |\n", cliente.automovil, cliente.precio_auto, cliente.prom_meses_uso, cliente.consumo_comb, cliente.costo_combustible, cliente.km_por_litro, cliente.distancia_viaje);
}

int main()
{
    ClienteNuevo cliente_base = {"", 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};

    printf("-- Datos Iniciales --\n"); // Luego, declaro un arreglo de clientes y variables necesarias
    printf("| %-20s | %-15s | %-20s | %-15s | %-15s | %-15s | %-15s |\n", "Automovil", "Precio Auto", "Promedio Meses Uso", "Consumo (L/Km)", "Costo Combustible", "Consumo (Km/L)", "Viaje (Km)");
    mostrarDetalles(cliente_base);

    ClienteNuevo clientes[MAX_CLIENTES];
    char eleccion;
    int num_clientes = 0;
    char nombre_archivo[100];
    int anos;

    do
    {
        printf("\n-- Menu --\n\n");
        printf("1. Agregar nuevo automovil\n");
        printf("2. Ver detalles de todos los automoviles\n");
        printf("3. Modificar datos del ultimo automovil\n");
        printf("4. Salir\n\n");
        printf("Seleccione una opcion: ");
        scanf(" %c", &eleccion);

        switch(eleccion)
        {
        case '1':
            if (num_clientes < MAX_CLIENTES)
            {
                ClienteNuevo nuevo_cliente;

                printf("\nIngrese el nombre o modelo del automovil: ");
                scanf("%s", nuevo_cliente.automovil);

                printf("Cuanto cuesta el vehiculo?: ");
                scanf("%f", &nuevo_cliente.precio_auto);

                printf("Cual es el promedio de uso en meses?: ");
                scanf("%lf", &nuevo_cliente.prom_meses_uso);

                printf("Cual es el consumo de combustible por kilometro (en litros)?: ");
                scanf("%lf", &nuevo_cliente.consumo_comb);

                printf("Cual es el costo del combustible por litro?: ");
                scanf("%lf", &nuevo_cliente.costo_combustible);

                nuevo_cliente.km_por_litro = 1 / (nuevo_cliente.consumo_comb / 3.78541);

                printf("Cual es la distancia del viaje (en kilometros)?: ");
                scanf("%lf", &nuevo_cliente.distancia_viaje);

                printf("Ingrese la cantidad de anos: ");
                scanf("%d", &anos);

                // Multiplicar los valores por la cantidad de anos
                nuevo_cliente.precio_auto *= anos;
                nuevo_cliente.prom_meses_uso *= anos;
                nuevo_cliente.consumo_comb *= anos;
                nuevo_cliente.costo_combustible *= anos;
                nuevo_cliente.distancia_viaje *= anos;

                // Imprimir los detalles del nuevo cliente
                printf("\nDetalles del nuevo automovil:\n");
                printf("| %-20s | %-15s | %-20s | %-15s | %-15s | %-15s | %-15s |\n", "Automovil", "Precio Auto", "Promedio Meses Uso", "Consumo (L/Km)", "Costo Combustible", "Consumo (Km/L)", "Viaje (Km)");
                mostrarDetalles(nuevo_cliente);

                // Agregar el nuevo cliente al arreglo de clientes
                clientes[num_clientes] = nuevo_cliente;
                num_clientes++;

                // Preguntar si desea guardar los detalles en un archivo de texto
                printf("Desea guardar los detalles en un archivo de texto? (s/n): ");
                char guardar;
                scanf(" %c", &guardar);
                if (guardar == 's' || guardar == 'S')
                {
                    printf("Ingrese el nombre del archivo de texto para guardar los detalles: ");
                    scanf("%s", nombre_archivo);

                    // Asegurar que el nombre del archivo termine en ".txt"
                    strcat(nombre_archivo, ".txt");

                    FILE *archivo;
                    archivo = fopen(nombre_archivo, "w");
                    if (archivo == NULL)
                    {
                        printf("Error al abrir el archivo.");
                        return 1;
                    }

                    // Escribir los detalles de cada cliente en el archivo
                    for (int i = 0; i < num_clientes; i++)
                    {
                        fprintf(archivo, "Cliente %d:\n", i + 1);
                        fprintf(archivo, "Automovil: %s\n", clientes[i].automovil);
                        fprintf(archivo, "Precio Auto: %.2f\n", clientes[i].precio_auto);
                        fprintf(archivo, "Promedio Meses Uso: %.2lf\n", clientes[i].prom_meses_uso);
                        fprintf(archivo, "Consumo (L/Km): %.2lf\n", clientes[i].consumo_comb);
                        fprintf(archivo, "Costo Combustible: %.2lf\n", clientes[i].costo_combustible);
                        fprintf(archivo, "Consumo (Km/L): %.2lf\n", clientes[i].km_por_litro);
                        fprintf(archivo, "Viaje (Km): %.2lf\n\n", clientes[i].distancia_viaje);
                    }

                    fclose(archivo);

                    printf("Informacion de los automoviles guardada en '%s'\n", nombre_archivo);
                }
            }
            else
            {
                printf("Estos son todos los automoviles permitidos\n");
            }
            break;
        case '2':
            if (num_clientes > 0)
            {
                // Imprimo los detalles de todos los automoviles si existen
                printf("Detalles de todos los automoviles:\n");
                printf("| %-20s | %-15s | %-20s | %-15s | %-15s | %-15s | %-15s |\n", "Automovil", "Precio Auto", "Promedio Meses Uso", "Consumo (L/Km)", "Costo Combustible", "Consumo (Km/L)", "Viaje (Km)");
                printf("| %-20s | %-15s | %-20s | %-15s | %-15s | %-15s | %-15s |\n", "---------------", "---------------", "---------------", "---------------", "---------------", "---------------", "---------------");
                for (int i = 0; i < num_clientes; i++)
                {
                    mostrarDetalles(clientes[i]);
                }
            }
            else
            {
                printf("Aun no se han agregado automoviles\n");
            }
            break;
        case '3':
            // Aviso que esta opcion aun no ha sido implementada
            printf("Esta opcion aun no ha sido implementada\n");
            break;
        case '4':
            printf("Saliendo del programa\n");
            break;
        default:
            printf("Opcion no valida. Por favor, seleccione una opcion valida\n"); // Si la opcion ingresada no es valida, imprimo un mensaje indicando que la opcion no es valida.
        }

    }
    while(eleccion != '4'); // El bucle continua ejecutandose mientras la opcion ingresada no sea '4'

    return 0; // Finalmente, retorno 0 para indicar una salida exitosa.
}
