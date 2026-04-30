
#include <stdio.h>
#include <stdlib.h> 

struct Dato {
    int d, cont;
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
    scanf("%d", &Ptrtemp -> d);
    Ptrtemp -> Ptrsig = NULL;
    return Ptrtemp; 
}

void Contar(){

}


int main(void) {
    struct Dato *Ptr = NULL; 
    struct Dato *Ptrtemp = NULL;
    struct Dato *Ptraux = NULL; 
    int opcion, op1, op2;
    int cont = 0; 

    do {
        printf("\nMENU PRINCIPAL:\n");
        printf("1 - Crear dato\n");
        printf("2 - Funciones\n"); 
        printf("3 - Mostrar dato\n"); 
        printf("4 - Liberar memoria\n");
        printf("5 - Salir\n");
        printf("\nElija una opción: ");
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
                       while(Ptraux -> Ptrsig != NULL){ 
                           Ptraux = Ptraux -> Ptrsig;
                       }
                       Ptraux -> Ptrsig = Ptrtemp;
                    }
                }
                cont++;
                break;
                
        case 2: 
                do {
                    printf("\nSUB-MENÚ-1\n");
                    printf("1 - Buscar\n");
                    printf("2 - Contar\n");
                    printf("3 - Reemplazar\n"); //Primero busca un dato, lo busca y lo reemplaza... 
                    printf("4 - Ordenar\n"); 
                    printf("5 - Regresar al menú principal\n");
                    printf("\nElige una opción: ");
                    scanf("%d", &op1);

                    switch(op1) {
                        case 1: 
                            printf("\n");
                            break;
                        case 2:
                            printf("El total de nodos es: %d\n", cont);
                            break;
                        case 3:
                            printf("\n");
                            break;
                        case 4: 
                            printf("\n"); 
                            break; 
                        case 5: 
                            printf("\n");
                            break; 
                        }
                    } while(op1 != 3);

                    break;
        
        case 3:
                if (Ptr == NULL) {
                    printf("No hay nothing de chava :(\n"); 
                } else {
                    printf("\nDATOS\n"); 
                    Ptraux = Ptr; 
                    while(Ptraux != NULL){ 
                        printf("%d -> ", Ptraux -> d); 
                        Ptraux = Ptraux -> Ptrsig; 
                    }
                }
                break;
                
        case 4:
                if(Ptr == NULL){ 
                     printf("No hay nothing de chava...\n"); 
                         
                } else if (Ptr -> Ptrsig == NULL){ 
                     free(Ptr); 
                     Ptr = NULL; 
                        
                } else { 
                    Ptraux = Ptr; 
                    while((Ptraux -> Ptrsig) -> Ptrsig != NULL){
                        Ptraux = Ptraux -> Ptrsig; 
                    }
                    free(Ptraux -> Ptrsig);
                    Ptraux -> Ptrsig = NULL; 
                }
                cont--;
                break;
                
        case 5:
                while (Ptr != NULL) {
                    Ptrtemp = Ptr -> Ptrsig; 
                    free(Ptr); 
                    Ptr = Ptrtemp; 
                }
                printf("Saliendo, bye, see you\n");
                break;
        }
    } while (opcion != 5);

    return 0;
}
