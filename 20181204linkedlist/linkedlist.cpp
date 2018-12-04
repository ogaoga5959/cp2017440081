//Linked List ø¨Ω¿
#include<stdlib.h>
#include <stdio.h>
typedef struct node{
	int score;
	struct node* pNext;
} Node;
//«‘ºˆ printLL() »≠∏Èø° ø¨∞·∏ÆΩ∫∆Æ¿« score∞™¿ª ≠x∑¬
//¿‘∑¬:ø¨∞·∏ÆΩ∫∆Æ ( ø¨∞·∏ÆΩ∫∆Æ¿« «ÏµÂ≥ÎµÂ ∆˜¿Œ≈Õ)
//√‚∑¬: æ¯¿Ω
//∫Œºˆ»ø∞˙: æ¯¿Ω
void printLL(Node* ptr) {
   while(ptr != NULL) {
	   printf("score = %d\n", ptr->score);
	   ptr = ptr->pNext;
   }
}

//«‘ºˆ createNode() 
//¿‘∑¬: º∫¿˚
//√‚∑¬: ≥ÎµÂ«œ≥™∏¶ µø¿˚«“¥Á¿∏∑Œ ª˝º∫«œø© π›»Ø«—¥Ÿ. ¿Ã ∂ß score=¿‘∑¬, pNext=NULL∑Œ «—¥Ÿ.
//∫Œºˆ»ø∞˙: æ¯¿Ω
Node* createNode(int input) {
	Node* ptr;
	ptr = (Node*) malloc(sizeof(Node));
	ptr->score = input;
	ptr ->pNext =NULL;
	return ptr;
}

//«‘ºˆ addHead()
//¿‘∑¬: ø¨∞·∏ÆΩ∫∆Æ, ªı ≥ÎµÂ
//√‚∑¬: æ¯¿Ω
//∫Œºˆ»ø∞˙: ø¨∞·∏ÆΩ∫∆Æ «ÏµÂø° ªı ≥ÎµÂ∏¶ √ﬂ∞°
//≥ÎµÂ∏¶ ªı∑Œ √ﬂ∞°«œ∏È pHead∞° ∞°∏Æ≈∞¥¬ ≥ÎµÂ∞° µ«æÓæﬂ«‘.
void addHead(Node** ppHead, Node* pNewNode) {
	pNewNode->pNext = *ppHead;
	*ppHead = pNewNode;
}



//¥Ÿ¿Ω¡÷ Ω√«Ë µŒºº∞≥ ¥Ÿ¥Ÿ¿Ω¡÷µµ µŒºº∞≥

int main() {
    Node* pHead =NULL, *ptr;//«ÏµÂ≥ÎµÂ¿« ∆˜¿Œ≈Õ. NULL¿Ã∏È ø¨∞·∏ÆΩ∫∆Æ∞° æ¯¥Ÿ¥¬ ¿«πÃ(∑Œ æ‡º”«œ¿⁄)
	/*Node a,b;
	a.score = 10; b.score=20;
	a.pNext = &b; b.pNext = NULL;
	pHead = &a;*/
	pHead = createNode(10);
	ptr = createNode(20);
	addHead(&pHead, ptr);
	printLL(pHead);

	return 0;

}