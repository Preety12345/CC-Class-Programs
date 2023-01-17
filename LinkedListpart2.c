//    HOW TO ADD NODE AT THE BEGINNG OF A LINKED LIST

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
puts("Created LInked list:--");
printList(head);
return 0;
}

