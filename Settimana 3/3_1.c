#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
    int a;
    printf("Inserisci un numero: \n");
    scanf("%d",&a);
    int *a_ptr = &a;
    printf("----------\n");
    for(int i = 0; i<a; i++){
        printf("%d\n",i);
    }
    printf("%d\n", a_ptr);
}