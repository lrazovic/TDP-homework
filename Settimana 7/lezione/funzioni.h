#pragma once // scoprite cosa succede alla compilazione del programma
             // eliminando la direttiva

/* non necessaria, non viene invocata nel main
float myFunction(float x){
  return sin(x);
}
*/

float* fillWithValues(int n, float delta);

void printValues(float* v, int n) ;

int my_variable;
