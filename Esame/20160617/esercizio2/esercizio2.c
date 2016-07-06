#include "esercizio2.h"
#include <stdlib.h>
#include <stdio.h>

ListNode* merge_elements(ListNode* l1, ListNode* l2) {  
  ListNode* gen_node = (ListNode*) calloc(1,sizeof(ListNode));
  gen_node->next = NULL;
  ListNode* list = gen_node;
  while(l1 != NULL || l2 != NULL){
    list->next = (ListNode*) calloc(1,sizeof(ListNode));
    list = list->next;
    list->next = NULL;
    if(l1 != NULL && l2 == NULL){
      list->value = l1->value;
      l1 = l1->next;
    } else if(l1 == NULL && l2 != NULL) {
      list->value = l2->value;
      l2 = l2->next;
    } else {
      if(l1->value < l2->value){
        list->value = l1->value;
        l1 = l1->next;
      } else {
        list->value = l2->value;
        l2 = l2->next;
      }
    }
  }
  gen_node = gen_node->next;
  return gen_node;
}
