#include <stdio.h>
#include <string.h>

char *strdel (char *p, int n){

	int i;
	char c[50] = {};

	strcpy(p+n, c);
	
	return p;
}

char *strins(char *p, char *s){
	
	strcat(s,p);
	strcpy(p,s);
	
	return p;
}

char *inlocuire(char *prop,char *caut, char *inloc){

	int i, j = 0;
	for(i = 0; i < strlen(prop); i++){
		
	}
 
  // 	char *p1, *p2, *p3;
  // 	int i=0,j=0,flag=0;

  // 	p1 = str;
  // 	p2 = sub;

  // 	for(i = 0; i<strlen(str); i++)
  // 	{
  //   	if(*p1 == *p2)
  //    	 {
  //         p3 = p1;
  //         for(j = 0;j<strlen(sub);j++)
  //         {
  //           if(*p3 == *p2)
  //           {
  //             p3++;p2++;
  //           } 
  //           else
  //             break;
  //         }
  //         p2 = sub;
  //         if(j == strlen(sub))
  //         {
  //            flag = 1;
  //           printf("\nSubstring found at index : %d\n",i);
  //         }
  //     }
  //   p1++; 
  // }
  // if(flag==0)
  // {
  //      printf("Substring NOT found");
  // }
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
	// printf("%s\n", s+4+strlen(r));
	printf("%s\n", (char*)strdel(s+6,3));

	return 0;

}