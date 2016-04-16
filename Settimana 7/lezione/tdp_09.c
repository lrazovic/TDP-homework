#include "tdp_09.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float miaFunzione(float x) {
    return sin(x);
}

float*  riempiConValori(int n, float delta){
    //Creo Memoria
    float * mem = (float*) malloc(n * sizeof(float));
    for(int i; i < n; i++){
        //Valuto il punto dove la mia funzione è valutata 
        float x = delta * i;
        float f_x = miaFunzione(x);
        *(mem + i) = f_x;
    }
    return mem;
}

void stampaValori(int * mem, int n){
    for(int i=0; i < n; i++){
        printf("%d: %f\n", i, *(mem +i));
    }
}