#include <stdio.h>

int main(){

	int a[100][100],i ,j, v[100], k = 0, n;

	scanf("%d", &n);

	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++)

			scanf("%d", &a[i][j]);
	}

	for(j = n-1; j >= 0; j-- ){
		for(i = n-1; i >= 0; i-- ){

			if( i + j >= n){

				v[k] = a[i][j];
				k ++;
			}
		}
	}

	for(k = (n*n - n) / 2 - 1; k >= 0; k-- )
		printf("%3d", v[k]);
	
	printf("\n");

	return 0;

}