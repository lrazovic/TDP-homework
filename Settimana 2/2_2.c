//Media aritmetica di una serie di numeri inseriti da tastiera, lo 0 termina

#include <stdio.h>

int main(int argc, char const *argv[]) {
    //Il valore
    float a;
    
    //La somma
    float s = 0;
    
    //Il contatore
    int i=1;
    
    printf("Inserisci il valore\n");
    scanf("%f", &a);
    s = a;
    while(a != 0){
        printf("Inserisci il valore\n");
        scanf("%f", &a);
        if (a != 0){
            s += a;
            i++;
        }
    }
    //La media
    a = s/i;
    
    printf("La media aritemtica e' %f\n", a);
}