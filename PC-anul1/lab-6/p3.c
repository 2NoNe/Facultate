#include <stdio.h>

void extragere(int a[100],int b[100],int *c,int n,int m){

	int i, j, k = 0;

	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
				
			if(a[i] == b[j]){

				c[k] = b[j];
				//printf("c[%d] = %d\n",k ,c[k]);
				k++;
			}
		}
	}
	
	printf("\n");
	printf("%d\n", k);

	for(i=0; i<k; i++){
		printf("%d ", c[i]);
	}
	printf("\n");
}

int main(){

	int a[100],b[100],c[100],m,n,i,j;

	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	scanf("%d", &m);
	for(j=0; j<m; j++){
		scanf("%d", &b[j]);
	}

	extragere(a,b,c,n,m);

	return 0;
}