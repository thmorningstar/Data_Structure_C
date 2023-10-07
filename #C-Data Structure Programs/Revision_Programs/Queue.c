#include<stdio.h>
#include<stdlib.h>

struct queue
{
    int size;
    int front;
    int rear;
    int *arry;
};


int isEmpty(struct queue *q)
{
    if(q->front==q->rear)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

int isFull(struct queue *q)
{
    if(q->rear==q->size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

int enqueue(struct queue *q,int data)
{
    if(isFull(q))
    {
        printf("Queue Is Overflow \n");
        return -1;
    }

    else
    {
        int value;
        q->rear++;
        value=q->arry[q->rear]=data;
        return value;

    }
}

int dequeue(struct queue *q)
{
    if(isEmpty(q))
    {
        printf("Queue Is Underflow \n");
        return -1;
    }

    else
    {
        int value;
        q->front++;
        value=q->arry[q->front];
        return value;

    }
}

int main()
{
    struct queue *Que;
    Que->size=3;
    Que->front=-1;
    Que->rear=-1;
    Que->arry=(int*) malloc(Que->size*sizeof(int));

    printf("Enqueue Element in the Queue is %d \n",enqueue(Que,5));
    printf("Enqueue Element in the Queue is %d \n",enqueue(Que,10));
    printf("Enqueue Element in the Queue is %d \n",enqueue(Que,15));

    printf("\n");

    printf("Dequeue Element from the Queue is %d \n",dequeue(Que));
    printf("Dequeue Element from the Queue is %d \n",dequeue(Que));
    printf("Dequeue Element from the Queue is %d \n",dequeue(Que));
    printf("Dequeue Element from the Queue is %d \n",dequeue(Que));

    return 0;
}