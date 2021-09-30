#include <stdio.h>

int main(){

	char ch;
	int i;

	ch= 33;

	for(i = 1; i < 95; i++){
		printf("%c = %d   ", ch, ch);
		ch ++;
		if(i % 10 == 0){
			printf("\n");
		}
	}

	return 0;
}
