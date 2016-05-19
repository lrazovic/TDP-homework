#include "esercizio1.h"

int matrix_block_sum(Mat* dest, Mat* src, int start_row, int start_col) {
	int rows_src = src->rows;
	int cols_src = src->cols;
	int rows_dest = dest->rows;
	int cols_dest = dest->cols;
	int cont = rows_src * cols_src;
	
	if(rows_src + start_row > rows_dest || cols_src + start_col > cols_dest)
		return 0;
		
	for (int r = start_row; r < (start_row + rows_src); r++){
		for (int c = start_col; c < (start_col + cols_src); c++){
			int elemento = dest->row_ptrs[r][c];
			dest->row_ptrs[r][c]=elemento+ src->row_ptrs[r - start_row][c - start_col];				
		}
	}
return cont;
}
