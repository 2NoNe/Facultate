#include <stdio.h>

int main (){

	int H, M, S;
	int d = scanf("%d %d %d", &H, &M, &S);
	if(d < 3){
		
		//printf("%d\n", d);
		printf("Date incorect introduse!\n");
	}
	else{
		printf("%d\n", d);
		printf("%02d:%02d:%02d\n", H, M, S);
	}

	return 0;
}