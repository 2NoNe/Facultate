#include <stdio.h>

int compara(char a[10],char b[10]){

	int i, j,n = 0, m = 0;

		scanf("%s", a);

		scanf("%s", b);

	for(i=0; i<10; i++){
		for(j=0; j<10; j++){
			while(a[i] != '\0' || b[j] != '\0'){
			
				if( int a[i] > int b[j]){
					return 1;
				}
				else{
					return -1;
				}
				if(a[i] == b[j])
					return 0;
			}		
		}
	}
	
}

int main(){

	char a[10], b[10];

	printf("%d", compara(a,b));


	return 0;
}