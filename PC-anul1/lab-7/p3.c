#include <stdio.h>
#include <string.h>

char *strdel (char *p, int n){

	int i;
	char c[50] = {};

	strcpy(c, p+n);

	strcpy(p,c);
	
	return p;
}

char *strins(char *p, char *s){
	
	strcat(s,p);
	strcpy(p,s);
	
	return p;
}

char *inlocuire(char *prop,char *caut, char *inloc){

	int i, j = 0, k;
  	char *p1, *p2, *p3, aux[50]={};

  	p1 = prop;
  	p2 = caut;

  	for(i = 0; i<strlen(prop); i++)
  	{
    	if(*p1 == *p2)
     	{
        	p3 = p1;
          	for(j = 0;j<strlen(caut);j++)
          	{
            	if(*p3 == *p2)
            	{
              		p3++;
              		p2++;
            	} 
            	else
              		break;
          	}

        	p2 = caut;
        	if(j == strlen(caut))
          	{
          		printf("gasit %d\n", i);
          		// if(i == 0){
          		// 	strdel(prop,strlen(caut));
          		// 	strins(prop,inloc);
          		// 	printf("%s\n", prop);
          		// 	i+=2;
          		// }
          		// else{
          		// 	for(k=0; k<i; k++){
          		// 		aux[k] = prop[k];
          		// 	}
         			// //printf("aux:%s\n", aux);
         			// //strdel(prop+i,strlen(caut));
          		// 	//printf("%s\n", prop);
          		// 	//strins(prop,inloc);
          		// 	//strins(prop, aux);
          		// }
          	}
      	}
    	p1++; 
  	}
  	return prop;
}

int main(){

	int i;
	char s[50], r[50], z[50];
	char *p, *c;

	//p = strdel(s);

	scanf("%[^\n]", s);
	scanf(" %[^\n]", r);
	scanf(" %[^\n]", z);
	
	// printf("%ld\n", strlen(r));
	inlocuire(s,r,z);
	//printf("%s\n", s);
	//printf("%s\n", (char*)strdel(s,strlen(r)));

	return 0;

}