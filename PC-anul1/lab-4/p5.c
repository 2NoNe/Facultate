#include <stdio.h>

int main(){

	int i, j, k, n1, n2,n3 = 0 , a[1000], b[1000], c[1000];

	scanf("%d", &n1);

	for(i=0; i<n1; i++)
		scanf("%d", &a[i]);

	scanf("%d", &n2);

	for(j=0; j<n2; j++)
		scanf("%d", &b[j]);
	
	for(k = 0; k < n1 + n2; k++)
		c[k] = 0;

	i = 0;
	j = 0;
	k = 0;

	while(i < n1 && j < n2){


		//if(i = n1);


		if(a[i] <= b[j] ){

			c[k] += a[i];
			k++;
			i++;
		}
		else{

			c[k] += b[j];
			k++;
			j++;
		}
	}
	printf("i = %d j = %d k = %d\n", i, j, k );
	if (n1 < n2){
		for(k = i + j  ; k < n2 + n1; k++)
	
			c[k] += b[j++];
			j++;
		
	}
	else{

		for(k = i + j ; k < n2 + n1;k ++)
			c[k] += a[i++];
			i++;
	}
	for (k = 0;k < n1 + n2; k++)
		printf("%3d", c[k]);

	printf("\n");
	return 0;
}