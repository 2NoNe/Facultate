#include <stdio.h>

int main(){

	int n, v[100], i, neg = 0, poz = 0;

	scanf("%d", &n);

	for(i=0; i<n ; i++)
		scanf("%d", &v[i]);

	for (i = 0; i < n; i++)
	{
		if(v[i] < 0)
			neg ++;
		if(v[i] >= 0)
			poz ++;
	}

	printf("%d %d\n", neg, poz );

	return 0;
}