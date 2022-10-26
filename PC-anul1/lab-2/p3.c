#include <stdio.h>
#include <math.h>

int main(){

	double x, PI = M_PI;

	printf("¦·······x¦··sin(x)¦··cos(x)¦\n");
	printf("¦==========================¦\n");

	for(x=0; x<2*PI; x= x+PI / 20){

		printf("¦%+8.3lf¦%+8.3lf¦%+8.3lf¦",x, sin(x), cos(x));
		printf("\n");
	}
	//getchar();

	return 0;
}
