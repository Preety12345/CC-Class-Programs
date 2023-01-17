#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 6
int queue[MAX];
int front=0;
int rear=0;
void insert();
void delete();
void display();
int menu()
{
    int ch;
        printf("\n Queue operations using array:--");
        printf("\n 1.Insert");
        printf("\n 2.Delete");
        printf("\n 3.Display");
        printf("\n 4.Quit");
        printf("\n----------------");
        printf("\n Enter your choice : ");
        scanf("%d", &ch);
        return ch;
}
void display()
{
    int i;
    if(queue[front] == 0)
    {
    printf("\n Queue is empty");
    return;
    }
    else
    {
        printf("\n Elements in the queue are:");
        for(i=front; i<rear; i++)
        {
            printf("\t %d",queue[i]);
        }
    }
}
void insert()
{
    int data;
    if(rear == MAX)
    {
        printf("\n Queue overflow");
        return;
    }
    else 
    {
        printf("\n Enter data:");
        scanf("%d", &data);
        queue[rear]=data;
        rear=rear+1;
        printf("\n Data is pushed into the queue");
    }
}
void delete()
{
    if(queue[front]==0 || front==rear)
    {
        printf("\n Queue is underflow");
        return;
    }
    else
    {
        printf("\n deleted element is: %d",queue[front]);
        front=front+1;
    }
}
void main()
{
    int ch;
    do
    {
        ch=menu();
        switch(ch)
        {
            case 1:insert();
            break;
            case 2:delete();
            break;
            case 3:display();
            break;
            case 4:exit(0);
            break;
        }
    } while (1);
    
}