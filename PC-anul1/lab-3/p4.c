#include <stdio.h>
#include <stdlib.h>

int sumac(int n){

	int sum = 0;

	while(n != 0){

		sum += n%10;
		n = n/10;
	}

	return sum;
}

int main(){

	int x[20], i, n= 0, sum, m,p;

	for(i=0; i<20; i++){
		
		scanf("%d", &x[i]);
		//printf("x[%d] = %d\n",n, x[i]);
		
		if(x[i] != 0){
			n ++;
		}
		else{
			//x[i] = 0;
			n++;
			break;
		}
	}
	//printf("%d\n", n);
	sum = 0;
	//for(i=0; i<n; i++){
	//	printf("x[%d] = %d\n",i, x[i]);
	//}

	for(i=1; i<n; i++){
		//printf("%d\n", n);

		if(x[i] == x[i-1] % sumac(x[i-1]) )
			printf("(%d, %d)", x[i], x[i-1]);
		
	}
	return 0;

}