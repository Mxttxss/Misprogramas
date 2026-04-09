#include <stdio.h>

struct Alumno {
    char nombre[100];
    int calif[5][5];
}; 

int main(){
    int j, i; 
    struct Alumno estudiante;
    printf("\nDATOS DEL ALUMNO\n");

    printf("Ingrese el nombre del alumno: ");
    scanf("%s", &estudiante.nombre);
    
    for(j=0; j<5; j++){
        for(i=0; i<5; i++){
            printf("Ingrese las calificiones del alumno: ");
            scanf("%d", &estudiante.calif);
        }
    }

    printf("El nombre del alumno es: %s\n", estudiante.nombre); 
    printf("Las calificaciones del alumno son: %d\n", estudiante.calif);

    return 0; 

}

