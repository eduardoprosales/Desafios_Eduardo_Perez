#include<stdio.h>
#include <stdlib.h>
#include<time.h>

int yeyecoa()
{
    /*La semilla del numero aleatorio sera el reloj de la computadora*/
    srand(time(NULL));

    //Arreglo que contiene los caracteres a utilizar como hojas del arbol
    char hojas[3]={'*','^','+'};

    /*Solicitud de numero de niveles*/
    int n, s;
    printf("Ingrese la cantidad de niveles y secciones del arbol: ");
    scanf("%d %d", &n, &s);

    int i, j=1, k;
    /*Impresion de todas las secciones del arbol*/
    for (k=1; k<=s; k++)
    {
        /*A partir de la segunda seccion, cada una comienza en el segundo nivel.*/
        if (k!=1)
            j=2;
    /*Impresion de todos los pisos de una seccion del arbol*/
    for (j; j<=n; j++)
    {
    /*Impresion de un piso del arbol*/
        for(i=n-j; i>=1; i--)
        {
            printf(" ");
        }
        for (i=2*j-1; i>=1; i--)
        {
            printf("%c", hojas[rand()%3]);  //Al imprimir las hojas, se genera un numero aleatorio entre 0 y 2 que determina un caracter del arreglo "hojas"
        }
        /*Salto de linea entre pisos del arbol*/
        printf("\n");
    }
    }

    /*Impresion de todos los niveles del tronco*/
    for (i=n/2+1; i>=1; i--)
    {
        /*Impresion de un nivel del tronco*/
        for (j=n-1; j>=1; j--)
        {
            printf(" ");
        }
        printf("|\n");
    }
    return 0;
}
