#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
  int rows; 
  int cols;
  float **row_ptrs;
} Mat;

Mat* Mat_alloc(int rows, int cols){
  Mat* matrix = (Mat*) malloc(sizeof(Mat));
  matrix -> cols = cols;
  matrix -> rows = rows;
  (*matrix).row_ptrs = (float**) malloc(rows*sizeof(float*));
  for(int j = 0; j < rows; j++)
    matrix->row_ptrs[j] = (float*) malloc(rows*sizeof(float));
  return matrix;
}

Mat* Mat_read(char *filename){
  FILE* txt= fopen(filename,"r");
  int rows;
  int cols;
  fscanf(txt, "%d", &rows);
  fscanf(txt, "%d", &cols);
  float valore = 0;
  Mat* matrix = Mat_alloc(rows,cols);
  for(int r = 0; r < rows; r++){
    for(int c = 0; c < cols; c++){
      fscanf(txt, "%f", &valore);
      (*matrix).row_ptrs[r][c] = valore;
        if(feof(txt)){
          printf("File Terminato");
          break;
        }
    }
  }
return matrix;  
}

void Mat_print(Mat *m){
  int rows = (*m).rows;
  int cols = (*m).cols;
  for(int r = 0; r < rows; r++){
    for(int c = 0; c < cols; c++){
      printf("%.1f   ",(*m).row_ptrs[r][c]);
    }
    printf("\n");
  }
}

void Mat_write(char *filename, Mat *m){
  FILE* txt = fopen(filename, "w");
  int rows = (*m).rows;
  int cols = (*m).cols;
  fprintf(txt,"%d ",rows);
  fprintf(txt,"%d \n",cols);
  for(int r = 0; r < rows; r++){
    for(int c = 0; c < cols; c++){
      fprintf(txt,"%.1f  ",(*m).row_ptrs[r][c]);
    }
    fprintf(txt,"\n");
  }
}
int  Mat_is_symmetric(Mat *m){
  int rows = (*m).rows;
  int cols = (*m).cols;
  for(int r = 0; r < rows; r++){
    for(int c = 0; c < cols; c++){
      if((*m).row_ptrs[r][c] != (*m).row_ptrs[c][r])
        return 0;
    }
  }
  return 1;
}
void Mat_normalize_rows(Mat *m);
//{
  //int rows = (*m).rows;
  //int cols = (*m).cols;
  //float abs;
  //for(int r = 0; r < rows; r++){
    //for(int c = 0; r < cols; c++){
      //abs = fabs((*m).row_ptrs[r][c]);
      //(*m).row_ptrs[r][c] = (*m).row_ptrs[r][c]/abs;
    //}
  //}
//}

Mat* Mat_clone(Mat *m){
  int rows = (*m).rows;
  int cols = (*m).cols;
  Mat* clone = Mat_alloc(rows,cols);
  (*clone).cols = cols;
  (*clone).rows = rows;
  for(int r = 0; r < rows; r++){
    for(int c = 0; c < cols; c++){
      (*clone).row_ptrs[r][c]=(*m).row_ptrs[r][c];
    }
  }
  return clone;
}
void Mat_free(Mat *m);

int main(int argc, char **argv) {
  /********************************************************
   *             TEST Mat_alloc/Mat_read                  *
   ********************************************************/
  printf("Leggo m1 dal file mat_1.txt...");
  Mat *m1 = Mat_read("mat_1.txt");
  printf(" fatto.\n\n");

  /********************************************************
   *                    TEST Mat_print                    *
   ********************************************************/
  printf("m1:\n");
  Mat_print(m1);
  printf("\n");

  /********************************************************
   *                    TEST Mat_write                    *
   ********************************************************/
  printf("Scrivo una copia di m1 in copia_mat_1.txt...");
  Mat_write("copia_mat_1.txt", m1);
  printf(" fatto.\n\n");

  /********************************************************
   *                TEST Mat_is_symmetric                 *
   ********************************************************/
  printf("Leggo m2 dal file mat_2.txt...");
  Mat *m2 = Mat_read("mat_2.txt");
  printf(" fatto.\n");
  printf("m2:\n");
  Mat_print(m2);  
  printf("La matrice m2 e' simmetrica?\n");
  int is_symmmetric = Mat_is_symmetric(m2);
    if(is_symmmetric) {
    printf("Si e' simmetrica.\n");
    }
    else {
      printf("No non e' simmetrica.\n");
    }
   printf("\n");

  /********************************************************
   *               TEST Mat_normalize_rows                *
   ********************************************************/
  //printf("Leggo m3 dal file mat_3.txt...");
  //Mat *m3 = Mat_read("mat_3.txt");
  //printf(" fatto.\n");
  //printf("m3:\n");
  //Mat_print(m3);  
  //printf("Normalizzo le righe della matrice m3...");
  //Mat_normalize_rows(m3);
  //printf(" fatto.\n");
  //printf("La matrice m3 con righe normalizzate e':\n");
  //Mat_print(m3);
  //printf("\n");

  /********************************************************
   *                    TEST Mat_clone                    *
   ********************************************************/
   printf("Clono m2...");
   Mat *copy_m2 = Mat_clone(m2);
   printf(" fatto.\n");
   printf("Copia m2:\n");
   Mat_print(copy_m2);  

  /********************************************************
   *                    TEST Mat_free                     *
   ********************************************************/
  // Mat_free(copy_m2);
  // Mat_free(m3);
  // Mat_free(m2);
  // Mat_free(m1);

  return 0;
}
