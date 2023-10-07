#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Queue
{
    int size;
    int front;
    int rear;
    int *array;
};


    int isEmpty(struct Queue *ptr);
    int isFull(struct Queue *ptr);
    void enqueue(struct Queue *ptr);
    void dequeue(struct Queue *ptr);
    void display(struct Queue *ptr);

int isEmpty(struct Queue *ptr)
{
    if(ptr->front == ptr->rear)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct Queue *ptr)
{
    if(ptr->rear == ptr->size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void enqueue(struct Queue *ptr)
{
    int data;
    if(isFull(ptr))
    {
        printf("Queue Overflow \n");
    }
    else
    {
        printf("\n Enter the data you want to enqueue in the Queue:");
        scanf("%d",&data);
        int value;
        ptr->rear++;
        value= ptr->array[ptr->rear]=data;

        printf(" Entered data %d is enqueued in the Queue \n",value);

    }
    
}
void dequeue(struct Queue *ptr)
{
    if(isEmpty(ptr))
    {
        printf("Queue Underflow \n");
    }
    else
    {
        int value;
        ptr->front++;
        value= ptr->array[ptr->front];
        
        printf("\n Element %d is dequeued from the Queue \n",value);

    }
    
}


void display(struct Queue *ptr)
{
        for(int i=1; i<=ptr->rear+1; i++)
    {
        int arrayindex=ptr->rear-i+1;
        if(arrayindex < 0)
        {
            printf("Not a valid position in Queue \n");
        }
        else
        {
            ptr->array[arrayindex];
            printf("The value at position %d is %d \n",i,ptr->array[arrayindex]);
        }
    }

}


int main()
{

    struct Queue *Q;
    Q=(struct Queue*)malloc(sizeof(struct Queue));
    Q->size=5;
    Q->front=-1;
    Q->rear=-1;
    Q->array=(int*) malloc(Q->size*sizeof(int));


    char ch;

    printf("\n Press 1 to enqueue the element in the Queue");
    printf("\n Press 2 to dequeue the element in the Queue");
    printf("\n Press 3 to display the elements of Queue");

    while(1)
    {
        printf("\n Enter the choice:");
        ch=getch();

        if(ch == '1')
        {
            enqueue(Q);
            getch();
        }
        else if(ch == '2')
        {
            dequeue(Q);
            getch();
        }
        else if(ch== '3')
        {
            display(Q);
            getch();
        }
        else
        {
            return -1;
        }
        
    }

    return 0;

}