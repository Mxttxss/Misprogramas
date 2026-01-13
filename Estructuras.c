
#include <stdio.h>

struct CD {
    char titulo[30];
    char artista[25];
    int num_canciones;
    float precio;
    char fecha_compra[10];
} cd1, cd2, cd3;

struct libro {
    char titulo[40];
    char nombre_autor[67];
    char editorial[40];
    int fecha_publicacion;
};

struct info_libro {
    char titulo[60];
    char autor[30];
    char editorial[30];
    int fecha;
} libro1 = {"Maravilla del saber", "Lucas Garcia", "McGraw-Hill", 1999};

int main(){
    cd1 = (struct CD) {"Titulo", "Artista", 5, 23, "12-09-2015"};
    //cd1.artista;

    printf("Titulo:%s\n", cd1.titulo);

    //DECLARAR UNA VARIABLE EN EL MAIN
    struct CD Disco1 = {"Disco1", "Artista", 5, 23, "12-09-2015"};
    printf("Titulo:%s\n", Disco1.titulo);

    struct CD cds[3] = {
        {"Album 1", "Artista 1", 10, 120, "12-09-2015"},
        {"Album 2", "Artista 2", 8, 95, "12-09-2015"},
        {"Album 3", "Artista 3", 15, 150, "12-09-2015"}
    };
    for (int i = 0; 1 < 3; i++) {
        printf("CD: %d", i + 1);
        printf("Titulo: %s\n", cds[i].titulo);
        printf("Artista: %s\n", cds[i].artista);
        printf("Canciones: %d\n", cds[i].num_canciones);
        printf("Precio: %.2f\n\n", cds[i].precio);
    }

    return 0;
}
