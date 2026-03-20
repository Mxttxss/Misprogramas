
#include <stdio.h>

// Definimos una estructura para el empleado
typedef struct {
    char nombre[50];
    int edad;
    float sueldo;
} Empleado;

int main() {
    Empleado empleados[100]; // Arreglo para almacenar empleados
    int opcion, contador = 0;

    do {
        printf("\n--- Menú ---");
        printf("\n1. Registrar empleado");
        printf("\n2. Mostrar empleados");
        printf("\n3. Buscar empleado");
        printf("\n4. Salir");
        printf("\nElige una opción: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                // Registrar empleado
                printf("Nombre: ");
                scanf(" %[^\n]", empleados[contador].nombre);
                printf("Edad: ");
                scanf("%d", &empleados[contador].edad);
                printf("Sueldo: ");
                scanf("%f", &empleados[contador].sueldo);
                contador++;
                break;
            case 2:
                // Mostrar empleados
                for(int i = 0; i < contador; i++) {
                    printf("\nEmpleado %d", i+1);
                    printf("\nNombre: %s", empleados[i].nombre);
                    printf("\nEdad: %d", empleados[i].edad);
                    printf("\nSueldo: %.2f\n", empleados[i].sueldo);
                }
                break;
            case 3:
                // Buscar empleado
                char nombre[50];
                printf("Nombre del empleado a buscar: ");
                scanf(" %[^\n]", nombre);
                for(int i = 0; i < contador; i++) {
                    if(strcmp(empleados[i].nombre, nombre) == 0) {
                        printf("Empleado encontrado:");
                        printf("\nNombre: %s", empleados[i].nombre);
                        printf("\nEdad: %d", empleados[i].edad);
                        printf("\nSueldo: %.2f\n", empleados[i].sueldo);
                        break;
                    }
                }
                break;
            case 4:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opción no válida.\n");
        }
    } while(opcion != 4);

    return 0;
}
