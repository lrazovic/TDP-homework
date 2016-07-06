#include <stdio.h>

int main(int argc, char **argv) {
    int n;
    int serie = 0;
    printf("Inserisci N: \n");
    scanf_s("%d", &n);
    if(n == 1){
        printf("1\n");
        return 0;
    } else if(n == 2){
        printf("1,1\n");
        return 0;
    }
    for(int i = 3; i < n; i++){

    }
}
