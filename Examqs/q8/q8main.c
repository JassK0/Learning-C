#include <stdio.h>
#include "que8.h"

void printL(NodeType *L) {
 printf("List is: "); printList(L);
 printf(" (length %d)\n",lengthList(L));
}

int main(void) {

 NodeType *List,   
          *ptr;    
 int       i; 

 printf("Making List\n");
 List=makeList();
 printL(List);
 printf("\n");

 printf("adding 0-2 to end of list \n");
 for (i=0; i<3;i++) AddToEnd(&List,i);       
 printL(List);
 printf("\n");

 printf("adding -1 to front and 10 to end\n");
 AddToFront(&List,-1);
 AddToEnd(&List,10);
 printL(List);
 printf("\n");

 printf("deleting a node from front\n");
 DelFromFront(&List);
 printL(List);
 printf("\n");

 printf("deleting a node from end\n");
 DelFromEnd(&List);
 printL(List);
 printf("\n");

 printf("deleting 3 nodes from front\n");
 for (int i=1;i<=3;i++) DelFromFront(&List); 
 printL(List);
 printf("\n");

 printf("adding 0-2 to front of list \n");
 for (i=0; i<3;i++) AddToFront(&List,i);       
 printL(List);
 printf("\n");

 printf("deleting 3 nodes from end\n");
 for (int i=1;i<=3;i++) DelFromEnd(&List); 
 printL(List);
 printf("\n");

 printf("deleting from end of list\n");
 DelFromEnd(&List);
 printf("\n");

 printf("deleting from front of list\n");
 DelFromFront(&List);
 printf("\n");

return 0;
}
