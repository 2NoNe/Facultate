#include <stdio.h>

void sort(int a[], int n){

	int aux, i, j;
	for(i = 0; i < n; i++){
		for(j = i+1; j < n; j++){

			if(a[i] > a[j]){

				aux = a[i];
				a[i] = a[j];
				a[j] = aux;
			}
		}
	}
}

int main(){

	int a[50], b[50], c[100], m = 5, n = 4, o, i, k;
	o = m + n;

	printf("Array 1-");
	for(i = 0; i < m; i++){
		scanf("%d", &a[i]);
	}

	printf("Array 2-");
	for(i = 0; i < n; i++){
		scanf("%d", &b[i]);
	}
	printf("k=");
	scanf("%d", &k);
	//sort(a,n);
	//sort(b,m);

	int p = m;

	for(i = 0; i < m; i++){
		c[i] = a[i];
	}
	for(int j = 0; j < n; j++){
		c[p] = b[j];
		p++;
	}
	//for(i = 0; i < o; i++)
	//	printf("%d ", c[i]);
	//printf("\n");
	sort(c,o);

	for(i = 0; i < o; i++){

		if(k == i+1)
			printf("%d\n", c[i]);
	}
	return 0;
}