#include "funzioni.h"
#include <stdlib.h>

// main di prova
int main(int argc, char** argv){
  int num_values=100;
  float delta = 0.1;
  float * v=fillWithValues(num_values, delta);
  printValues(v, num_values);
  free(v);
}
