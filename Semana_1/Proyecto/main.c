#include <stdio.h>
#include "Desafio_1\func1.h"

int main(void) {
  printf("Selecciona una opcion del menu: \n");
  //printf( "%d \n" ,suma(3, 4));
  char a;
  printf("1: Saludo \n");
  printf("2: WIP \n");
  printf("s: salir \n");
  printf("-> ");
  scanf("%c", &a);
  switch(a){
    case '1':
      opcion1();
    break;
    case '2':
      printf("Trabajo en progreso");
    break;
    case 's':
      printf("Bye bye");
    break;
    default:
      printf("Selecciona algo del menu");
    break;
  }
  printf("\n");
  return 0;
}
