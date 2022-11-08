#include <stdio.h>

int factorial(int n){

	int i, produs = 1;

	for(i=1; i<=n; i++){
		produs *= i;
	}
	return produs;
}

double putere(double x, int n){

	int i;
	double prod = 1;

	for(i=1; i<=n; i++)
		prod *= x;

	return prod;
}

double taylor(double x, int n){

	int i;
	double t = 0;

	for(i=1; i<=n; i++){

		t = t + (putere(x,i)/factorial(i));
		//printf("%f\n", t);
	}
	t = t + 1;
	return t;
}

int main(){

	int n;
	double x;

	scanf("%lf %d", &x, &n);

	printf("%.4f\n", taylor(x, n));

	return 0;
}