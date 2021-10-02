#include <stdio.h>

void bubble (int a[100], int n){

	int i, j, aux;

	for(i=0; i< n-1; i++){
		for(j=0; j< n-i-1; j++){
			if(a[j] > a[j+1]){
				aux = a[j];
				a[j] = a[j+1];
				a[j+1] = aux;
			}
		}
	}
}

int main(){

	int v[100], i, n;

	scanf("%d", &n);

	for(i=0; i<n; i++)
		scanf("%d", &v[i]);

	bubble(v,n);

	for(i=0; i<n; i++)
		printf("%3d", v[i]);
	printf("\n");

	return 0;
}