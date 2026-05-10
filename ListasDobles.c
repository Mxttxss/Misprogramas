
#include <stdio.h>
#include <stdlib.h>

struct Nodo {
    int n;
    struct Nodo *Ptrant;
    struct Nodo *Ptrsig;
};

struct Nodo *Ptrtemp = NULL;

void insertar(int valor) {
    struct Nodo *Ptrnew;
    Ptrnew = (struct Nodo*) malloc(sizeof(struct Nodo));

    if(Ptrnew == NULL) {
        printf("Error no se pudo reserver memory\n");
        return;
    }
    Ptrnew ->  n = dato;

    if(Ptrtemp == NULL) {

        Ptrnew -> Ptrsig = Ptrnew;
        Ptrnew -> Ptrant = Ptrnew;
        Ptrtemp = Ptrnew;
    }
    else {
        struct Nodo *Ptraux;

        Ptraux = Ptrtemp -> Ptrant;
        Ptrnew -> Ptrsig = Ptrtemp;
        Ptrnew -> Ptrant = Ptraux;
        Ptraux -> Ptrsig = Ptrnew;
        Ptrtemp -> Ptrant = Ptrnew;
    }
}

void eliminar(int valor) {

    if(Ptrtemp == NULL) {
        printf("Ni hay nothing in the list ):\n");
        return;
    }

    struct Nodo *Ptraux;
    Ptraux = Ptrtemp;

    do {

        if(Ptraux -> n == dato) {
            if(Ptraux -> Ptrsig == Ptraux) {
                Ptrtemp = NULL;
            }
            else {
                Ptraux -> Ptrant -> Ptrsig = Ptraux -> Ptrsig;
                Ptraux -> Ptrsig -> Ptrant = Ptraux -> ant;

                if(Ptraux == Ptrtemp) {
                    Ptrtemp = Ptraux -> Ptrsig;
                }
            }
            free(Ptraux);
            return;
        }
        Ptraux = Ptraux -> Ptrsig;

    } while(Ptraux != Ptrtemp);
    printf("No se encontro nada\n");
}

void mostrar() {
    if(Ptrtemp == NULL) {
        printf("Todavía no hay nd en the list\n");
        return;
    }

    struct Nodo *Ptraux;
    Ptraux = Ptrtemp;
    printf("\nDATOS\n");

    do {
        printf("%d ->", Ptraux -> n);
        Ptraux = Ptraux -> Ptrsig;

    } while(Ptraux != Ptrtemp);
}

int main() {
    int opcion;
    int dato;

    do {
        printf("\nMENú\n");
        printf("1 - Insertar elemento\n");
        printf("2 - Eliminar elemento\n");
        printf("3 - Mostrar elementos\n");
        printf("4 - Salir\n");
        printf("Elija una opción de chava: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                printf("Ingrese un dato y así: ");
                scanf("%d", &dato);
                insertar(dato);
                break;

            case 2:
                eliminar();
                break;

            case 3:
                mostrar();
                break;

            case 4:
                printf("Saliendo, bye, see you...\n");
                break;

            default:
                printf("Opcion invalida de chava bienestar\n");
        }
    } while(opcion != 4);

    return 0;
}
