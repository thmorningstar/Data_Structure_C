
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

    int main()
{
    struct stack *s;
    s=(struct stack*) malloc(sizeof(struct stack));
    s->size=6;
    s->top=-1;
    s->arr=(int*)malloc(s->size*sizeof(int));

    //Pushing an element
    s->arr[0]=2;
    s->top++;
    s->arr[1]=4;
    s->top++;
    s->arr[2]=6;
    s->top++;
    s->arr[3]=8;
    s->top++;
    s->arr[4]=10;
    s->top++;
    s->arr[5]=12;
    s->top++;


    //check the stack is empty or not

    if(isempty(s))
    {
        printf("The stack is empty \n");
    }
        else
        {
            printf("The stack is not empty \n");
        }
    
    return 0;

}