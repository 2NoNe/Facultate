#include <stdio.h>

int main(){

	int p, i, j, k;
	int min, mid, max;

	min = i;
	mid = j;
	max = k;
	scanf("%d", &p);

	for(i=0; i<=p ; i++){
		for(j=0; j<=p ; j++){

			k = p- i -j;

			if(i+j >= k && i+k>= j && k+j >= i){
				
				min = i;
				mid = j; //sa nu mai afisez de 2 ori
				max = k;

				if(min > mid){
					mid = i;
					min = j;
				}
				if(mid > max){
					max = mid;
					mid = k;
				}
				if(min > mid){
					mid = min;
					min = k;
				}
				printf("%d %d %d\n",min, mid, max);
			}
		}
	}

	return 0;
}