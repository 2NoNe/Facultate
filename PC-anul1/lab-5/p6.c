#include <stdio.h>
#include <math.h>

float dist(int x1, int y1, int x2, int y2){

	float d;

	d = sqrt( ((x2 - x1)*(x2 - x1)) + ((y2 - y1)*(y2 - y1)) );

	return d;
}

int main(){

	int  i, n, x[50], y[50],retine[1000], j, k = 0, l=0;
	float z[50], max;

	scanf("%d", &n);

	for(i = 0; i < n; i++)
		scanf("%d %d", &x[i], &y[i]);

	// for(i = 0; i < n; i ++)  
	// 	printf("%2d", x[i]);

	// printf("\n");
	// for(i = 0; i < n; i ++) 
	// 	printf("%2d", y[i]);
	
	// printf("\n");

	for(i = 0; i < n; i++){

		for(j = i+1; j < n; j++){

			z[k] = dist(x[i],y[i],x[j],y[j]);  
			k++;
			retine[l] = x[i]; 
			l++;
			retine[l] = y[i];
			l++;
			retine[l] = x[j];
			l++;
			retine[l] = y[j]; 
			l++;
		}

	}
	// printf("%d\n", l);
	// for(i = 0;i < k; i++)
	// 	printf("%f\n", z[i]);

	// for(i = 0; i < l; i++)
	// 	printf("%d ", retine[i]);

	max = z[0];

	for(i = 0 ; i < k; i++ ){

		if(z[i] >= max)
			max = z[i];
	}

	printf("\n");

	for( i = 0; i < k; i++ ){

		if(z[i] == max){

			for(j=4*i; j<4*i+3; j=j+2)
				printf("%d %d\n", retine[j], retine[j+1]);

			printf("%f\n", z[i]);
			//return 0;
			printf("\n");
		}
	}


	return 0;
	
}