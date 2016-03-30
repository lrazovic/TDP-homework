#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
  char c;
  short s;
  int l;
  long k;
  float f;
  double d;
  
  printf("Indirizzo del Char %d\n",&c);
  printf("Dimensione del Char %d\n",sizeof(char));
  printf("Indirizzo dello Short %d\n",&s);
  printf("Dimensione dello Short %d\n",sizeof(short));
  printf("Indirizzo dell'Int %d\n",&l);
  printf("Dimensione dell'Int %d\n",sizeof(int));
  printf("Indirizzo del Long %d\n",&k);
  printf("Dimensione del Char %d\n",sizeof(long));
  printf("Indirizzo del Float %d\n",&c);
  printf("Dimensione del Float %d\n",sizeof(float));
  printf("Indirizzo del Double %d\n",&c);
  printf("Dimensione del Double %d\n",sizeof(double));
}
