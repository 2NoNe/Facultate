#include <stdio.h>

int main(){

	int c=0, d=0, co=0, n, v[100], i;

	scanf("%d", &n);

	for(i=0; i<n; i++)
		scanf("%d", &v[i]);

	for(i=0; i<n; i++){

		if(v[i] < v[i+1])
			c++;
		
		if(v[i] > v[i+1])
			d++;

		if(v[i] == v[i+1])
			co++;
	}

	if(c == n-1)
		printf("crescator\n");

	if(d == n-1)
		printf("descrescator\n");
	
	if(co == n-1){
		printf("constant\n");
		return 0;
	}

	if(c < n-1 && d < n-1)
		printf("neordonat\n");

	return 0;
}