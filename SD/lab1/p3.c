#include <stdio.h>
#include <string.h>

int nr_consoane(char *s, int n, int con){

	if(n >= 0){

		if(s[n]==' '||s[n]=='a'|| s[n]=='e'||s[n]=='i'||s[n]=='o'||s[n]=='u'||s[n]=='A'||s[n]=='E'||s[n]=='I'||s[n]=='O' ||s[n]=='U')
			{
			//printf("11111\n");
			nr_consoane(s,n-1,con);}
		else{

			//printf("22222222222\n");
			con ++;
			//printf("%d\n", con);
			nr_consoane(s,n-1,con);
		}		
	}
	else
		return con;
}

int main(){

	char s[50];
	int n, con = 0;

	scanf("%[^\n]", s);
	n = strlen(s);
	//printf("%s\n", s);
	printf("%d\n", nr_consoane(s, n-1, con));

	return 0;
}