#include <stdio.h>

void verific(int x[],int y[],int n,int m){

	int i, j, a[50];

	for(j = 0;j < m;j ++){
		for(i = 0;i < n;i ++){

			if(y[j] == x[i])
				break;
		}
		if(i == n)
			a[j] = 0;
		else
			a[j] = 1;
	}

	for(j = 0;j < m;j ++){

		printf("%d ", a[j]);
	}
	printf("\n");
}

int main(){

	int x[50],y[50],n,m,i,j;

	scanf("%d", &n);
	for(i = 0;i < n;i ++){

		scanf("%d", &x[i]);
	}

	scanf("%d", &m);
	for(j = 0;j < m;j ++){

		scanf("%d", &y[j]);
	}

	verific(x,y,n,m);
	return 0;
}