#include <stdio.h>

double pol(double x, int n, int k, int v[]){

	if(k == 0)
		return v[k];
	else
		return x*pol(x,n,k-1,v)+v[k];
}
int main(){

	double x;
	int n, a[50], i, c;

	scanf("%lf %d", &x, &n);

	for(i=0; i<=n; i++)
		scanf("%d", &a[i]);

	printf("%.2lf\n", pol(x,n,n,a));	
	return 0;
}