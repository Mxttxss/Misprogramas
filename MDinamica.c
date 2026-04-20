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
                    Ptrsig = Ptr; 
                    Ptr = nuevo;         
                }
                break;
                
            case 2:
                break;
                
            case 3:
                break;
                
            case 4:
                break;
        }
    } while (opcion != 4);

    return 0;
}