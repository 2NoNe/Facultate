#include <stdio.h>
#include <stdlib.h>

int main(){

	int x[4], i, n= 0, sum, m,p;

	for(i=0; i<4; i++){
		scanf("%d ", &x[i]);
		printf("x[%d] = %d\n",i, x[i]);
		n= i;
		if(x[i] == 0){
			break;
		}
	}
	printf("%d\n", n); // intrebare
	sum = 0;

	for(i=0; i<=4; i++){
		while(x[i] > 0){
			m = x[i] % 10;
			sum = sum + m;
			x[i] = x[i] / 10;
		}
		if(x[i+1] = x[i] % sum)
			printf("(%d, %d)\n",x[i], x[i+1]);
	}
	return 0;

}