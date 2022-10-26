#include<stdio.h>

int prod(int v[], int n, int p){

	if(n >= 0){

		if(v[n] % 2 == 0){
			//printf("%d\n", p);
			p = p * v[n];
			//printf("%d\n", p);
		}
		prod(v, n-1, p);
	}
	else
		return p;
}

int main(){

	int i, v[100], p = 1;

	for(i = 0; i < 3; i ++)
		scanf("%d", &v[i]);

	printf("%d\n", prod(v, 2, p));

	return 0;
}