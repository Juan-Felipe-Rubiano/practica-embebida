#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char **argv) {

  if (argc < 2) {
    printf("Uso ./[ejectuable] [numero de primos a encontrar]");
    return 1;
  }

  int numPrimos = atoi(argv[1]);

  if (numPrimos <= 0) {
    printf("Ingrese un numero valido\n");
    return 1;
  }

  int *primos = malloc(numPrimos * sizeof(int));

  int primosEncontrados = 0;
  int i = 0;

  while(primosEncontrados < numPrimos){
      bool primo = 1;
      for(int j = 2; j < i; j++){
          if(i % j == 0){
              primo = 0;
              break;
          }
      }
      if(primo){
          primos[primosEncontrados] = i;
          primosEncontrados++;
      }
      i++;
  }


  printf("Primos encontrados (%d): \n", numPrimos);

  for (int i = 0; i < numPrimos; i++) {
    printf("%d", primos[i]);
  }
  printf("\n");

  free(primos);
  return 0;
}
