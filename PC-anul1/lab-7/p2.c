#include <stdio.h>

void count(int n, int *v, int *zero, int *poz, int *neg){

	int i;

	*zero = 0; // *zero = &z
	*poz = 0;
	*neg = 0;

	/*for(i=0; i<n; i++){
		printf("%d", *(v+i));
	}*/

	for(i=0; i<n; i++){

		if(v[i] == 0)
			(*zero) ++;
		if(v[i] > 0)
			(*poz) ++;
		if(v[i] < 0)
			(*neg) ++;
	}

}

int main(){

	int v[10], n, i, z , p , ne ;

	scanf("%d", &n);

	for(i=0; i<n; i++){
		scanf("%d", &v[i]);
	}

	count(n, v, &z, &p, &ne);

	printf("nule : %d\n", z);
	printf("pozitive : %d\n", p);
	printf("negative : %d\n", ne);


	return 0;

}