/*single linked list*/

#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

// Function to create a new node and return its pointer
struct node *createnote(int data)
{
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        return NULL;
    }
    newNode->data= data;
    newNode->next=NULL;
    return newNode;

};

// Function to insert a node at the end of the linked list
void insertatEnd(struct node **link , int data)
{
    struct node *newnode = createnote(data);
    if (*link==NULL)
    {
        // If the list is empty, the new node becomes the head
        *link = newnode;
        return;
    }

    struct node *temp = *link;
    // Traverse to the last node
    while (temp->next != NULL) {
        temp = temp->next;   //end of list
    }
    // Insert the new node at the end
    temp->next = newnode;

}

// Function to print the linked list (can be called from main or other functions)
void printList(struct node *head) {
    struct node *temp = head;
    if (temp == NULL) {
        printf("The list is empty.\n");
        return;
    }
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    struct node *head = NULL;
    struct node *second = NULL;
    struct node *third = NULL;

    //allocatation
    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));

    struct Node *new = NULL;  // Initially, the linked list is empt

    //assign data
    head->data=1;
    head->next=second;
    second->data=2;
    second->next=third;
    third->data=2;
    third->next=NULL;


      // Insert some elements in the list
      insertatEnd(&new, 10);
      insertatEnd(&new, 20);
      insertatEnd(&new, 30);
      insertatEnd(&new, 40);

    printList(head);
    printList(new);
    free(head);
    free(second);
    free(third);
    return 0;
}