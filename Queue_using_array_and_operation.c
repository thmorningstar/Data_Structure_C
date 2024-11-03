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
    if(ptr->front==ptr->rear)
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
    if(ptr->rear==ptr->size-1)
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
    if(isfull(ptr))
    {
        printf("The queue is overflow \n ");
        return -1;
    }
    else
    {
      int value;
      ptr->rear++;
      value=ptr->arr[ptr->rear]=data;
      return value;

    }
}


int dequeue(struct queue *ptr)
{
    if(isempty(ptr))
    {
        printf("The queue is underflow \n ");
        return -1;
    }
    else
    {
        int value;
        ptr->front++;
        value=ptr->arr[ptr->front];
        return value;

    }
}

int peek(struct queue*ptr,int i)
    {
        int arryindx=ptr->rear-i+1;
        if(arryindx < 0)
        {
            printf("Not a valid position in Queue \n");
            return -1;
        }
        else
        {
            return ptr->arr[arryindx];
        }
    }

    int top(struct queue *ptr)
    {
       return ptr->arr[ptr->rear];
    }

    int bottom(struct queue *ptr)
    {
        return ptr->arr[0];

    }

int main()
{
    struct queue *q;
    q= (struct queue*)malloc(sizeof(struct queue));
    q->size=6;
    q->front=-1;
    q->rear=-1;
    q->arr= (int*)malloc(q->size*sizeof(int));
    //insert elements in Queue

    printf("Element inserted in the Queue : %d \n",enqueue(q,5));
    printf("Element inserted in the Queue : %d \n",enqueue(q,10));
    printf("Element inserted in the Queue : %d \n",enqueue(q,15));
    printf("Element inserted in the Queue : %d \n",enqueue(q,20));
    printf("Element inserted in the Queue : %d \n",enqueue(q,25));
    printf("Element inserted in the Queue : %d \n",enqueue(q,30));

    printf("\n");

    //printing the value of the queue
    
      for(int j = 1; j <= q -> rear+1; j++)
       {
         printf("The value at position %d is %d \n",j,peek(q,j));
       }

           printf("\n");

    //printing the top and bottom elements of stack

       printf("The top element of this queue : %d \n", top(q) );
       printf("The bottom element of this queue : %d \n",bottom(q));
       
       printf("\n");

    //remove elements from the Queue

    printf("Element remove from the Queue : %d \n", dequeue(q) );
    printf("Element remove from the Queue : %d \n", dequeue(q) );
    printf("Element remove from the Queue : %d \n", dequeue(q) );
    printf("Element remove from the Queue : %d \n", dequeue(q) );
    printf("Element remove from the Queue : %d \n", dequeue(q) );
    printf("Element remove from the Queue : %d \n", dequeue(q) );

//    printf("Element inserted in the Queue : %d \n",enqueue(q,35));
    printf("Element inserted in the Queue : %d \n",enqueue(q,35));

    return 0;
}