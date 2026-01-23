
#include <stdio.h>

// Para un tipo complejo (estructura)
struct Alumno {
    char nombre[50];
    int matricula;
};

int main(){
    // Para un tipo primitivo
    typedef int Entero;
    Entero miNumero = 10; // 'Entero' es ahora un alias para 'int'

    typedef struct Alumno Estudiante;
    Estudiante alumno1; // 'Estudiante' es un alias para 'struct Alumno'

    return 0;
}
