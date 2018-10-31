#include<stdio.h>
#include<stdlib.h>
#define MAX 80 
 
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
 
void push(char val)
{
    int val;
    
    if(top==MAX-1)
    {
        printf("\nStack is full!!\n");
    }
    else
    {
        
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
 
void read(int s[], int top, int i)
{
	if(((top-i)+1)>=0)
		printf("%d\n",s[top-i+1]);
	else
		printf("not found!!!!!");
}


int isoperand(char ch)
{
	if((ch>='a'&&ch<='z') || (ch>='A' && ch<='Z'))
	return 1;
		else
	return 0;
}

int isoperator(char ch)
{
	if(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='-'||ch=='^')
	return 1;
	else return 0;
}

int prec( char ch)
{
	if (ch=='+'||ch=='-')
	return 1;
	else if(ch=='*'||ch=='/')
	return 2;
	else if(ch='^')
	return 3;
	else
	return 0;
}

void infixtopostfix(char infix[],char postfix)
{
	char S[MAX];
	int top=-1;
 	int i,p;
	i=0;
	p=0;
	while(infix[i]!='\0')
	{
		if(isoperand(infix[i]))
		{
		postfix[p]=infix[i];
		p++;i++;
		}
		else if (infix[i]=='(')
		{
		push('(');
		i++;
		}
		else if(infix[i++]==')')
		{
		while(display
		}
	}
}


