#include <stdio.h>

int main(){

	int m, n, p, q,i, j,a , b, k;
	int A[100][100] ,B[100][100] ,C[100][100];

	scanf("%d %d", &n, &m);
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){

			scanf("%d", &A[i][j]);
		}
	}

	scanf("%d %d", &p, &q);
	for(a=0; a<p; a++){
		for(b=0; b<q; b++){

			scanf("%d", &B[a][b]);
		}
	}

	if( m != p){
		printf("imposibil\n");
		return 0;
	}

	for(i=0; i<n; i++){
		for(j=0; j<q; j++){
			C[i][j] = 0;
		}
	}

	for(i=0; i<n; i++){
		for(j=0; j<q; j++){
			for(b=0; b<m; b++){

				C[i][j] += A[i][k]*B[k][j];

			}
		}
	}

	printf("%d %d\n",n, q);

	for(i=0; i<n; i++){
		for(j=0; j<q; j++){
			
			printf("%d", C[i][j]);
		}
		printf("\n");
	}
}