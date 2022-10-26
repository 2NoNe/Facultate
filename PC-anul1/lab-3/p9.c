#include <stdio.h>

int prime(int n){

	int i;

	for(i=2 ; i <= n/2 ; i++)
 	{
 		if(n % i == 0)
 		{
 			return 0;
 		}
 		else
 		{
 			return 1;
 		}

 	}
}

int main(){

	int n,i;

	scanf("%d", &n);

	int F[n];

	F[0] = 0;
	F[1] = 1;

	for(i = 2; i <= n; i++)
	{
		F[i] = F[i-2] + F[i-1];
		printf("F[%d]= %d\n", i, F[i]);

 	}

 	for(i=0; i<n ; i++){

 		if( prime(F[i]) == 1)
			printf("%d\n", F[i]);
		else 
			continue;
 	}
 	return 0; 

}