#include <stdio.h>
 #include <stdlib.h>
 int main(int argc, char *argv[]) {
     printf("locazacion de codigo : %p\n", main);
     printf("localizacion de monton  : %p\n", malloc(100e6));
     int x = 3;
     printf("locazacion de pila : %p\n", &x);
 return x;
 }
