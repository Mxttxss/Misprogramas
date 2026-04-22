 #include <stdio.h>
#include <stdlib.h> 

struct Dato {
    int d;
    struct Dato *Ptrsig;
};

struct Dato* crearDato(void) {
    Ptrtemp = NULL; 
    Ptrtemp = (struct Dato*) malloc(sizeof(struct Dato));
    
    if (Ptrtemp == NULL) {
        printf("Errorcito"); 
        return NULL;
    }

    printf("Ingresa el valor del dato: ");
    scanf("%d", &Ptrtemp->d);
    Ptrtemp->Ptrsig = NULL;
    return Ptrtemp; 

int main(void) {
    struct Dato *Ptr = NULL; 
    Ptrtemp = crearDato(); 
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
                Ptrtemp = crearDato(); 
                if (Ptrtemp == NULL) {
                    printf(Error de chava...);         
                }else{
                    if(Ptr == NULL);
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



//Liberar nodo de tarea de chava bienestar y así... 
