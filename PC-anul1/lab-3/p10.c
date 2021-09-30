#include <stdio.h>

int main(){

	int i,n,count = 0;

	scanf("%d", &n);
	int x[n];

	for(i=1;i<= n; i++){
		x[i] = i;

		while(x[i] != 0){
			count ++;
			x[i]= x[i]/10;
		}
	}

	printf("%d\n", count);

	return 0;

}