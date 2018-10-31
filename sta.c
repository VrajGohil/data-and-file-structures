#include<stdio.h>
#include<stdlib.h>
#define MAX 5 
 
int top=-1,stack[MAX];
void push();
void pop();
void display();
 
void main()
{
    int ch;
    
    while(1)    
    {
        printf("Press 1.--->For Adding an Element \nPress 2.--->For removing an Element \nPress 3.--->To Read\n4.--->To exit");
        scanf("%d",&ch);
        
        switch(ch)
        {
            case 1: push();
                    break;
            case 2: pop();
                    break;
            case 3: display();
                    break;
            case 4: exit(0);
            
            default: printf("\nWrong Choice\n!!");
        }
    }
}
 
void push()
{
    int val;
    
    if(top==MAX-1)
    {
        printf("\nStack is full!!\n");
    }
    else
    {
        printf("\nEnter element to push:");
        scanf("%d",&val);
        top=top+1;
        stack[top]=val;
    }
}
 
void pop()
{
    if(top==-1)
    {
        printf("\nStack is empty!!");
    }
    else
    {
        printf("\nDeleted element is %d",stack[top]);
        top=top-1;
    }
}
 
void display()
{
    int i;
    
    if(top==-1)
    {
        printf("\nStack is empty!!");
    }
    else
    {
        printf("\nStack is...\n");
        for(i=top;i>=0;--i)
            printf("%d\n",stack[i]);
    }
}
