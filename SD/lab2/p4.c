#include <stdio.h>

int suma(int v[],int st,int dr){

	if(st == dr)
		return v[st];
	else{

		int m = (st + dr)/2;
		int s1 = suma(v,st,m);
		int s2 = suma(v,m + 1,dr);
		return s1 + s2;
	}
}

int main(){

	int v[50], n;

	scanf("%d", &n);
	for(int i = 0; i < n; i++)
		scanf("%d", &v[i]);

	printf("%d\n", suma(v,0,n-1));

	return 0;
}