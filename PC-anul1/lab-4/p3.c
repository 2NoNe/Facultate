#include <stdio.h>

int main(){

	int i, j, n, m, v[100][100], a[100], max, min;

	scanf("%d %d", &n, &m);

	for(i=0; i<n; i++){
		for(j=0; j<m; j++){

			scanf("%d", &v[i][j]);
		}
	}

	for(i=0; i<n; i++){
		max = v[i][0];
		for(j=0; j<m; j++){

			if(max < v[i][j]){
				max = v[i][j];
			}
		}
		
		a[i] = max;
	}

	min = a[0];

	for(i = 0; i<n; i++){
		
		if(min > a[i])
			min = a[i];
	}

	printf("%d\n", min);

	return 0;
}