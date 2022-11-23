#include <stdio.h>

int *swap(int *pa,int *pb){

	int aux;

	aux = *pa;
	*pa = *pb;
	*pb = aux;
	return pa;
}

int main(){

	int a, b, *p;

	scanf("%d %d", &a, &b);

	p=swap(&a,&b);
	printf("%d\n", *p);

	//printf("%d %d\n", a, b);

	return 0;	
}