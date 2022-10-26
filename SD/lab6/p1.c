#include <stdio.h>
#include <stdlib.h>

struct node {

	int data;
	struct node* s;
	struct node* d;
};

void inordine(struct node* rad){

	if(rad == NULL)
		return;

	inordine(rad->s);
	printf("%d -> ", rad->data);
	inordine(rad->d);
}

void preordine(struct node* rad){

	if(rad == NULL)
		return;

	printf("%d -> ", rad->data);
	preordine(rad->s);
	preordine(rad->d);
}

void postordine(struct node* rad){

	if(rad == NULL)
		return;

	postordine(rad->s);
	postordine(rad->d);
	printf("%d -> ", rad->data);	
}

struct node* new(int data){

	struct node* node = (struct node*)malloc(sizeof(struct node));

	node->data = data;
	node->s = NULL;
	node->d = NULL;
	return node;
}

struct node* inserareStanga(struct node* rad,int data){
	
	rad->s = new(data);
	return rad->s;
}

struct node* inserareDreapta(struct node* rad,int data){
	
	rad->d = new(data);
	return rad->d;
}

int inaltime(struct node* rad){

	if(rad == NULL)
		return -1;
	else{

		int sinalt = inaltime(rad->s);
		int dinalt = inaltime(rad->d);

		if(sinalt > dinalt)
			return (sinalt + 1);
		else
			return (dinalt + 1);
	}
}

int main(){

	struct node* rad = new(1);

	inserareDreapta(rad, 2);
	inserareStanga(rad, 3);
	inserareStanga(rad->s, 4);
	inserareDreapta(rad->d, 5);

	printf("In ordine\n");
	inordine(rad);
	printf("\n");
	printf("In preordine\n");
	preordine(rad);
	printf("\n");
	printf("In postordine\n");
	postordine(rad);
	printf("\n");
	printf("Inaltimea este: %d", inaltime(rad));
	printf("\n");

	return 0;
}