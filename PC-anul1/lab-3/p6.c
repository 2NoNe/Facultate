#include <stdio.h>

int fact(int a){

	int f=1, i;
	if(a == 0)
		return 1;
	else{
		for(i=1; i<= a; i++)
			f = f*i;
	}
	return f;
}

int main(){

	int n, m ,nCm;

	scanf("%d %d", &n, &m);
	
	nCm = fact(n) /(fact(m)*fact(n-m));

	printf("%d\n", nCm);	
}