
#include <stdio.h>
#include <stdlib.h>

int main (void){
    int *Ptr = NULL;
    
    //El primer indica en tipo de dato, mientras que el segundo int indica el tamaño de bytes. 
     Ptr = (int*) malloc (sizeof(int)); 

     *Ptr = 10; 
     printf("Contenido de ptr: %d\n", *Ptr); 
     printf("Dirección de memoria de ptr: %p\n", &Ptr); 
     printf("Contenido de ptr: %p\n", Ptr); 

     free(Ptr); 

     return 0; 
}