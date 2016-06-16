#include "esercizio3.h"
#include <stdlib.h>
#include <stdio.h>
int lunghezza(TipoSCL src);
int* allocaArray(int dim);
void fatuttoilresto(int* vet,TipoSCL lista, int index);

int* integralVector(int* length, TipoSCL src){
    *length =  lunghezza(src);
    int* vettore = calloc(*length,__SIZEOF_INT__);
    int index = 0;
    fatuttoilresto(vettore,src,index);
    return vettore;
}

int lunghezza(TipoSCL src){
    int lung;
    if(src == NULL)
        return 0;
    return lung = 1 + lunghezza(src -> next);
}

void fatuttoilresto(int* vet,TipoSCL lista, int index){
    if(lista == NULL)
        return;
	if(lista->next==NULL){
	    *vet=*(vet-1)+lista->info;
	     return;
	}
	if(index==0)
	    *vet=lista->info;
	else
	    *vet=*(vet-1)+lista->info;
	lista=lista->next;
    fatuttoilresto(vet+1,lista,index+1);
}
