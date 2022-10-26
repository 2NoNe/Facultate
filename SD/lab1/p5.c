#include <stdio.h>

int suma(int v[], int min, int max, int sum, int n){

	int i;

	if(n >= 0){

		if(v[n] >= min && v[n] <= max){
			sum += v[n];
			//printf("1111111\n");
			//printf("%d\n", sum);
			suma(v,min,max,sum,n-1);
		}
		else
			//printf("222222222222\n");
			suma(v,min,max,sum,n-1);
	}
	else
		return sum;
} 

int main(){

	int v[50], min = 3, max = 12, n, i,sum = 0;

	scanf("%d", &n);
	for(i = 0; i < n; i++){

		scanf("%d", &v[i]);
	}

	printf("%d\n", suma(v,min,max,sum,n-1));

	return 0;
}