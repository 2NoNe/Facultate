#include <stdio.h>

int cifra(int n, int c){

	while(n){

		if(n%10 == c){
			printf("Da\n");
			break;
		}

		else
			n = n/10;
	}

	return 0;
}

 int main(){

 	int n, c;

 	scanf("%d %d", &n, &c);

 	cifra(n,c);

 	return 0;
 }