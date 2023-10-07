#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int size;
    int top;
    int *arry;
};

int isEmpty(struct stack *ptr)
{
    if(ptr->top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull(struct stack *ptr)
{
    if(ptr->top==ptr->size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int push(struct stack *ptr,int data)
{
    if(isFull(ptr))
    {
        printf("Stack Is Overflow \n");
        return -1;
    }
    else
    {
        int value;
        ptr->top++;
        ptr->arry[ptr->top]=data;
        value=ptr->arry[ptr->top];
        return value;
    }
}

int pop (struct stack *ptr)
{
    if(isEmpty(ptr))
    {
        printf("Stack Is Underflow \n");
        return -1;
    }

    else
    {
        int value;
        value=ptr->arry[ptr->top];
        ptr->top--;
        return value;
    }
}

int main()
{
    struct stack *s;
    s->size=3;
    s->top=-1;
    s->arry=(int*)malloc(s->size*sizeof(int));

    printf("Element inserted in the stack %d \n",push(s,5));
    printf("Element inserted in the stack %d \n",push(s,10));
    printf("Element inserted in the stack %d \n",push(s,15));

    printf("\n");

    printf("Element deleted from the stack %d \n",pop(s));
    printf("Element deleted from the stack %d \n",pop(s));

    return 0;

}

