
#include <stdio.h>
#include <stdlib.h> 

struct Dato {
    int d;
    struct Dato *Ptrsig;
};

struct Dato* crearDato() {
    struct Dato *nuevo = (struct Dato*) malloc(sizeof(struct Dato));
    
    if (nuevo == NULL) {
        printf("Error\n");
        return NULL;
    }
    
    printf("Ingresa el valor del dato: ");
    scanf("%d", &nuevo->d);
    nuevo->Ptrsig = NULL;
    return nuevo; 
}

void mostrarDatos(struct Dato *Ptr) {
    if (Ptr == NULL) {
        printf("No hay nada...\n");
        return;
    }
    
    printf("\nDATOS: \n");
    struct Dato *bloque = Ptr;
    while (bloque != NULL) {
        printf("%d ->", bloque->d);
        bloque = bloque->Ptrsig;
    }
    printf("NULL\n");
}

void liberarMemoria(struct Dato *Ptr) {
    struct Dato *bloque = Ptr;
    struct Dato *bloque2;
    
    while (bloque != NULL) {
        bloque2 = bloque->Ptrsig;
        free(bloque);
        bloque = bloque2;
    }
    printf("Se libero la memoria :)\n");
}

int main(void) {
    struct Dato *Ptr = NULL; 
    struct Dato *nuevo; 
    int opcion;

    do {
        printf("\nMENU:\n");
        printf("1 - Crear dato\n");
        printf("2 - Mostrar datos\n");
        printf("3 - Liberar memoria\n");
        printf("4 - Salir\n");
        printf("\nElija una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                nuevo = crearDato(); 
                if (nuevo != NULL) {
                    nuevo->Ptrsig = Ptr; 
                    Ptr = nuevo;         
                }
                break;
                
            case 2:
                mostrarDatos(Ptr);
                break;
                
            case 3:
                liberarMemoria(Ptr);
                Ptr = NULL; 
                break;
                
            case 4:
                liberarMemoria(Ptr); 
                printf("Elegiste salir; bye, adios, see you...\n");
                break;
                
            default:
                printf("Tu opcion no fue valida, ni modo...\n");
        }
    } while (opcion != 4);

    return 0;
}