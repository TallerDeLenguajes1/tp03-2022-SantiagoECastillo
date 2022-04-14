#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char *TiposProductos[]={"Galletas","Snack","Cigarrillos","Caramelos","Bebidas"};

struct Producto {
    int ProductoID; //Numerado en ciclo iterativo
    int Cantidad; // entre 1 y 10
    char *TipoProducto; // Algún valor del arreglo TiposProductos
    float PrecioUnitario; // entre 10 - 100
};

struct Cliente {
    int ClienteID; // Numerado en el ciclo iterativo
    char *NombreCliente; // Ingresado por usuario
    int CantidadProductosAPedir; // (aleatorio entre 1 y 5)
    struct Producto *Productos //El tamaño de este arreglo depende de la variable
    // “CantidadProductosAPedir”
};

int main(){
    struct Cliente *clientes; 
    struct Cliente *auxiliar;
    int cantidad;

    printf("Ingrese la cantidad de clientes: ");
    scanf("%d", &cantidad);

    clientes = (struct Cliente *)malloc(cantidad*sizeof(struct Cliente));
    auxiliar = clientes;

    for(int i=0; i<cantidad; i++){
        printf("Ingrese el nombre del cliente: ");
        gets(auxiliar->NombreCliente);
        auxiliar++;
    }

    auxiliar = clientes;
    for(int i=0; i<cantidad; i++){
        printf("los clientes son: ");
        puts(auxiliar->NombreCliente);
        printf("\n"); 
        auxiliar++;
    }
    return 0;
}