// a x + b = 0, trova la x 

#include <stdio.h>

int main(int argc, char const *argv[]) {
    float a,b,x;
    
    printf("Inserisci il coefficente di a\n");
    scanf("%f",&a);
    printf("Inserisci il coefficente di b\n");
    scanf("%f",&b);
    x = -b/a;
    printf("La x vale: %f\n", x);
}