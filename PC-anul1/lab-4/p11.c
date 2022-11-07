#include <stdio.h>
#include <math.h>

int main(){

	double x, sum = 0;
	int n, a[50], i, c;

	scanf("%lf %d", &x, &n);

	for(i=0; i<=n; i++)
		scanf("%d", &a[i]);

	c = n;

	for(i=0; i<=n; i++){
		sum += a[i]*pow(x,c);
		c --;
	}

	printf("%.2lf\n", sum);
	return 0;
}