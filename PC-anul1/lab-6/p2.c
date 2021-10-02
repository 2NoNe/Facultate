#include <stdio.h>
#include <math.h>

void unghi(float a[3],float b[3]){

	double pi = M_PI;
	int i;
	float s1 = 0, semi, aria, r; 

	for(i=0; i<3; i++){
		scanf("%f", &a[i]);
	}

	for(i=0; i<3; i++){

		s1 += a[i];
	}
	semi = s1/2;

	aria = sqrt(semi*(semi-a[0])*(semi-a[1])*(semi-a[2]));

	r = ( a[0]* a[1] *a[2] )/(4*aria);

	b[0] = (180 / pi) * asin(a[0] / (2 * r));
	b[1] = (180 / pi) * asin(a[1] / (2 * r));
	b[2] = (180 / pi) * asin(a[2] / (2 * r));

	for(i=0; i<3; i++){
		printf("%.3f ", b[i]);
	}
	printf("\n");
}

int main(){

	float a[3], b[3];

	unghi(a, b);

	return 0;
}