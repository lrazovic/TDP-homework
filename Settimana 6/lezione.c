//Lezione noiosa di ripasso tra la differnza tra variabile e il suo valore 
//Variabile spazio di Memoria 

//Puntatore ad i
int * i_ptr;

//Puntatore al Puntatore di i
int ** i_ptr_ptr = &i_ptr;

//Parliamo di Funzioni, la ridondanza del codice è IL DIAVOLO
/*
    <tipo> <nome> (<parametri>)
*/

//Includo le dichiarazioni delle funzioni 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fattoriale (int i) {
    //Il valore del Fattoriale
    int f = 1;
    
    //Ciclo per i volte
    for (int j=1; j<=i; j++)
        f*=j;
    return f;
}

//Valore della funzione coseno
double floatingPointFunction(double x){
    return cos(x);
}
//Derivate Numerica
double derNum(double x, double epsilon){
    return(floatingPointFunction(x+epsilon) - floatingPointFunction(x-epsilon) / (2*epsilon));
}

void stampoPrimiNValoriEDerivata(double start, double step, double num_values){
    for(double i=start; i<num_values; i*=step){
        double x = start +;
        
    }
    
}
void sommaArray (float *dest, float* v1, float* v2, int size){
    
}

int main(int argc, char** argv){
    printf("Fattoriale 5: %d\n", fattoriale(5));    
    printf("",derNum());
}
