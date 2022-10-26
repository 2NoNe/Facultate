#include <stdio.h>
#include <stdlib.h>

struct Nod{

	int val;
	struct Nod *next;
};

void print(struct Nod* n){

	while(n != NULL){

		printf(" %d ", n->val);
		n = n->next;
	}

	printf("\n");
}


int main()
{

	struct Nod* head = NULL;
	struct Nod* second = NULL;
	struct Nod* third = NULL;
	int num, prev, next;
	
	head = (struct Nod*)malloc(sizeof(struct Nod));
	second = (struct Nod*)malloc(sizeof(struct Nod));
	third = (struct Nod*)malloc(sizeof(struct Nod));

	head->val = 1;
	head->next = second;
	second->val = 2;
	second->next = third;
	third->val = 3;
	third->next = NULL;

	print(head);

	//scanf("%d", &num);
	//head = insert_top(num, head);
	return 0;
}