#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    int data;
    struct Node *next;
};

// Function to add a new node to the end of the list
struct Node* addnode(struct Node* head, int data) {
    struct Node *new = (struct Node*)malloc(sizeof(struct Node));
    if (new == NULL) {
        printf("Memory allocation failed!\n");
        return head;
    }
    new->data = data;
    new->next = NULL;

    if (head == NULL) {
        return new; // If list is empty, new node becomes head
    }

    struct Node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = new; // Add new node at the end

    return head;
}
struct Node* delnode(struct Node* head) {
    if (head == NULL) return NULL;
    struct Node *temp = head;
    head = head->next;
    free(temp);
    return head;
}
int main() {
    struct Node* head = NULL;

    // Add nodes and update head
    head = addnode(head, 10);
    head = addnode(head, 20);
    head = addnode(head, 30);
    
    // Print the linked list
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    //del node
    head = delnode(head);
      // Print the linked list
      struct Node* tem = head;
      while (tem != NULL) {
          printf("%d -> ", tem->data);
          tem = tem->next;
      }
      printf("NULL\n");
    return 0;
}
