#include "esercizio2.h"
#include <stdlib.h>
#include <stdio.h>

TipoSCL lowerValues(Mat* m, float value) {
    TipoSCL lista = (TipoSCL) malloc(sizeof(NodoSCL));
    lista->next = NULL;
    TipoSCL aux = lista;
    for(int r = 0; r < m->rows; r++){
        for(int c = 0; c < m->cols; c++){
            if(m->row_ptrs[r][c] < value){
               aux->next = (TipoSCL) malloc(sizeof(NodoSCL));
               aux = aux->next;
               aux -> col = c;
               aux -> row = r;
               aux -> v = m->row_ptrs[r][c];
               aux->next = NULL; 
            }
        }
    }
    aux = lista->next;
    free(lista);
    return aux;
}
