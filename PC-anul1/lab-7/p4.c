#include <stdio.h>
#include <string.h>
char* substr(char *src, int n, char *dest){
	
	int j=0;

	for(int i=0; i<n; i++){
		
		dest[j]=src[i];
		j++;
	}

	return dest;
}

int main(){

	char s[100], dest[100], ala[100] = {};
	int n,m;

	scanf("%[^\n]", s);
	scanf("%d %d", &n, &m);

	//printf("%s\n", (char *)substr(s+n, m, dest));
	strcat(ala,(char*)substr(s+n, m, dest)); // de intrebat
	printf("%s\n", dest);
	return 0;
}