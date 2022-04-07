#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){
    char *V[5];
    char *nombre;


    nombre = (char *) malloc(100*sizeof(char));

    for(int i=0; i<5; i++){
        printf("Ingrese un nombre: ");
        gets(nombre);
        V[i] = (char *)malloc((strlen(nombre)+1)*sizeof(char));
        strcpy(V[i], nombre);
    }
    
    printf("\n");
    for(int i=0; i<5; i++){
        puts(V[i]);
        free(V[i]);
    }
    
    free(nombre);

    return 0;
}