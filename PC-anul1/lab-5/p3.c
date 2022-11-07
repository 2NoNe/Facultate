#include <stdio.h>

int prim(int n){

	int i;

	if(n == 0)
		return 0;

	if(n == 1)
		return 1;

	for(i=2 ; i <= n/2 ; i++){

		if(n % i == 0)
			return 0;
	}

	return 1;
}

int main(){

	int n, i, j = 0 ,k , v[50];

	scanf("%d", &n);

	for(i = 1; i < n; i++){

		if( prim(i) == 1 ){
			v[j] = i;
			j++;
		}

	}

/*	for(i = 0; i < j; i++)
		printf("v[%d] =%2d ",i, v[i]);
*/
	printf("\n");

	for(i =0; i < j; i++){

		for(k = i+1; k < j; k++){

			if(v[k] + v[i] == n)
				printf("%d + %d\n", v[i], v[k]);
		}
	}
		

	return 0;
}