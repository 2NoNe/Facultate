#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

	int n, m, p;

	srand(time(NULL));
	n = rand();
	m = rand();
	p = rand();

	printf("%d %d %d\n", n, m, p);

	return 0;
}