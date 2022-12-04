#include <stdio.h>
#include <stdlib.h>

typedef struct vector{

	int *v;
	int cap;
	int n;

}vector;

void init_vector(vector *a, int nr){
	
	a -> n = 0;
	a -> cap = nr;
	a -> v = malloc((a -> cap)*sizeof(int));
}

void scrie_vector(vector *a){

	int i;

	for(i = 0; i < a -> n; i ++)
		printf("%d ", a -> v[i]);
	printf("\n");
}

void adauga_vector(vector *a, int n){

	if( a -> cap == a -> n){
		
		a -> cap *= 2;
		a -> v = realloc(a -> v, a->cap * sizeof(int));
	}

	a -> v[a -> n] = n;
	a -> n ++;

}

int main(){

	vector s;

	int nr, i;

	printf("Dimensiunea alocata vectorului:");
	scanf("%d", &nr);

	init_vector(&s, nr);

	for(i = 0; i < 100; i++){

		adauga_vector(&s, i);
		scrie_vector(&s);
	}

	return 0;
}