#include <stdio.h>

int elimina_cifra(int n, int c){
	//printf("%d\n", n);

	if(n > 0){

		if(n % 10 > c){
			printf("%d", n%10);
		}
		elimina_cifra(n/10, c);

	}
	else
		return 0;
}

int main(){

	int n, c;

	scanf("%d", &n);
	scanf("%d", &c);

	elimina_cifra(n, c);
	printf("\n");

	return 0;
}