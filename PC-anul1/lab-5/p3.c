#include <stdio.h>

int prim(int n){

	int i;

	if(n == 1)
		return 1;

	for(i=2 ; i <= n/2 ; i++)

		if(n % i == 0)
			return 0;
		else
			return 1;
}

int main(){

	int n, i, j, k = 0, p = 0 ,x[50];

	scanf("%d", &n);
	
	for(j=1;j<=n; j++){

		k= prim (j);
		printf("nr %d este %d\n", j, k );	

		if(prim(j) == 1){
			x[k] = j; // dc nu imi ia valorile?
			k++;
			printf("%3d", x[k]);	
		}

	}

	for(i = 2; i<= n;i++){

		if( prim(i) == 1){

			if(x[p] + i == n){
				printf("%d + %d\n", x[p], i);
				p++;
			}
		}
	}		

	return 0;
}