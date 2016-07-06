#include "recursion.h"

//Funzioni Extra, ma utili.
int str_length(char* s){
    if(s[0] == 0)
        return 0;
    else 
        return 1 + str_length(s + 1); 
}
//
//Esercizio 1
//
int sup_length(char* bin_seq){
    if(bin_seq[0] == 0)
        return 0;
    else
        return 1 + sup_length(bin_seq + 1);
}
int length(BinSeq* bin_seq) { 
    return sup_length((*bin_seq).data);
}
//
//Esercizio 2
//

void copy(BinSeq* dest, BinSeq* src) {
    if()
    

}

void concatenate(BinSeq* dest, BinSeq* src) { 

}

int indexOf(BinSeq* bin_seq, char c) { 

}

int equal(BinSeq* bin_seq1, BinSeq* bin_seq2) { 

}

int prefix(BinSeq* bin_seq, BinSeq* prefix) { 

}

int lengthMaxSequence(BinSeq* bin_seq, char c) { 

}
