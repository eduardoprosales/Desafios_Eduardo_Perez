#include<stdio.h>

int version1()
{
    /*Solicitud de numero de niveles*/
    int n;
    printf("Ingrese la cantidad de niveles del triangulo: ");
    scanf("%d", &n);

    int i, j;
    /*Impresion de todos los pisos del arbol*/
    for (j=1; j<=n; j++)
    {
        /*Impresion de un piso del arbol*/
        for(i=n-j; i>=1; i--)
        {
            printf(" ");
        }
        for (i=2*j-1; i>=1; i--)
        {
            printf("*");
        }
        /*Salto de linea entre pisos del arbol*/
        printf("\n");
    }
    return 0;
}

int version2()
{
    /*Solicitud de numero de niveles*/
    int n;
    printf("Ingrese la cantidad de niveles del arbol: ");
    scanf("%d", &n);

    int i, j;
    /*Impresion de todos los pisos del arbol*/
    for (j=1; j<=n; j++)
    {
    /*Impresion de un piso del arbol*/
        for(i=n-j; i>=1; i--)
        {
            printf(" ");
        }
        for (i=2*j-1; i>=1; i--)
        {
            printf("*");
        }
        /*Salto de linea entre pisos del arbol*/
        printf("\n");
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

int version3()
{
    /*Solicitud de numero de niveles*/
    int n, s;
    printf("Ingrese la cantidad de niveles y secciones del pino: ");
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
            printf("*");
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
