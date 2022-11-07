#include <stdio.h>
#include <stdlib.h>
int main(){

	float x[100];
	int n, m, a[1000], i, j, c=0, v, r[999], z=0;

	scanf("%d", &n);

	for(i=0; i<n; i++)
		scanf("%f", &x[i]);

	scanf("\n");

	scanf("%d", &m);

	for(i=0; i<m; i++)
		scanf("%d", &a[i]);

	for(i=0; i<m-1; i++){
		if(a[i] < a[i+1])
			c++;
	}

	if(c == m-1)
		printf("\n");
	else{
		printf("ERROR\n");
		return 0;
	}

	for(i=0; i<m-1; i++){
		v = 0;
		for(j=0; j<n; j++){

			if(a[i]<x[j] && x[j]<a[i+1]){
				//printf("%f\n", x[j]);
				v++;
			}	
		}
		r[z] = v;
		z++;
	}

	for(i=0; i<z; i++)
		printf("%d ", r[i]);

	printf("\n");
	return 0;

}