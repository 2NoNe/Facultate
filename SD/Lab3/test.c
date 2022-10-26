#include <stdio.h>
#include <stdlib.h>
typedef int T; // orice tip numeric

typedef struct nod {
	T val; // camp de date
	struct nod *leg; // camp de legatura
} Nod;

typedef Nod* List;
// pentru a permite redefinirea tipului "List"

int main () {
	List lst;
	int x;
	Nod* nou; // nou=adresa element nou
	lst = NULL; // initializare lista vida
	
	printf("Introduceti valoarea elementului din lista = ");
	while (scanf("%d", &x) > 0) {
	
		nou = (Nod*) malloc(sizeof(Nod));
		// se aloca memorie
		nou->val = x;
		nou->leg = lst;
		lst = nou; // noul element este primul
		printf("Introduceti valoarea elementului din lista = ");
	}
while (lst != NULL) {
	// se afiseaza lista
	printf("%d\n", lst->val);
	// in ordine inversa celei de adaugare
	lst = lst->leg;
}
}	