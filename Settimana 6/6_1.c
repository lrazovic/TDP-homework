#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void scambia(int *a, int *b){
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

int main(int argc, char const *argv[]) {
    int a,b;
    printf("Inserisci il primo valore: \n");
    scanf("%d", &a);
    printf("Inserisci il secondo valore: \n");
    scanf("%d", &b);
    
    scambia(&a,&b);
    printf("Ora il primo valore è %d e il secondo è %d \n", a,b);
}