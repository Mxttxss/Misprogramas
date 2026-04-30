
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

int main(void) {
    struct Dato *Ptr = NULL; 
    struct Dato *Ptrtemp = NULL;
    struct Dato *Ptraux = NULL; 
    int opcion, op1, op2;

    do {
        printf("\nMENU PRINCIPAL:\n");
        printf("1 - Crear dato\n");
        printf("2 - Funciones\n"); 
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
                
        case 2: // Todo el submenu va aquí adentro
                do {
                    printf("\nMENÚ\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("Elige opcion: ");
                    scanf("%d", &op1);

                    switch(op1) {
                        case 1: 
                            printf("\n");
                            break;
                        case 2:
                            printf("\n");
                            break;
                        case 3:
                            printf("\n");
                            break;
                        }
                    } while(op2 != 3);
                    break;
                        
                        case 2: 
                            do {
                                printf("\nMENÚ\n");
                                printf("\n");
                                printf("\n");
                                printf("\n");
                                printf("Elige opcion: ");
                                scanf("%d", &op2);

                                switch(op2) {
                                    case 1:
                                        printf("\n");
                                        break;
                                    case 2:
                                        printf("\n");
                                        break;
                                    case 3:
                                        printf("\n");
                                        break;
                                }
                            } while(op2 != 3);
                            break;
                            
                        case 3:
                            printf("COME BAKC AL MENÚ\n");
                            break;
                    }
                } while(op1 != 3);
                break;
                
        case 3:
                if(Ptr == NULL){ 
                     printf("No hay nothing de chava...\n"); 
                         
                } else if (Ptr->Ptrsig == NULL){ 
                     free(Ptr); 
                     Ptr = NULL; 
                     printf("Unico nodo liberado\n");
                        
                } else { 
                    Ptraux = Ptr; 
                    while((Ptraux->Ptrsig)->Ptrsig != NULL){
                        Ptraux = Ptraux->Ptrsig; 
                    }
                    free(Ptraux->Ptrsig);
                    Ptraux->Ptrsig = NULL; 
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
