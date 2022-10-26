#include <stdio.h>

void fibo(int n){

	int v[50], i;

	v[0] = 0;
	v[1] = 1;
	v[2] = 1;

	for(i = 3;i < 50;i++)
		v[i] = v[i-1] + v[i-2];
	for(i = 0;i < 10;i++)
		printf("%d ", v[i]);

	for(i = 0; i < 50;i++){

		if(i+1 == n)
			printf("%d\n", v[i]);
	}
}

int main(){

	int n;

	scanf("%d", &n);
	fibo(n);
	return 0;
}