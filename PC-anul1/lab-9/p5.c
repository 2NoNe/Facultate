#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct complex{

	float re;
	float im;

}complex;

complex adunare(complex a, complex b){

	complex c;

	c.re = a.re + b.re;
	c.im = a.im + b.im;

	return c;
}

complex scadere(complex a, complex b){

	complex c;

	c.re = a.re - b.re;
	c.im = a.im - b.im;

	return c; 
}

complex inmultire(complex a, complex b){

	complex c;

	c.re = a.re * b.re - a.im * b.im;
	c.im = a.re * b.im + a.im * b.re;

	return c;
}

complex putere(complex a, int putere){

	int r;
	complex c;

	r = sqrt(a.re * a.re + a.im * a.im);

	c.re = pow(r, putere) * acos((a.re / r)*putere);
	c.im = pow(r, putere) * asin((a.im / r)*putere);

	return c;
}

void scrie(complex a){

	printf("re = %f, im = %f\n", a.re, a.im);

}


int main()
{
	complex nr1, nr2, sum, scad, inm, put;
	nr1.re = 2;
	nr1.im = 5;
	nr2.re = 1;
	nr2.im = -6;

	sum = adunare(nr1, nr2);
	scrie(sum);

	scad = scadere(nr1, nr2);
	scrie(scad);

	inm = inmultire(nr1, nr2);
	scrie(inm);

	put = putere(nr1, 2);
	scrie(put);

	return 0;
}