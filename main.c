#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int data;
  struct Node *next;
} Node;

Node *del_ad(Node *a, Node *c) {
  Node *temp = (Node *)malloc(sizeof(Node));
  temp = a->next;
  a->next = temp->next; // b ㄲㅈ

  c->next = temp; // b너 c뒤에 ㄱㄱ
  temp->next = NULL;
}

int main() {
  Node *head = (Node *)malloc(sizeof(Node));
  Node *a = (Node *)malloc(sizeof(Node));
  Node *b = (Node *)malloc(sizeof(Node));
  Node *c = (Node *)malloc(sizeof(Node));

  a->data = 10;
  b->data = 20;
  c->data = 30;

  head->next = a;
  a->next = b;
  b->next = c;
  c->next = NULL;

  del_ad(head, c);

  while (b != NULL) {
    printf("%d\n", b->data);
    b = b->next;
  }
}
