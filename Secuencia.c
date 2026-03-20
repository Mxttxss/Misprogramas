
#include <stdio.h>
#define array 1000

int main(){ 
    int n, k;
    int numeros[array];
    
    printf("Ingrese la cantidad de elementos: ");
    scanf("%d", &n);
    printf("Ingrese el valor de K: ");
    scanf("%d", &k);
    
    for(int i=0;i<n;i++){
        printf("Ingrese los numeros: ");
        scanf("%d", &numeros[i]);
    }
    
    for(int i=0;i<n;i++){
        if(numeros[i]%k==0){
        printf("%d", numeros[i]);
    }else{
        printf("X ");
    }
    }
    return 0;
}