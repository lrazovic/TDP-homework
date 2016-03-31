#include <stdio.h>

int main(int argc, char const **argv) {
  int dim;
  printf("Inserire la dimensione del quadrato di asterischi: ");
  scanf("%d", &dim);

  //Ciclo le Righe
  for(int r = 0; r < dim; ++r) {
    //Ciclo le Colonne
    for(int c = 0; c < dim; ++c) {
      printf("*");
    }
    printf("\n");
  }
}
