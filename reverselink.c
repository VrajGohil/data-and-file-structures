#include<stdio.h>
#include<stdlib.h>
struct node
{
	int value;
	struct node*ptr;
	
};

struct node * insertatfront(struct node*h,int val)
{
	struct node * newnode;
	newnode=(struct node *) malloc (sizeof(struct node));
	newnode->value=val;
		newnode->ptr=h;
		h=newnode;
	return h;
	
}

struct node * insertatend(struct node*h,int val)
{
	struct node * newnode;
	struct node * temp;
	newnode=(struct node *) malloc (sizeof(struct node));
	temp=h;
	newnode->value=val;
	while(temp->ptr!=NULL)
	{
		temp=temp->ptr;
	}
	temp->ptr=newnode;
	newnode->ptr=NULL;
	return h;
}

struct node * insertatspos(struct node*h,int val)
{
	struct node * newnode;
	struct node * temp;
	int v;
	newnode=(struct node *)malloc(sizeof(struct node));
	temp=h;
	newnode->value=val;
	printf("Enter he value after which you want to enter the value :");
	scanf("%d",&v);
	while(temp->value!=v)
	{	
		temp=temp->ptr;
	}
	if(temp->ptr==NULL)
	{
		printf("Value not found");
		return h;
		
	}
	newnode->ptr=temp->ptr;
	temp->ptr=newnode;
	return h;
}
struct node * display(struct node*h)
{
	struct node * temp;
	temp=h;
	printf("HEAD--->");
	while(temp!=NULL)
	{	printf("%d--->",temp->value);
		temp=temp->ptr;
	}
	printf("--->NULL\n");
	
}

struct node * deletefromfront(struct node*h)
{	struct node * nodetobedeleted;
	if (h==NULL)
	{
		printf("List is empty");
		return h;
	}
	nodetobedeleted=h;
	h=h->ptr;
	free(nodetobedeleted);
	return h;
}
struct node * deletefromend(struct node*h)
{
	struct node * nodetobedeleted;
	struct node * temp;
	temp=h;
	while((temp->ptr)->ptr!=NULL)
	{
		temp=temp->ptr;
	}
	nodetobedeleted=temp->ptr;
	temp->ptr=NULL;
	free(nodetobedeleted);
	return h;
}
struct node * deleteatpos(struct node*h,int val)
{	struct node * nodetobedeleted;
	struct node * temp;
	temp=h;
	while(temp->ptr!=NULL && (temp->ptr)->value!=val)
	{
		temp=temp->ptr;
	}
	if(temp->ptr==NULL)
	{
		printf("Value not found");
		return h;
		
	}
	else
	{
		nodetobedeleted=temp->ptr;
		temp->ptr=(temp->ptr)->ptr;
		free(nodetobedeleted);
	}
	return h;
}

struct node * reverse(struct node * cur)
{
	struct node * prev=NULL, *nextnode=NULL;
	while(cur!=NULL)
	{
		nextnode=cur->ptr;
		cur->ptr=prev;
		prev=cur;
		cur=nextnode;
	}
	return prev;
}

int main()
{
	struct node*H;
	int val;
	H=NULL;
	int choice;
    	while (choice!=9)
    {
        printf("1.Insert element at front\n");
        printf("2.Insert element at end\n");
        printf("3.Insert element at specific position \n");
        printf("4.Display \n");
        printf("5.Delete from front \n");
        printf("6.Delete from end\n");
        printf("7.Delete from specific position\n");
        printf("8.Reverse \n");
        printf("9.Exit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            	printf("Enter your Value : ");
        	scanf("%d", &val);
                H=insertatfront(H,val);
                break;
            case 2:
            	printf("Enter your Value : ");
        	scanf("%d", &val);
                H=insertatend(H,val);
                break;
            case 3:
            	printf("Enter your Value : ");
        	scanf("%d", &val);
                H=insertatspos(H,val);
                break;
            case 4:
            	display(H);
                break;
            case 5:
                H=deletefromfront(H);
                break;
            case 6:
                H=deletefromend(H);
                break;
            case 7:
        
            	printf("Enter the value to be deleted : ");
        	scanf("%d", &val);
                H=deleteatpos(H,val);
                break;
            case 8:

              	H=reverse(H);
                break;
            case 9:
            	break;
            
            default:
                printf("Wrong choice \n");
        }
    } 
}
