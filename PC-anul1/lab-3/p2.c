#include <stdio.h>

int main (){

	int m, n, i;

	scanf("%d %d", &n, &m);

	for(i=1; i<= n; i++ ){
		printf("%3d", i);
		if(i % m == 0){
			printf("\n");
		}
		if(i % 24 == 0){
			printf("\n");
		}
	}
	printf("\n");

	return 0;
}