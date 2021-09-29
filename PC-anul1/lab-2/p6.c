#include <stdio.h>
#include <stdlib.h>

int main(){

	float a, b, c;

	scanf("%f %f %f", &a, &b, &c);

	if(a + b + c != 0){
		if(a == b && b == c && a == c)
			printf("echilateral\n");
		else{
			if((a == b || b == c || a == c) && (abs(a*a - (b*b+c*c)) < 0.001 || abs(b*b -(a*a+c*c)) < 0.001 || abs(c*c-(b*b+a*a)) < 0.001))
				printf("dreptunghic isoscel\n");
			else{
				if(abs(a*a - (b*b+c*c)) < 0.001 || abs(b*b -(a*a+c*c)) < 0.001 || abs(c*c-(b*b+a*a)) < 0.001)
					printf("dreptunghic\n");
				else{
					if(a == b || b == c || a == c)
						printf("isoscel\n");
					else{
						if(a != b && a != c && b != c)
							printf("oarecare\n");
					}
				}
			}
		}	
		
	}
	else
		printf("NU este triunghi\n");
}