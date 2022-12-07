#include <stdio.h>

int cauta_cutie(int v[], int n){

	int aux, i, j, aux2;

	// for(int i=1; i<=n; i++)
	// 	printf("%d", v[i]);

	for(i=1; i<=n; i++){

		aux = v[i];

		for(j=1; j<=n/2; j++){
			printf("-----%d\n", j);
			if(v[aux] == v[i]){
				printf("Da\n");
				//return 0;
			}
			else{

				aux = v[aux];
				printf("%d\n", aux);
			}
		}
		if(j > n/2){
			printf("Nu\n");
			return 0;
		}
	}
}

int main(){

	int n,v[500];

	scanf("%d", &n);

	for(int i=1; i<=n; i++)
		scanf("%d", &v[i]);

	cauta_cutie(v,n);

	return 0;
}