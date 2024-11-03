#include<stdio.h>
#include<stdlib.h>

struct queue
{
    int size;
    int front;
    int rear;
    int *arr;


};

int isempty(struct queue *ptr)
{
    if(ptr->rear==ptr->front)
    {
        return 1;
    
    }
    else
    {
        return 0;
    }

}

int isfull(struct queue *ptr)
{
    if((ptr->rear+1)%ptr->size==ptr->front)
    {
        return 1;
    
    }
    else
    {
        return 0;
    }
    
}

int enqueue(struct queue *ptr, int data)
{
    int value;

    if(isfull(ptr))
    {
        printf("The queue is overflow \n ");
    }
    else
    {
      ptr->rear=(ptr->rear+1)%ptr->size;
      value=ptr->arr[ptr->rear]=data;
    }

    return value;

}


int dequeue(struct queue *ptr)
{
 int value;
    if(isempty(ptr))
    {
        printf("The queue is underflow \n ");
    }
    else
    {
        ptr->front=(ptr->front+1)%ptr->size;
        value=ptr->arr[ptr->front];
    }

 return value;

}

int main()
{
    struct queue *q;
    q=(struct queue*)malloc(sizeof(struct queue));
    q->size=6;
    q->front=0;
    q->rear=0;
    q->arr=(int*)malloc(q->size*sizeof(int));

        //insert elements in Queue

    printf("Element inserted in the Queue : %d \n",enqueue(q,5));
    printf("Element inserted in the Queue : %d \n",enqueue(q,10));
    printf("Element inserted in the Queue : %d \n",enqueue(q,15));
    printf("Element inserted in the Queue : %d \n",enqueue(q,20));
    printf("Element inserted in the Queue : %d \n",enqueue(q,25));
    printf("\n");

    printf("Element remove from the Queue : %d \n", dequeue(q) );
    printf("Element remove from the Queue : %d \n", dequeue(q) );
    printf("Element remove from the Queue : %d \n", dequeue(q) );
    printf("Element remove from the Queue : %d \n", dequeue(q) );
    //printf("Element remove from the Queue : %d \n", dequeue(q) );
    //printf("Element remove from the Queue : %d \n", dequeue(q) );
    printf("\n");

     printf("Element inserted in the Queue : %d \n",enqueue(q,30));

    return 0;
}
