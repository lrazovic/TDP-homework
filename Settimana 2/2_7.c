//Triangolo di Floyd

#include <stdio.h>
int main (int argc, char** argv) {
    int i; //Conto le righe
    int j;
    int a;
    int b = 1;
    printf("Inserisci il valore N: ");
    scanf("%d",&j);
    for (i = 0; i <= j; i++){ //Cilca le righe
        for (a = 0; a < i; a++ ){ //Diagonale
            printf("%d ", b);
            b++;
        }
        printf("\n");
    }
}