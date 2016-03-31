//2.3b in funzioni

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void stampaAsterischi(int n, int fill){
    if(fill>0){
        for(int i=0; i < n; i++){
            printf("*");
        }
        printf("\n");
    } else {
        for(int i = 0; i < n; i++){
            if(i == 0){
                printf("*");
            } else if(i == n-1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    
}

int main(int argc, char const *argv[]) {
    int n, riempi;
    printf("Inserisci il numero di asterischi: \n");
    scanf("%d",&n);
    printf("Inserire un numero maggiorie di 0 per stampare una riga completa, minore di 0 per 'altrimenti'\n");
    scanf("%d", &riempi);
    stampaAsterischi(n,riempi);
}