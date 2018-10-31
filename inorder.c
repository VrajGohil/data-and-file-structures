#include<stdio.h>
#include<stdlib.h>
#define MAX 10

void push(int stack[],int val, int *top)
{


    if(*top==MAX-1)
    {
        printf("\nStack is full!!\n");
    }
    else
    {

        *top=*top+1;
        stack[*top]=val;
    }
}

int pop(int stack[], int *top)
{   int val;
    if(*top==-1)
    {
        printf("\nStack is empty!!");
    }
    else
    {   val=stack[*top];
        *top=*top-1;
    }
    return val;
}


int delete(int s1[],int s2[], int ts1, int ts2)
{	int x;
	if(ts1!=-1 && ts2!=-1)
	{
	printf("Queue is empty\n");
	
	}
	
	else
	while(ts1!=-1)
	{
		x=pop(s1,&ts1);
		push(s2,x,&ts2);
		
	
	}
	x=pop(s2,&ts2);
	return x;
}
void display(int s2[],int ts2)
{	 {
        	
    }
        
}

int main()
{
    int ch,val;
    int s1[MAX],s2[MAX];
    int ts1=-1,ts2=-1;
    while(ch!=4)
    {
        printf("Press 1.--->For Adding an Element \nPress 2.--->To delete element\nPress 3.--->To display\nPress 4.--->To exit\n");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                printf("\nEnter element to insert:");
                scanf("%d",&val);
                push(s1,val,&ts1);
                break;
            case 2:
            	
                val=delete(s1,s2, ts1, ts2);
                printf("\nDeleted elememt is:%d",val);
                break;
            case 3: 
            		while(ts2!=-1);
            		
            		break;

            case 4: break;

            default: printf("\nWrong Choice\n!!");
        }
    }
    
  
}

