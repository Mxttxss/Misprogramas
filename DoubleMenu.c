
#include <stdio.h>
#include <stdlib.h> 

struct Dato {
    int d;
    struct Dato *Ptrsig;
};

struct Dato* crearDato(void) {
    struct Dato *Ptrtemp = NULL; 
    Ptrtemp = (struct Dato*) malloc(sizeof(struct Dato));
    
    if (Ptrtemp == NULL) {
        printf("Errorcito\n"); 
        return NULL;    
    }

    printf("Ingresa el valor del dato: ");
    scanf("%d", &Ptrtemp->d);
    Ptrtemp->Ptrsig = NULL;
    return Ptrtemp; 
}

void submenuNivel2(void) {
    int op2;
    do {
        printf("\n--- SUBMENU NIVEL 2 ---\n");
        printf("1 - Opcion A\n");
        printf("2 - Opcion B\n");
        printf("3 - Regresar\n");
        printf("Elige opcion: ");
        scanf("%d", &op2);

        switch(op2) {
            case 1:
                printf("Ejecutando Opcion A del Submenu 2\n");
                break;
            case 2:
                printf("Ejecutando Opcion B del Submenu 2\n");
                break;
            case 3:
                printf("Regresando a Submenu Nivel 1\n");
                break;
            default:
                printf("Opcion invalida\n");
        }
    } while(op2 != 3);
}

void submenuFunciones(struct Dato *Ptr) {
    int op1;
    struct Dato *Ptraux;
    
    do {
        printf("\n--- SUBMENU FUNCIONES ---\n");
        printf("1 - Mostrar datos\n");
        printf("2 - Ir a Submenu Nivel 2\n");
        printf("3 - Regresar al menu principal\n");
        printf("Elige opcion: ");
        scanf("%d", &op1);

        switch(op1) {
            case 1:
                if (Ptr == NULL) {
                    printf("No hay nothing de chava :(\n"); 
                } else {
                    printf("\nDATOS: "); 
                    Ptraux = Ptr; 
                    while(Ptraux != NULL){ 
                        printf("%d -> ", Ptraux->d); 
                        Ptraux = Ptraux->Ptrsig; 
                    }
                    printf("NULL\n");
                }
                break;
            case 2:
                submenuNivel2();
                break;
            case 3:
                printf("Regresando al menu principal\n");
                break;
            default:
                printf("Opcion invalida\n");
        }
    } while(op1 != 3);
}

int main(void) {
    struct Dato *Ptr = NULL; 
    struct Dato *Ptrtemp = NULL;
    struct Dato *Ptraux = NULL; 
    int opcion;

    do {
        printf("\nMENU PRINCIPAL:\n");
        printf("1 - Crear dato\n");
        printf("2 - Funciones\n"); // Cambiado
        printf("3 - Liberar memoria\n");
        printf("4 - Salir\n");
        printf("\nElija una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
        case 1:
                Ptrtemp = crearDato(); 
                if (Ptrtemp == NULL){
                    printf("Error de chava...\n");         
                } else {
                    if(Ptr == NULL){
                       Ptr = Ptrtemp;
                    } else {
                       Ptraux = Ptr;
                       while(Ptraux->Ptrsig != NULL){ 
                           Ptraux = Ptraux->Ptrsig;
                       }
                       Ptraux->Ptrsig = Ptrtemp;
                    }
                    printf("Dato agregado\n");
                }
                break;
                
        case 2:
                submenuFunciones(Ptr); // Llamamos al submenu y le pasamos Ptr
                break;
                
        case 3:
                if(Ptr == NULL){ //CASO 1: CUANDO NO TIENE NINGÚN NODO
                     printf("No hay nothing de chava...\n"); 
                         
                } else if (Ptr->Ptrsig == NULL){ //CASO 2: SOLO UN NODO
                     free(Ptr); 
                     Ptr = NULL; 
                     printf("Unico nodo liberado\n");
                        
                } else { // CASO 3: MAS DE UN NODO
                    Ptraux = Ptr; 
                    while((Ptraux->Ptrsig)->Ptrsig != NULL){
                        Ptraux = Ptraux->Ptrsig; 
                    }
                    free(Ptraux->Ptrsig);
                    Ptraux->Ptrsig = NULL; // CORREGIDO: = no ==
                    printf("Ultimo nodo liberado\n");
                }
                break;
                
        case 4:
                printf("Liberando toda la memoria...\n");
                while (Ptr != NULL) {
                    Ptrtemp = Ptr->Ptrsig; 
                    printf("Liberando: %d\n", Ptr->d); 
                    free(Ptr); 
                    Ptr = Ptrtemp; 
                }
                printf("Saliendo, bye, see you\n");
                break;
                
            default:
                printf("Opcion invalida\n");
        }
    } while (opcion != 4);

    return 0;
}
