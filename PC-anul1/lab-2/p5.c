#include <stdio.h>

int main(){

	int a,b,c;

	scanf("%d %d %d",&a ,&b, &c);

	if(a + b + c != 0){
		if( ((a + b) >= c && (a + c) >= b) && (b + c) >= a)
			printf("DA\n");
		else
			printf("NU\n");
	}
	else 
		printf("NU\n");

	return 0;
}