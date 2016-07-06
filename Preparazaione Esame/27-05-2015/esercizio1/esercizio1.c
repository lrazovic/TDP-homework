#include <stdlib.h>
#include <stdio.h>
#include "esercizio1.h"

TipoSCL* brilla(TipoSCL* scl);

int delete_occurrences(TipoSCL* scl, int info) { 
    int conto = 0;
    TipoSCL* aux = scl;
    TipoSCL brilla;
    if(*scl == NULL)
        return 0;
    if((*scl)->info == info && (*scl)->next == NULL){
        free(*scl);
        scl = NULL;
        return 1;
    }
    while(*aux != NULL){
       if((*aux)->info == info){
            brilla = *aux;
            *aux = (*aux)->next;
            free(brilla);
            conto++;
       } else {
           *aux = (*aux)->next;
       }
    }
    return conto;
}
