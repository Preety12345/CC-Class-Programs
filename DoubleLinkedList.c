#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};
void push(struct Node **head_ref, int new_data)
{
    struct Node *new_node=(struct Node*)malloc(sizeof(struct Node));
    new_node->data=new_data;
    new_node->next=(*head_ref);
    new_node->prev=NULL;
    if((*head_ref!=NULL))
        (*head_ref)->prev=new_node;
        (*head_ref)=new_node;
}
void printList(struct Node *node)
{
    struct Node *last;
    printf("\n Traversal in forward direction:");

    while(node!=NULL)
    {
        printf("%5d", node->data);
        last=node;
        node=node->next;
    }
printf("\n Traversal in reverse direction:");
while(last!=NULL)
{
printf("%5d", last->data);
last=last->prev;
}
}
int main()
{
    struct Node *head=NULL;
    push(&head,8);
    push(&head,5);
    push(&head,1);
    push(&head,9);
    printf("\n Created linked list:--");
    printList(head);
    getchar();
    return 0;
}