#include <stdio.h>
#include <stdlib.h>

void ingresoDatos();
void calculoRango(int *, int *, int *, int *);
void calculoMaxMin();

int main()
{
    ingresoDatos();
    return 0;
}

void ingresoDatos(){
    int codArt, prcArt, stkArt, control=0, cantIngresos=0, contadorPrecioLimite=0;

    do{
        printf("Ingrese el articulo: ");
        scanf("%d", &codArt);
        printf("Ingrese el precio: ");
        scanf("%d", &prcArt);
        printf("Ingrese el stock: ");
        scanf("%d", &stkArt);
        calculoRango(&codArt, &stkArt, &prcArt, &contadorPrecioLimite);
        //funcion calculo max min de stock
        printf("Ingrese 0 para seguir o -1 para salir.\n");
        scanf("%d", &control);
        cantIngresos++;
    }while(control!=(-1));
    printf("La cantidad de articulos es: %d", cantIngresos);
    printf("\nEl porcentaje de articulos con precio de venta inferior a $3600 es de %d", ((contadorPrecioLimite*100)/cantIngresos));
}

void calculoRango(int *codArt, int *stkArt, int *prcArt, int *contadorPrecioLimite){
    if ((*stkArt)>=120 && (*stkArt)<=360){
        printf("El articulo %d esta en el rango 120-360\n", *codArt);
    }
    if ((*prcArt)<3600){
        (*contadorPrecioLimite)++;
    }
}

void calculoMaxMin(){

}
