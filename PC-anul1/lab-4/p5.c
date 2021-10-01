#include <stdio.h>

int main(){

	int i, j, k = 0, n1, n2, a[1000], b[1000], c[1000];

	scanf("%d", &n1);
	for(i=0; i<n1; i++)
		scanf("%d", &a[i]);

	scanf("%d", &n2);
	for(j=0; j<n2; j++)
		scanf("%d", &b[j]);
	
	while(i<n1 && j< n2){

		c[k]= a[i];
		k++; i++;
		printf("c[%d] = %d",k, c[k]);
		c[k]= b[j];
		k++; j++;
		printf("c[%d] = %d",k, c[k]);
	}

	while(i < n1){
		c[k] = a[i];
		k++; i++;
	}

	while(j < n2){
		c[k] = b[j];
		k++; j++;
	}

	//for(i=0; i<n1+n2; i++)
	//	printf("%3d", c[i]);

	return 0;
}