#include <stdio.h>
#include <stdlib.h>
#include "Funciones/versiones.h"
#include "Funciones/saludo.h"
#include "Funciones/yeyecoa.h"

int main()
{
    char i;
    /*Solicitud de entrada*/
    printf("Escoge una de las opciones:\n");
    printf("0: Saludo \n");
    printf("1: Triangulo \n");
    printf("2: Arbol \n");
    printf("3: Pino \n");
    printf("4: Pino Yeyecoa \n");
    printf("s: salir \n");
    printf("-> ");
    scanf("%c", &i);
    /*Seleccion de opciones*/
    switch(i)
    {
    case '0':
        saludo();
    break;
    case '1':
        version1();
    break;
    case '2':
        version2();
    break;
    case '3':
        version3();
    break;
    case '4':
        yeyecoa();
    break;
    case 's':
        printf("Gracias por venir. Nos vemos...");
    break;
    default:
        printf("Corre el programa de nuevo y escoge algo del menu.\n");
    break;
    }

    return 0;
}

