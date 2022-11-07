#include <stdio.h>

int com(int n, int k){

	if(k == 0)
		return 1;
	else
		return com(n,k-1)*(n-k+1)/k;
}

int main(){

int n, m ;

	scanf("%d %d", &n, &m);
	
	printf("%d\n", com(n,m));

	return 0;
}