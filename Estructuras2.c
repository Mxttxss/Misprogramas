
#include <stdio.h>

struct estudiantes {
    char nombre[30];
    int matricula;
    int edad;
    float promedio;
} estudiante;

int main(){

    struct estudiantes estudiante[5];
    for (int i = 0; i < 5; i ++){
        printf("\nINGRESE LOS DATOS DEL ESTUDIANTE\n", i + 1);

        printf("\nIngrese el nombre del estudiante: ");
        scanf("%s", estudiante[i].nombre);
        printf("\nIngrese la matricula del estudiante: " );
        scanf("%d", &estudiante[i].matricula);
        printf("\nIngrese la edad del estudiante: ");
        scanf("%d", &estudiante[i].edad);
        printf("\nIngrese el promedio del estudiante: ");
        scanf("%f", &estudiante[i].promedio);
        printf("\n");

    }

    for (int i = 0; i < 5; i ++){
        printf("\nAlumno: %s", estudiante[i].nombre);
        printf("\nNombre: %s", estudiante[i].nombre);
        printf("\nMatricula: %d", estudiante[i].matricula);
        printf("\nEdad: %d\n", estudiante[i].edad);
        printf("\nPromedio: %.2f", estudiante[i].promedio);
    }

    int indiceMayorPromedio = 0;
    int mayorPromedio = 0;

    for (int i = 0; i < 5; i ++){
        if (estudiante[i].promedio > mayorPromedio){
        mayorPromedio = estudiante[i].promedio;
        indiceMayorPromedio = i;
        }
    }
    printf("El estudiante de mayor promedio es: %s con un promedio de %.2f\n", estudiante[indiceMayorPromedio].nombre, estudiante[indiceMayorPromedio].promedio);

    return 0;
}
