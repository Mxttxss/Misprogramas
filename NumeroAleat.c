
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));

    int numeroAleatorio = rand()% 90+10;

    printf("El numero aleatorio es: %d\n", numeroAleatorio);

    return 0;
}
