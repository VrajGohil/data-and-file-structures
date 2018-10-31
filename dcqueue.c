#include <stdio.h>
#include<stdlib.h>

int rear = - 1;
int front = - 1;
int *queue_array;
int insert()
{
    int add_item;
    queue_array=(int *)malloc(sizeof(int));
    if (queue_array==NULL)
        printf("Malloc failed \n");
    else
    {
        if (front == - 1)
         
            front = 0;
        printf("Inset the element in queue : ");
        scanf("%d", &add_item);
        rear = rear + 1;
        queue_array[rear] = add_item;
    }
} 

int delete()
{
    if (front == - 1 || front > rear)
    {
        printf("Queue Empty!!! \n");
        return 0;
    }
    else
    {
        printf("Element deleted from queue is : %d\n", queue_array[front]);
        free(queue_array);
        front = front + 1;
        
    }
} 
int display() {
    int i;
    if (front == -1)
        printf("Queue is empty \n");
    else {
        printf("Queue is : \n");
        for (i = front; i <= rear; i++)
            printf("%d ", queue_array[i]);
        printf("\n");
    }
}
int main()
{
    int choice;
	
    while (choice!=4)
    {
        printf("1.Insert element to queue \n");
        printf("2.Delete element from queue \n");
        printf("3.Display all elements of queue \n");
        printf("4.Quit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                insert();
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            case 4:
                break;
            default:
                printf("Wrong choice \n");
        }
    } 
} 
