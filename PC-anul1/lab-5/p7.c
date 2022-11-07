#include <stdio.h>

int transforma(int n){

	int v[100], i, j, m=0, k=0, tmp, nr;
	while(n){

		v[m] = n%10;
		n = n/10;
		m++;
	}

/*	for(i=0; i<m; i++)
		printf("%d ", v[i]);
*/
	for(i=0; i<m; i++){
		if(v[i] == 0)
			k++;
	}

	if(k>0){
		for(i=0; i<m; i++){
			for(j=0; j<m; j++){
				
				if(v[j]<v[i]){
					tmp = v[i];
					v[i] = v[j];
					v[j] = tmp;
				}
			}
		}
		for(i=0; i<m; i++)
			nr = 10*nr + v[i];
	}
	else{
		for(i=0; i<m; i++){
			for(j=0; j<m; j++){
				
				if(v[j]>v[i]){
					tmp = v[i];
					v[i] = v[j];
					v[j] = tmp;
				}
			}
		}
		for(i=0; i<m; i++)
			nr = 10*nr + v[i];
	}

	return nr;
}

int main(){

	int n;

	scanf("%d", &n);

	printf("%d\n", transforma(n));
	
	return 0;
}