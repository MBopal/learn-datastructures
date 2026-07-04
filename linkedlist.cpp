#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node* next;
};
struct Node* head;  // Initialize head to NULL

void InsertAtBeginning(struct Node** head, int x) {
  struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
  temp->data = x;
  if (*head != NULL) temp->next = *head;
  *head = temp;
}

void InsertAt(int data, int n) {
  Node* temp1 = new Node();
  temp1->data = data;
  temp1->next = NULL;
  if (n == 1) {
    temp1->next = head;
    head = temp1;
    return;
  }
  Node* temp2 = head;
  for (int i = 0; i < n - 2; i++) {
    temp2 = temp2->next;
  }
  temp1->next = temp2->next;
  temp2->next = temp1;
}

void InsertAtEnd(int data) {
  Node* temp = new Node();
  temp->data = data;
  temp->next = NULL;
  if (head == NULL) {
    head = temp;
    return;
  }
  Node* temp1 = head;
  while (temp1->next != NULL) {
    temp1 = temp1->next;
  }
  temp1->next = temp;
}

void Delete(int n) {
  struct Node* temp1 = head;
  if (n == 1) {
    head = temp1->next;  // Change head
    free(temp1);         // free old head
    return;
  }
  for (int i = 0; i < n - 2; i++) {
    temp1 = temp1->next;
  }
  struct Node* temp2 = temp1->next;
  delete temp2;
}

void Print() {
  struct Node* temp = head;
  while (temp != NULL) {
    printf("%d ", temp->data);
    temp = temp->next;
  }
  printf("\n");
}

int main() {
  head = NULL;  // Initialize head to NULL
  int n, i, x;
  InsertAtEnd(2);
  InsertAtEnd(3);
  InsertAtEnd(4);
  InsertAtEnd(5);
  Print();
  printf("Enter the position\n");
  scanf("%d", &n);
  Delete(n);
  Print();
}