#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};
struct node *head = NULL;
void insert(int value) {
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = value;
    new_node->next = head;
    head = new_node;
}
if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    new-node->next = head;
    new_node->data = value;
    head = new_node;
    