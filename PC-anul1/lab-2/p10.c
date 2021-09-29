#include <stdio.h>

int main (){

	int H, M, S;
	int d;
	if(scanf("%d %d %d", &H, &M, &S) < 3)
		//printf("%d\n", d);
		printf("Date incorect introduse!\n");
	else
		printf("%02d:%02d:%02d\n", H, M, S);

	return 0;
}