//NON FUNZIONA

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
    
    //Valore
    int * valore = (int*) malloc(2*sizeof(int));
    
    //Minimo
    int * minimo = valore + 1;
    
	printf("Inserisci il valore: \n");
	scanf("%d", minimo);
    *valore = *minimo;
    
	while(*(valore) != 0){
		printf("Inserisci il valore: \n");
		scanf("%d",valore);
		if(*valore < *(minimo) && (*valore != 0)){
            *(minimo) = *valore;
		}
        printf("Valore: %d\n", *valore);
        printf("Minimo: %d\n", *minimo);
	} //Chiudo While
    
	printf("Hai scelto 0, chiudo\n");
	printf("Il minimo e' %d \n", *(minimo));
    
    free(valore);
}
