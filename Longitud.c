
#include <stdio.h>
int main() {
    
    int n;
    printf("Ingrese la cantidad de numeros: ");
    scanf("%d", &n);

    int array[n];
    for (int i=0;i<n;i++) {
        printf("Ingrese un numero: ");
        scanf("%d", &array[i]);
    }

    int intervalo = 0;
    int longitud = 0;

    for (int i=0;i<n-1;i++) {
        if (array[i] > array[i + 1]) {
            longitud += array[i] - array[i + 1];
        } else {
            longitud = (longitud > intervalo) ? longitud : intervalo;
            longitud = 0;
        }
    }

    intervalo = (intervalo > longitud) ? intervalo : longitud;

    printf("La longitud mas grande es: %d\n", longitud);

    return 0;
}
