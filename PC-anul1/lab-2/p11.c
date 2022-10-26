#include <stdio.h>
#include <math.h>

int main(){

	float a, b, c, d, x1, x2, x;

	scanf("%f %f %f", &a, &b, &c);

	d = b*b - 4*a*c;

	if(d < 0 || a == 0)
		printf("Nu exista solutii\n");
	else{
		if(d == 0){
			x = (-b)/(2*a);
			printf("%.2f\n", x);
		}
		else{
			if(d > 0){
				x1 = ((-b) - sqrt(d))/(2*a);
				x2 = ((-b) + sqrt(d))/(2*a);

				if(x1 > x2)
					printf("%.2f %.2f\n", x2, x1);
				else
					printf("%.2f %.2f\n", x1, x2);
			}
		}

	}

	return 0;
}