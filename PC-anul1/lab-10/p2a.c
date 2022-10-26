#include <stdio.h>

struct multime{

	unsigned char a;
};

void init(struct multime *m){

	m->a = 1;
}

void add(struct multime *m, int x){

	m->a << 2;
	printf("%d\n", m->a);
}

void del(struct multime *m, int x){

	m->a & !(2 ^ x);
}

void print(struct multime *m){

	printf("%d\n", m->a);
}

int contains(struct multime *m, int x){

	int a[8], j = 0, i, b[8], n;

	n = m->a;
	for(i = 0; i < 8; i++){

		a[i] = n % 2;
		n /= 2;
	}

	for(i = 7; i >= 0; i++){
		b[j] = a[i];
		j++;
	}

	for(i = 0;i < 8; i++){

		if(b[i] == 1 && i == x)
			return 1;
		else
			return 0;
	}

}

int main(){

	struct multime m;
	int x;
	
	scanf("%d", &x);

	init(&m);
	add(&m, x);
	print(&m);
}