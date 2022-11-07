#include <stdio.h>

int main(){
	
	int n, i;
	float x, sx = 0;
	double y, sy = 0;

	scanf("%d %f %lf", &n, &x, &y);

	for(i = 1; i <= n; i++){

		sx += x;
		sy += y;

		if(i % (n/10) == 0){

			printf("%f %e %f %e\n", sx, sx, sy, sy);
		}
	}
}