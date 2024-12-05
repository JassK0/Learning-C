
/*

Answer file: ans8.c

Given file que8.h provides definitions for a linked-list.
Given file que8.c provides the implementation for a linked-list.
Given file que8main.c adds/removes various items and prints the list.

The program's output is supposed to be as shown below.
However, que8.c is missing some code, denoted by XXXXXXX.
Copy que8.c to ans8.c and complete ans8.c by replacing only XXXXXXX,
so that the program functions as required.

Do not modify que8main.c or que8.h. 

> gcc que8main.c ans8.c
> ./a.out
Making List
List is:  (length 0)

adding 0-2 to end of list
List is:  0  1  2  (length 3)

adding -1 to front and 10 to end
List is:  -1  0  1  2  10  (length 5)

deleting a node from front
List is:  0  1  2  10  (length 4)

deleting a node from end
List is:  0  1  2  (length 3)

deleting 3 nodes from front
List is:  (length 0)

adding 0-2 to front of list
List is:  2  1  0  (length 3)

deleting 3 nodes from end
List is:  (length 0)

deleting from end of list
cannot delete from empty list

deleting from front of list
cannot delete from empty list


*/

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
  //XXXXXXX
  if (*L == NULL){
    fprintf(stderr, "CANNOT DELETE FROM EMPTY LIST");
    return;
  } 
  
  //deleting from front of non-empty list
  //XXXXXXX
  NodeType *temp = *L;
  *L = (*L)->next; //point to second node, basically means deleted from front or first.
  free(temp);

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
  //XXXXXXX
  //tmp is for mempry managemnt, your not actually changing or using it, just used to 
  //store memloc of p-> next, then freeing it delets that node
NodeType *tmp = p->next;
p->next = NULL;
free(tmp);
  return ;
}
  
