// 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int* allocaEdInizializza(int n, int valore){
    int * mem = (int*) malloc(n*sizeof(int));
    *mem = valore;
    
    return mem;
}

int main(int argc, char const *argv[]) {
    int n, valore;
    printf("Inserisci la dimensione: \n");
    scanf("%d",&n);
    printf("Inserisci il valore: \n");
    scanf("%d", &valore);
    
    int * memoria =  allocaEdInizializza(n,valore);
    printf("Memoria: %d\n", *memoria);
    
    free(memoria);   
}