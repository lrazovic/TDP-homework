#include "set.h"

#include <stdio.h>
#include <stdlib.h>
SetElem* pushElemento(SetElem* set, int info);
// Data una rappresentazione degli insiemi mediante SCL
// (vedi definizione nel file set.h), implementare le seguenti funzioni
// con side-effect


// stampa gli elementi dell'insieme set
void set_print(SetElem *set) {
    SetElem *aux = set;
    while(aux != NULL){
        printf("%d",aux->info);
        aux = aux -> next;
    }
    printf("\n");
}


// dato un insieme set, restituisce 1 se l'insieme e' vuoto, 
// 0 (false) altrimenti
int is_empty(SetElem *set) {
    if(set == NULL)
        return 1;
    return 0;
}


// dato un insieme set ed un valore intero info, restituisce 1
// se info e' un elemento di set, 0 (false) altrimenti
int is_element(SetElem *set, int info) {
    while(set != NULL){
        if(set->info == info)
            return 1;
        set = set -> next;
    }
    return 0;
}


// dato un insieme set, restituisce 1 se set rappresenta un insieme
// (ovvero non contiene elementi duplicati), 0 (false) altrimenti
int is_set(SetElem *set) {
    SetElem* aux = set;
    while(aux != NULL){
        if(&set != &aux && set->info == aux->info)
            return 1;
        aux = aux -> next;
    }
    return 0;
}


// dati gli insiemi sub e set, restituisce 1 se sub e' un
// sottoinsieme di set, 0 (false) altrimenti
int is_subset(SetElem *sub, SetElem *set) {
    return -1;
}

// dato un insieme set e un valore intero, modifica set aggiungendovi l'elemento info
// se non e' gia' presente 
void set_add(SetElem **set, int info) {
    SetElem* aux =*set; 
    while(aux != NULL){
        if(aux->info == info)
            return;
        aux = aux -> next;    
    }
    pushElemento(*set,info);
}
SetElem* pushElemento(SetElem* set, int info){
    SetElem* newElem = (SetElem*) malloc(sizeof(SetElem));
    newElem->info = info;
    newElem->next = NULL;
    if(set == NULL)
        return newElem;
    SetElem * aux = set;
    while(aux->next != NULL){
        aux = aux -> next;
    }
    aux->next = newElem;
    return set;
}

// dato un insieme set e un valore intero, rimuove dall'insieme l'elemento info
// (se presente)
void set_del(SetElem **set, int info) {

}

// dato un insieme src e un insieme dest, inserisce nell'insieme dest gli elementi di src 
// che non sono gia' presenti in dest
void set_union(SetElem *src, SetElem **dest) {

}

// dato un insieme src e un insieme dest, elimina dall'insieme dest gli eventuali elementi 
// presenti anche in src
void set_difference(SetElem *src, SetElem **dest) {

}
