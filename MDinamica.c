#include <stdio.h>
#include <stdlib.h> 

struct Dato {
    int d;
    struct Dato *Ptrsig, *Ptr, *Ptraux;
};

struct Dato* crearDato(void) {
    struct Dato *Ptrtemp = NULL; 
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
    struct Dato *Ptrtemp = NULL;
    struct Dato *Ptraux = NULL; 
    int opcion;

    do {
        printf("\nMENU:\n");
        printf("1 - Crear dato\n");
        printf("2 - Mostrar dato\n");
        printf("3 - Liberar memoria\n");
        printf("4 - Salir\n");
        printf("\nElija una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
        case 1:
                Ptrtemp = crearDato(); 
                if (Ptrtemp == NULL) 
                    printf(Error de chava...);         
                else
                    if(Ptr == NULL);
                       Ptr = Ptrtemp;
                    else {
                       Ptraux = Ptr;
                       while(Ptraux -> Ptrsig != NULL);
                           Ptr = Ptraux -> Ptrsig;
                           Ptraux -> Ptrsig = Ptrtemp;
                    }
                break;
                
            case 2:
                if (Ptr == NULL) {
                    printf("No hay nothing de chava :("); 
                } else {
                    printf("\nDATOS\n"); 
                    Ptraux = Ptr; 
                    while(Ptraux != NULL); 
                        printf("%d -> ", Ptraux -> d); 
                        Ptraux = Ptraux -> Ptrsig; 
                }
                break;
                
            case 3:
                if(Ptr == NULL); //CASO 1: CUANDO NO TIENE NINGÚN NODO...
                     printf("No hay nothing de chava...); 
                         
                else{ //CASO 2: CUANDO SOLAMENTE TIENE UN NODO...
                     if(Ptr->Ptrsig == NULL); 
                     free(Ptr); 
                     Ptr = NULL; 
                        
                }else{ // CASO 3: CUANDO TIENE MÁS DE UN NODO...
                    Ptraux = Ptr; 
                    While(Ptraux -> Ptrsig -> Ptrsig != NULL);  
                        Ptraux = Ptraux->Ptrsig; 
                    free(Ptraux->Ptrsig);
                    Ptraux->Ptrsig == NULL; 
                break;
                
            case 4:
                while (Ptr != NULL) {
                    Ptrtemp = Ptr -> Ptrsig; 
                    free(Ptr); 
                    Ptr = Ptrtemp; 
                }
                break;
        }
    } while (opcion != 4);

    return 0;
}
