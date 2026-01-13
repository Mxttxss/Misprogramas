
#include <stdio.h>
#include <string.h>

struct estudiante {
    char Nombre[41];
    int Edad;
    int Matricula;
    float Nota;
};

int main(){
    //SE PUEDE DEFINIR ptr_est COMO UN APUNTADOR A LA ESTRUCTURA
    struct estudiante *ptr_est;
    struct estudiante mejor;
    ptr_est = &mejor;

    //ptr_est->Nombre = "Celi"
    ptr_est -> Matricula = 345689;
    ptr_est -> Nota = 8.7;
    ptr_est -> Edad = 19;
    strcpy(ptr_est -> Nombre, "Alexa Hernández");

    printf("Nombre: %s\n", ptr_est -> Nombre);
    printf("Edad: %d\n", ptr_est -> Edad);
    printf("Matricula: %d\n", ptr_est -> Matricula);
    printf("Nota: %.2f\n", ptr_est -> Nota);

    return 0;
}
