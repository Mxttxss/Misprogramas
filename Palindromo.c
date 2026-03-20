
#include <stdio.h>
#include <string.h>

int main() {
    char palabra[100];
    int longitud, i;

    printf("Introduce una palabra: ");
    fgets(palabra, sizeof(palabra), stdin);

    // Eliminar el carácter de nueva línea (\n) al final
    palabra[strcspn(palabra, "\n")] = 0;

    longitud = strlen(palabra);

    printf("La palabra al revés es: ");
    for (i = longitud - 1; i >= 0; i--) {
        printf("%c", palabra[i]);
    }
    printf("\n");

    return 0;
}