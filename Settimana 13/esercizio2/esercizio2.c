#include "esercizio2.h"
#include <stdlib.h>
SparseMatrix dense_to_sparse_matrix(float** mat, int rows, int cols) {
SparseMatrix sparse_mat = (SparseMatrix) malloc(sizeof(SparseMatrixElement));	
SparseMatrix mat2 = sparse_mat;
	for(int r=0;r<rows;r++){
		for(int c=0;c<cols;c++){
			if (mat[r][c] != 0){
			 mat2->row = r;
			 mat2->col = c;
			 mat2-> value = mat[r][c];
			 mat2->next = (SparseMatrix) malloc(sizeof(SparseMatrixElement));	
			 mat2->next;
			}
		}
	}   
	mat2->next = NULL;
return sparse_mat;
}
