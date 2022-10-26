#include <stdio.h>

void transform (int v[], int n, int x){

	int i, j = 0, aux;

	scanf("%d %d", &n, &x);

	for(i = 0; i < n; i++){

		scanf("%d", &v[i]);
	}

	for(i = 0; i < n; i++){

		if(v[i] < x){

			aux = v[i];
			v[i] = v[j];
			v[j] = aux;
			j++;
		}
	}

	printf("\n");

	for(i = 0; i < n; i++)
		printf("%2d", v[i]);

	printf("\n");
}


int main(){

	int v[100], n, x;

	transform(v, n, x);

	return 0;
}