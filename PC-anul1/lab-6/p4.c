#include <stdio.h>
#include <string.h>

int compara(char *a,char *b){

	int i, j = 0;
	int length;

	printf("\n");

	
	if(strlen(a) > strlen(b))

		length =strlen(a);
	else
		length = strlen(b);

	
	for(i = 0; i < length ; i++){

		if( (int)a[i] == (int)b[j] ){

			j++;
			continue;
		}

		if( (int)a[i] > (int)b[j] )
			
			return 1;
		else

			return -1;

	}

	return 0;

}

int main(){

	char a[10], b[10];

	scanf("%s", a);
	scanf("%s", b);


	printf("%d\n", compara(a,b));


	return 0;
}