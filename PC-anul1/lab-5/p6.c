#include <stdio.h>
#include <math.h>

float dist(int x1, int y1, int x2, int y2){

	float d;

	d = sqrt( ((x2 - x1)*(x2 - x1)) + ((y2 - y1)*(y2 - y1)) );

	return d;
}

int main(){

	int  i, n, x[50], y[50],retine[50], j, k = 0, l=0,  max, delimitator;
	float z[50];

	scanf("%d", &n);

	for(i = 0; i < n; i++)
		scanf("%d %d", &x[i], &y[i]);

	for(i = 0; i < n; i ++)  // printez x[i]
		printf("%2d", x[i]);

	printf("\n");

	for(i = 0; i < n; i ++) // printex y[i]
		printf("%2d", y[i]);
	
	printf("\n");

	for(i = 0; i < n; i++){

		for(j = i+1; j < n; j++){

			z[k] = dist(x[i],y[i],x[j],y[j]);  // in z pun distantele
			k++;
			retine[l] = x[i]; l++; //in retine[] vreau sa retin coordonatele
			retine[l] = y[i]; l++; //si sa am ceva de genul
			retine[l] = x[j]; l++; // 0001|0010|...
			retine[l] = y[j]; l++; //si afisez 2 cate 2 in functie de z
		}

	}

	for(i = 0;i < k; i++)
		printf("%f\n", z[i]); //printez distantele

	for(i = 0; i < l; i++)
		printf("%2d", retine[l]); // printez coordonatele

	max = z[0];

	for(i = 0 ; i < k; i++ ){

		if(z[i] >= max)
			max = z[i];
	}

	for( i = 0; i < k; i++ ){

		if( max == z[i]){

			delimitator = 4*i;
			for(j = 4*i;j < 4*(i + 1); j++ ){ //merg din 4 in 4

				printf("%2d", retine[j]); // cand i este 1, j este 4
										 //ajunge la 5 il printeaza pe 5
				if( delimitator == j+1) // 5 = 5 newline
					printf("\n");		// printeaza restul
			}
		}
	}



	//printf("%f\n", di);

	return 0;
	
}