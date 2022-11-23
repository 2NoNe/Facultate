#include <stdio.h>
#include <string.h>

char *next(char *from, char *word){

	int j=0;

	for(int i=0; i<strlen(from); i++){

		if((96<(int)from[i] && (int)from[i]<123) || from[i] == ' '){
			word[j]=from[i];
			j++;
		}
	}

	return word;
}

int main(){

	char from[100], word[100];

	scanf("%[^\n]", from);

	//next(from,word);

	printf("%s\n", next(from,word));

	return 0;
}