#include <stdio.h>
#include <stdlib.h>

struct Node {

	int data;
	struct Node *next;
};

struct Node* varf = NULL;

void push(int x){

	struct Node *new;
	new = (struct Node*)malloc(sizeof(struct Node));

	new->data = x;

	if(varf == NULL){

		new->next = NULL;
	}else{

		new->next = varf;
	}
	varf = new;
} //adauga un element in varful stivei

void pop(){

	if(varf = NULL){
		printf("Lista nu mai are elemente\n");
	}else{

		struct Node *t = varf;

		varf = varf->next;
		free(t);
	}
} //elimina varful stivei
int top(){

	if(varf != NULL)
		return varf->data;
	else
		return 0;
} // returneaza valoarea din varful stivei
void is_empty(){

	if(varf == NULL){
		printf("NU sunt elemente in stiva\n");
	}
	else
		printf("Sunt elemente in stiva\n");
} // verifica daca stiva este goala

void afiseaza(){

	if(varf == NULL){
		printf("Lista nu are elemente\n");
	}else{

		struct Node *t = varf;
		while(t->next != NULL){
			printf("%d->", t->data);
			t = t->next;
		}
		printf("%d->NULL\n", t->data);
	}
}

int main(){

	is_empty();
	push(1);
	push(2);
	push(3);
	pop();
	afiseaza();
	is_empty();
	printf("Primul element este %d\n", top());

	return 0;
}