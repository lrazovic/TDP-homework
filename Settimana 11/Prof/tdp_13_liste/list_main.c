#include "list_functions.h"
#include <stdio.h>

int main(int argc, char** argv){
  struct ListElem* l_fancy=List_makeFancyChain();
  List_print(l_fancy);

  //Test Push Front
  printf("Test Push Front\n");  
  struct ListElem* l0=NULL;
  for (int i=0; i<10; i++)
    l0=List_pushFront(l0, 10+i);
  List_print(l0);
  
  //Test Push Back
  printf("Test Push Back\n");  
  struct ListElem* l1=NULL;
  for (int i=0; i<10; i++)
    l1=List_pushBack(l1, 10+i);
  List_print(l1);


  int k=13;
  struct ListElem* l0_elem=List_find(l0, k);
  printf("l0.elem->info=%d\n", l0_elem->info);

  struct ListElem* l1_elem=List_find(l1, k);
  printf("l1.elem->info=%d\n", l1_elem->info);

  k=0; // not in list
  l0_elem=List_find(l0, k);
  printf("l0.elem->info=%p\n", l0_elem);

  l1_elem=List_find(l1, k);
  printf("l1.elem->info=%p\n", l1_elem);


  l1=List_popFront(l1);
  l1=List_popBack(l1);
  List_print(l1);

  
  k=3;
  l1_elem=List_at(l1, k);
  printf("elem at %d: %d\n", k, l1_elem->info);

  printf("removing elem in middle\n");
  l1=List_remove(l1, l1_elem);
  List_print(l1);

  printf("removing elem in front\n");
  l1=List_remove(l1, l1);
  List_print(l1);

}
