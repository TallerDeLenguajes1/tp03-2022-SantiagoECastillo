#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char *TiposProductos[]={"Galletas","Snack","Cigarrillos","Caramelos","Bebidas"};

typedef struct{
    int ProductoID; //Numerado en ciclo iterativo
    int Cantidad; // entre 1 y 10
    char *TipoProducto; // Algún valor del arreglo TiposProductos
    float PrecioUnitario; // entre 10 - 100
}Producto;

typedef struct{
    int ClienteID; // Numerado en el ciclo iterativo
    char *NombreCliente; // Ingresado por usuario
    int CantidadProductosAPedir; // (aleatorio entre 1 y 5)
    struct Producto *Productos; //El tamaño de este arreglo depende de la variable “CantidadProductosAPedir”
}Cliente;

void cargarClientes(Cliente *clientes, int cantClientes);
void mostrarClientes(Cliente *clientes, int cantClientes);

int main(){
    int cantClientes;

    Cliente *Clientes;

    printf("Ingrese la cantidad de clientes: ");
    scanf("%d", &cantClientes);
    fflush(stdin);

    Clientes = (Cliente *)malloc(sizeof(Cliente)*cantClientes);

    cargarClientes(Clientes, cantClientes);
    mostrarClientes(Clientes, cantClientes);
    
    free(Clientes);
    return 0;
}

void cargarClientes(Cliente *clientes, int cantClientes){

    char *auxNombreCliente = (char *)malloc(sizeof(char)*100);

    for(int i=0; i<cantClientes; i++){
        
        clientes[i].ClienteID = i+1;
        printf("Ingrese el nombre del cliente Nro %d: ", i+1);
        gets(auxNombreCliente);
        fflush(stdin);
        clientes[i].NombreCliente = (char *)malloc(sizeof(char)* (strlen(auxNombreCliente)));
        strcpy(clientes[i].NombreCliente, auxNombreCliente);
    
    }

    
}

void mostrarClientes(Cliente *clientes, int cantClientes){

    for(int i=0; i<cantClientes; i++){
        printf("\nCliente Nro %d\n", i+1);
        printf("ID: %d \n", clientes[i].ClienteID);
        printf("Nombre: %s\n", clientes[i].NombreCliente);
    }
}
