
#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isempty(struct stack *ptr)
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
int isfull(struct stack *ptr)
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
    if(isfull(ptr))
    {
        printf("Stack is Overflow \n");
        return -1;
    }
    else
    {
        int value;
        ptr->top++;
        value=ptr->arr[ptr->top]=data;
        return value;
    } 
}
    int pop(struct stack *ptr)
     {
         if(isempty(ptr))
        {
             printf("Stack Underflow \n");
             return -1;
        }
         else
        {
                int value=ptr->arr[ptr->top];
                ptr->top--;
                return value;

        }
     }

    int peek(struct stack*ptr,int i)
    {
        int arryindx=ptr->top-i+1;
        if(arryindx < 0)
        {
            printf("Not a valid position in stack \n");
            return -1;
        }
        else
        {
            return ptr->arr[arryindx];
        }
    }

    int top(struct stack *ptr)
    {
       return ptr->arr[ptr->top];
    }

    int bottom(struct stack *ptr)
    {
        return ptr->arr[0];

    }

    int main()
{
    struct stack *s;
    s= (struct stack *) malloc(sizeof(struct stack));
    s->size=6;
    s->top=-1;
    s->arr=(int*)malloc(s->size*sizeof(int));

    printf("Element inserted in the Stack :%d \n",push(s,5));
    printf("Element inserted in the Stack :%d \n",push(s,10));
    printf("Element inserted in the Stack :%d \n",push(s,15));
    printf("Element inserted in the Stack :%d \n",push(s,20));
    printf("Element inserted in the Stack :%d \n",push(s,25));
    printf("Element inserted in the Stack :%d \n",push(s,30));
    
    printf("\n");

    //printing the value of the stack
    
      for(int j = 1; j <= s -> top+1; j++)
       {
         printf("The value at position %d is %d \n",j,peek(s,j));
       }

       printf("\n");

       //printing the top and bottom elements of stack

       printf("The top element of this stack : %d \n", top(s) );
       printf("The bottom element of this stack : %d \n",bottom(s));

       printf("\n");

    printf("Popped %d from the stack \n",pop(s));
    printf("Popped %d from the stack \n",pop(s));
    printf("Popped %d from the stack \n",pop(s));
    printf("Popped %d from the stack \n",pop(s));
    printf("Popped %d from the stack \n",pop(s));
    printf("Popped %d from the stack \n",pop(s));

    printf("Popped %d from the stack",pop(s));
    
    //printf("\n");

    
    return 0;

}