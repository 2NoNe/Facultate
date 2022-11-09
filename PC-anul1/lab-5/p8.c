#include <stdio.h>

void arie_intersectie(int x11,int y11,int x12,int y12,int x21,int y21,int x22,int y22){

	int a, b, c, d;
	int x, y, z, t;

	a = x12;b = y11;c = x11;d = y12;
	x = x22;y = y21;z = x21;t = y22;

	// printf("%d %d %d %d\n", a, b, c, d);
	// printf("%d %d %d %d\n", x, y, z, t);
	
}
int main(){

	int a, b, c, d;
	int x, y, z, t;

	scanf("%d %d %d %d", &a,&b, &c, &d);
	scanf("%d %d %d %d", &x, &y, &z, &t);

	//printf("%d\n", arie_intersectie(a,b,c,d));
	arie_intersectie(a,b,c,d,x,y,z,t);
	return 0;	
}