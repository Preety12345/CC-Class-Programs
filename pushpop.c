#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 6
int stack[MAX];
int top=0;
int menu()
{
  int ch;
  printf("\n Stack operations using array");
  printf("\n 1.push"); 
  printf("\n 2.pop");
  printf("\n 3.display");
  printf("\n 4.quit");
  printf("\n Enter your choice");
  scanf("%d", &ch);
  return ch;
  }
  void display()
  {
      int i;
      if(top==0)
      {
          printf("\n Stack is empty");
          return;
      }
      else
      {
          printf("\n Elements in the stack are:");
          for(i=0;i<top;i++)
          {
              printf("\t %d",stack[i]);

          }
      }
  }
      void pop()
      {
        if (top==0)
        {
            printf("\n Stack underflow");
            return;
        }
        else
        {
            printf("\n Popped element is %d", stack[--top]);
        }
      }
      void push()
      {
          int data;
          if(top==MAX)
          {
              printf("\n Stack overflow");
              return;
          }
          else
          {
              printf("\n enter data");
              scanf("%d", &data);
              stack[top]=data;
              top=top+1;
              printf("\n data is pushed inside stack");
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
                  case 1:push();
                  break;
                  case 2:pop();
                  break;
                  case 3:display();
                  break;
                  case 4:exit(0);
              }
          }
          while(1);
      }