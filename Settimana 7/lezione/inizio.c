#include <math.h>
#include <stdlib.h>
#include <stdio.h>

/*
  si scriva un programma che
  - data una funzione da reale a reale (esempio seno, o coseno)
    rappresentata dalla funzione utente myFunction(x)
  - dato un reale delta
  - dato un intero n

  scriva su una zona di memoria contigua, deputata a contenere
  n float i valori della funzione 
  - f(0*delta)
  - f(1*delta)
  - f(2*delta)
  - ...
  - f( (n-1)*delta)

*/



float myFunction(float x){
  return sin(x);
}

float* fillWithValues(int n, float delta){
  // alloco la memoria per n float
  float* v=(float*) malloc(sizeof(float) * n);
  // per ogni valore tra 0 ed n-1
  int i;
  for (i=0; i<n; i++){
    // valuto x, ovvero il punto dove la funzione e' valutata 
    float x = delta*i;  
    // valuto f_x, ovvero il valore della funzione nel punto
    float f_x=myFunction(x);
    
    // metto il valore f_x nella locazione i volte dopo v;
    *(v+i) = f_x;
  }
  return v;
}

/*
  si scriva una funzione che data una zona di memoria
  contenente n float, per ciascun float ne stampi
  - l'indice (posizione)
  - il valore 
*/

void printValues(float* v, int n) {
  int i;
  for (i=0 ; i<n; i++){
    printf("%d: %f\n", i, *(v+i));
  }
}


// main di prova
int main(int argc, char** argv){
  int num_values=100;
  float delta = 0.1;
  float * v=fillWithValues(num_values, delta);
  printValues(v, num_values);
  free(v);
}
