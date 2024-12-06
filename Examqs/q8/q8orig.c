#include <stdio.h>
#include <stdlib.h>
#include "que8.h"

NodeType *newNode(int v) {
  NodeType *new;
  new=(NodeType *) malloc(sizeof(NodeType));
  new->value=v;
  new->next=NULL;
  return(new);
}

NodeType *makeList(void) {
  return(NULL);
}

void printList(NodeType *L) {
 NodeType *p;
 for (p=L; p!=NULL; ) {
   printf(" %d ", p->value);
   p=p->next;
 }
 return;
}

int lengthList(NodeType *L){
 NodeType *p;
 int len=0;
 for (p=L; p!=NULL; ) {
   len++;
   p=p->next;
 }
 return(len); 
}

void AddToFront(NodeType **L, int v) {

  NodeType *new=newNode(v);
  new->next=*L;
  *L=new;
  return; 
}

void AddToEnd(NodeType **L, int v) {

  NodeType *new=newNode(v);
  //adding to end of empty list
  if ((*L)==NULL)  
     *L=new;
  else {           
  //adding to end of non-empty list
     NodeType *p=*L;
     while ((p->next)!=NULL) //traverse until p points to last node
        p=p->next; 
     p->next=new;            //add new after current last node
  }
  return ;
}

void DelFromFront(NodeType **L){
  //deleting from front of empty list
 if (*L == NULL)
 {
    fprintf(stderr, "list empty");
 }
 
  //deleting from front of non-empty list
  
}

void DelFromEnd(NodeType **L){
  //deleting from end of empty list
  if ((*L)==NULL)  {
     fprintf(stderr,"cannot delete from empty list\n");
     return ;
  } 
  //deleting from end of 1-node list
  if (((*L)->next)==NULL) {
    NodeType *tmp=*L;
    *L=NULL;
    free(tmp);
    return ;
  }
  //deleting from end of multi-node list
  NodeType *p=*L;
  while ((p->next->next)!=NULL) //traverse until p points to 2nd last node
      p=p->next; 
  XXXXXXX
  return ;
}
  
