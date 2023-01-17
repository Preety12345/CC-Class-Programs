#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void push(struct Node **head_ref, int new_data)
{
    struct Node *new_node=(struct Node*)malloc(sizeof(struct Node));
    new_node->data=new_data;
    new_node->next=(*head_ref);
    (*head_ref)=new_node;    
    
}
//  TO DELETE A NODE FROM THE FRONT

void deleteFront(struct Node **head_ref)
{
    struct Node *p=*head_ref;
    *head_ref=(*head_ref)->next;
    free(p);   
}
// TO DELETE A NODE FROM THE MIDDLE

void deleteMiddle(struct Node **head_ref)
{
    struct Node *p=*head_ref;
    struct Node *q=(*head_ref)->next;
    while(p->next!=q)
    {
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
}
// TO DELETE A NODE FROM THE LAST POSITION

void deleteLast(struct Node **head_ref)
{
    struct Node *p=*head_ref;
    struct Node *q=(*head_ref)->next;
    while(q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);

}
void printList(struct Node *n)
{
    while(n!=NULL)
    {
        printf("%5d", n->data);
        n=n->next;
    }
}
int main()
{
struct Node *head=NULL;
push(&head,7);
push(&head,5);
push(&head,3);
push(&head,4);
//push(&head,1);
//push(&head,9);
printf("\n Created Linked list is:--");
printList(head);
//deleteFront(&head);
//printf("\n-----------------------------------------------------------");
//printf("\n After deleting element from the Front, the Linked list is:--");
//printList(head);
deleteMiddle(&head->next);
printf("\n-----------------------------------------------------------");
printf("\n After deleting element from Middle, the Linked list is:--");
//printList(head);
//deleteLast(&head);
//printf("\n-----------------------------------------------------------");
//printf("\n After deleting element from Last, the Linked list is:--");
printList(head);
return 0;
}