#ifndef NodeTypeSeen
#define NodeTypeSeen
typedef struct node NodeType;

struct node {
	int value;
	NodeType *next;
   };

#endif

NodeType *makeList(void) ;
void AddToEnd(NodeType **L, int v);
void AddToFront(NodeType **L, int v) ;
void printList(NodeType *L) ;
int lengthList(NodeType *L);
void DelFromFront(NodeType **L);
void DelFromEnd(NodeType **L);

/*

*	Access or modify the content of the pointer, but the pointer remains unchanged.
**	Modify the pointer itself, allowing reassignment to a new memory location.

*/
