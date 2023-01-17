#include<stdio.h>
#include<conio.h>
#include<string.h>
void push(char);
char pop();
void display();
int isoperand(char);

char s[25];
int top=-1;
char ch;

void main()
{
    char postfix[25];
    char ele;
    int i,j;
    printf("\n Enter postfix expression:");
    scanf("%s",postfix);
    
    i=0;
    while(i<strlen(postfix))
    {
        ele=postfix[i];
        if(isoperand(ele))
        {
            push(ele);
            push(' ');
            printf("\n ele=%c Push to Stack S",ele);
        }
        else
        {
            printf("\n operator=%c",ele);
            for(j=top=-1; j>=0; j--)
            {
                if(s[j]==' ')
                {
                    s[j]=ele;
                    break;
                }
            }
        }
        display();
        printf("\n-----------------------");
        i++;
    }
    printf("\n Postfix expression=%s",postfix);
    printf("\n infix expression= %s",s);
}
int isoperand(char ele)
{
    if((ele>='A'&&ele<='Z')|| (ele>='a' && ele<='z'))
    return 1;
    else 
    return 0;
}
void push(char ele)
{
    if(top==24)
        printf("\n Stack is Full");
    else
    {
        top++;
        s[top]=ele;
    }
}
char pop()
{
    if(top==-1)
        printf("\n stack is Empty");
    else
    {
        ch=s[top];
        top--;
    }
    return ch;
}
void display()
{
    int i;
    for(i=0; i<=top; i++)
        printf("\n s[%d]=%c", i,s[i]);
        
}
