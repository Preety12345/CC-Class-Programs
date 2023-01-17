//       HOW TO ADD A NODE AT THE END OF A LINKED LIST

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
void insertAfter(struct Node *prev_node, int new_data)
{
    if(prev_node==NULL)
    {
        printf("given previous node cannot be NULL");
        return;
    }
    struct Node *new_node=(struct Node*)malloc(sizeof(struct Node));
    new_node->data=new_data;
    new_node->next=prev_node->next;
    prev_node->next=new_node;   
    
}
void append(struct Node **head_ref, int new_data)
{
    struct Node *new_node=(struct Node*)malloc(sizeof(struct Node));
    struct Node *last=*head_ref;
    new_node->data=new_data;
    new_node->next=NULL;

 if(*head_ref==NULL)
    {
        *head_ref=new_node;
        return;
    }
while(last->next!=NULL)
{
last=last->next;
}
last->next=new_node;
return;

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
    append(&head,6);
    push(&head, 7);
    push(&head,1);
    append(&head,4);
    insertAfter(head->next,8);
    
    printf("\n Created LInked list:--");
    printList(head);
    return 0;
}

