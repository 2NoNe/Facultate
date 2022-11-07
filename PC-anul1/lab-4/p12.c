#include <stdio.h>

int main(){

	int v[100], n, m, a[100][100], i, j, k;

	scanf("%d %d", &n, &m);

	for(i=0; i<m; i++)
		for(j=0; j<3; j++)
			scanf("%d", &a[i][j]);

	for(i=0; i<n; i++)
		v[i] = 0;

	for(i=0; i<m; i++){
		
		j = 0;	
		k = 0;
		while(k<n){

			if(a[i][j]<= k && k <= a[i][j+1])
				v[k] += a[i][j+2];
			k++;
		}
	}
	
	printf("\n");
	for(i=0; i<n; i++)
		printf("%d ", v[i]);

	printf("\n");
	return 0;
}