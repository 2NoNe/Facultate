#include <stdio.h>

int main(){

	int a, b, c;
	int min, mid, max;

	scanf("%d %d %d", &a, &b, &c);

	min = a;
	mid = b;
	max = c;

	if(min > mid){
		mid = a; 
		min = b;
	}
	if(mid > max){
		max = mid;
		mid = c;
		if(min > mid){
			mid = min;
			min = c;
		}
	}

	printf("%d %d %d\n", min, mid, max );

	return 0;

}