//Linked List ¿¬½À
#include<stdlib.h>
#include <stdio.h>
typedef struct node{
	int score;
	struct node* pNext;
} Node;
typedef struct linkedList {
	Node* pHead;
	Node* pTail;
	int nNode;
}LinkedList;



//ÇÔ¼ö averageLL() + ¼ø¼­µµ¸¦ ±×¸®¼¼¿ä
//ÀÔ·Â:¿¬°á¸®½ºÆ® ( ¿¬°á¸®½ºÆ®ÀÇ Çìµå³ëµå Æ÷ÀÎÅÍ)
//Ãâ·Â: ³ëµå¼ºÀûÀÇ Æò±Õ(double)
//ºÎ¼öÈ¿°ú: ¾øÀ½
double averageLL(Node* ptr) {
   int sum = 0, count = 0;
   double average;
	while(ptr != NULL) {
		sum += ptr ->score;
		count++;

	   //printf("score = %d\n", ptr->score);
	   ptr = ptr->pNext;
   }
	average = (double) sum/count; 

	return average;
}


//ÇÔ¼ö :  È­¸é¿¡ ¿¬°á¸®½ºÆ®ÀÇ score°ªÀ» ­x·Â
//ÀÔ·Â:¿¬°á¸®½ºÆ® ( ¿¬°á¸®½ºÆ®ÀÇ Çìµå³ëµå Æ÷ÀÎÅÍ)
//Ãâ·Â: ¾øÀ½
//ºÎ¼öÈ¿°ú: ¾øÀ½
Node* returnTail(Node* ptr) {
	if (ptr == NULL)// ¿¬°á¸®½ºÆ®¿¡ ³ëµå°¡ ¾øÀ½
		return NULL;

	while(ptr !=NULL) {
        if(ptr->pNext == NULL)
		return ptr;
		ptr = ptr->pNext;
	}
}

//ÇÔ¼ö: addTail() È­¸é¿¡ ¿¬°á¸®½ºÆ®ÀÇ score°ªÀ» ­x·Â
//ÀÔ·Â:¿¬°á¸®½ºÆ®, Ãß°¡ÇÏ·Á´Â ³ëµå Æ÷ÀÎÅÍ 
//Ãâ·Â: ¾øÀ½
//ºÎ¼öÈ¿°ú: Ãß°¡ÇÏ·Á´Â ³ëµå°¡ ¿¬°á¸®½ºÆ®ÀÇ tail·Î Ãß°¡µÊ.

void addTail(Node* pHead, Node* pNode) {
	if(pHead == NULL){
		printf("error can't add a tail to mepty linked list \n");
	    return;
	}
	Node* pTail = returnTail(pHead);
	pTail->pNext = pNode;

}




//ÇÔ¼ö printLL() È­¸é¿¡ ¿¬°á¸®½ºÆ®ÀÇ score°ªÀ» ­x·Â
//ÀÔ·Â:¿¬°á¸®½ºÆ® 
//Ãâ·Â: ¾øÀ½
//ºÎ¼öÈ¿°ú: ¾øÀ½
void printLL(LinkedList* pList) {
   Node* ptr = pList->pHead;
	while(ptr != NULL) {
	   printf("score = %d\n", ptr->score);
	   ptr = ptr->pNext;
   }
}

//ÇÔ¼ö createNode() 
//ÀÔ·Â: ¼ºÀû
//Ãâ·Â: ³ëµåÇÏ³ª¸¦ µ¿ÀûÇÒ´çÀ¸·Î »ı¼ºÇÏ¿© ¹İÈ¯ÇÑ´Ù. ÀÌ ¶§ score=ÀÔ·Â, pNext=NULL·Î ÇÑ´Ù.
//ºÎ¼öÈ¿°ú: ¾øÀ½
Node* createNode(int input) {
	Node* ptr;
	ptr = (Node*) malloc(sizeof(Node));
	ptr->score = input;
	ptr ->pNext =NULL;
	return ptr;
}

//ÇÔ¼ö addHead()
//ÀÔ·Â: ¿¬°á¸®½ºÆ® ±¸Á¶Ã¼ Æ÷ÀÎÅÍ(LinkedList*), »õ ³ëµå Æ÷ÀÎÅÍ
//Ãâ·Â: ¾øÀ½
//ºÎ¼öÈ¿°ú: ¿¬°á¸®½ºÆ® Çìµå¿¡ »õ ³ëµå¸¦ Ãß°¡
//³ëµå¸¦ »õ·Î Ãß°¡ÇÏ¸é ³ëµå°¡ µÇ¾î¾ßÇÔ.
void addHead(LinkedList* pList, Node* pNewNode) {
	
	if(pList->pHead == NULL)
		pList->pTail = pNewNode;

	pNewNode->pNext = pList->pHead; //#1
	pList->pHead = pNewnode;//#2
		(pList ->nNode)++;

}



//´ÙÀ½ÁÖ ½ÃÇè µÎ¼¼°³ ´Ù´ÙÀ½ÁÖµµ µÎ¼¼°³

int main() {
	LinkedList* pList;
	pList = (LinkedList*) malloc(sizeof(LinkedList));
	pList->pHead = pList->pTail = NULL; pList->nNode = 0;
	addhead(pList, createNode(10));
	addhead(pList, createNode(20));
	addhead(pList, createNode(30));
	addhead(pList, createNode(40));



	printLL(pList);	


}

//Æ÷ÀÎÅÍ : ¸Ş¸ğ¸® ÁÖ¼Ò