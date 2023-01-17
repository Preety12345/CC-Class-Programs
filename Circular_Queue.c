#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 6
int cqueue[MAX];
int front=0;
int count=0; 
int rear=0;
void insert();
void delete();
void display();
int menu()
{
    int ch;
   
    printf("\n Queue operation using array");
    printf("\n 1.Insert");
    printf("\n 2.Delete");
    printf("\n 3.Display");
    printf("\n 4.Quit");
    printf("\n--------------");
    printf("\n Enter your choice:--");
    scanf("%d", &ch);
    return ch;
} 
void display()
{
    int i,j;
    if(count == 0)
    {
        printf("\n Circular queue is empty");
    }
    else
    {
        printf("\n Elements in the circular queue are:");
        j=count;
        for(i=front; j!=0; j--)
        {
        printf("\t %d", cqueue[i]);
        i=(i+1)%MAX;
        }
    }
}
void insert()
{
    int data;
    if(count == MAX)
    {
        printf("\n Queue is full");
    }
    else
    {
        printf("\n Enter data:--");
        scanf("%d", &data);
        cqueue[rear]=data;
        rear=(rear+1)%MAX;
        count++;
        printf("\n Data is pushed into circular queue");

    }

    
}
void delete()
{
    if(count == 0)
    {
        printf("\n Queue is not full");
    }
    else
    {
        
        printf("\n Deleted element is: %d", cqueue[front]);
        front=(front+1)%MAX;
        count--;


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
            case 4:return;
            default:
            printf("\n Invalid choice");
        }
    } while (1);
}
