#include <stdio.h>

int main(){

	int a, b, c, d;
	int min, max;

	min=0;
	max=0;

	scanf("%d %d %d %d", &a, &b, &c, &d);

	if(a>b && a>c && a>d)
		max=a;
	else
		if(b>a && b>c && b> d)
			max = b;
		else
			if(c>a && c> b && c>d)
				max =c;
			else
				if(d>a && d>b && d>c)
					max = d;

	if(a<b && a<c && a<d)
		min =a;
	else
		if(b<a && b<c && b<d)
			min = b;
		else
			if(c<a && c<b && c<d)
				min = c;
			else
				if(d<a && d<b && d<c)
					min = d;

	printf("%d %d\n",min, max );

	return 0;
}