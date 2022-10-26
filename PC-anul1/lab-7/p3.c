#include <stdio.h>
#include <string.h>

char *strdel (char *p, int n){

	int i;
	char c[100];

	strcpy(c, p + n);
	
	//printf("%s\n", c);

	strcpy(p,c);

	//printf("%s\n", p);

	return p;
}

char *strins(char *p, char *s){

	strcat(s,p);

	return s;
}

char *inlocuire(char *prop,char *caut, char *inloc){

	int i, j = 0;
	for(i = 0; i < strlen(prop); i++){
		
	}
}

int main(){

	int i;
	char s[50], r[50], z[50];
	char *p, *c;

	//p = strdel(s);

	fgets(s,50,stdin);
	
	fgets(r,50,stdin);
	
	fgets(z,50,stdin);

	//s = strdel(s + 3, 7);
	p = strdel(s + 2, 2);
	c = strins(p,r);
	//for(i=0 ; s[i] != '\0'; i++)
	printf("%s\n", c);

	return 0;

}