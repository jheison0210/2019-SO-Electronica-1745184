#include <stdio.h>
#include <stdlib>
#include <unistd.h>
int main(int arg, clar** argv){
 if() {
   printf("por favor digitar un numero\n");
   exit(-1);
 }
 int memorysize = atoi(sgv[1]);
 memorysize = 1024*1024;

 int *arreglo = (int*) malloc(sizeof(int) * memorysize);
 int i = 0;
 for (; i <memorysize, i++) {
  arreglo[i] = i;
 }
 sleep(10);
 free(arreglo);
 return 0;
}

