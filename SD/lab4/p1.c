#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node* next;
};

struct Node* addToEmpty(struct Node* last, int data) {
  if (last != NULL) return last;

  struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

  newNode->data = data;
  last = newNode;
  last->next = last;

  return last;
}

struct Node* addFront(struct Node* last, int data) {

  if (last == NULL) return addToEmpty(last, data);

  struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
  newNode->data = data;
  newNode->next = last->next; //salvez adresa nodului curent in new
  last->next = newNode; //fac noul nod cap de lista

  return last;
}



void traverse(struct Node* last) {
  struct Node* p;

  if (last == NULL) {
  printf("The list is empty");
  return;
  }

  p = last->next;

  do {
  printf("%d->", p->data);
  p = p->next;

  } while (p != last->next);
  p = last->next;
  printf("%d", p->data);

}

int main() {
  struct Node* last = NULL;

  last = addToEmpty(last, 3);
  last = addFront(last, 2);
  last = addFront(last, 1);
  traverse(last);

  printf("\n");

  return 0;
}