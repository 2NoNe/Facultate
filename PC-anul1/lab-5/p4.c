#include <stdio.h>

int cmmdc(int a, int b){
	
	while(a !=b){
		if(a > b)
			a=a-b;
		else
			b=b-a;
	}
	return a;

}

int cmmmc(int a, int b){

	int c;

	c = (a*b) / cmmdc(a,b);

	return c;
}

int main(){

	int x1 ,y1, x2, y2, p;
	int a , b, c, d;

	scanf("%d %d", &x1, &y1);
	scanf("%d %d", &x2, &y2);

	p = cmmmc(y1, y2);

	a = x1*(p/y1);
	b = y1*(p/ y1);
	c = x2*(p/y2);
	d = y2*(p/y2);

	printf("%d %d\n",a, b);
	printf("%d %d\n",c, d);

	return 0;

}