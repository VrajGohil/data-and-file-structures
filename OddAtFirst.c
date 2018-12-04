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
struct node * display(struct node*h)
{
    struct node * temp;
    temp=h;
    while(temp!=NULL)
    {	printf("%d ",temp->value);
        temp=temp->ptr;
    }
    printf("\n");

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
struct node * oddatfront(struct node*h)
{
    struct node * temp;
    int change;
    temp=h->ptr;
    while(temp!=NULL)
    {	change=temp->value;
        if(change%2!=0)
        {
            h=deleteatpos(h,change);
            h=insertatfront(h,change);
        }
        temp=temp->ptr;
    }
    return h;
}

int main()
{
    struct node*H;
    H=NULL;
    H=insertatfront(H,5);
    H=insertatfront(H,4);
    H=insertatfront(H,3);
    H=insertatfront(H,2);
    H=insertatfront(H,1);
    display(H);
    H=oddatfront(H);
    display(H);
}
