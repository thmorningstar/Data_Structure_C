#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Stack
{
    int size;
    int top;
    int *array;
};

int isEmpty(struct Stack *ptr)
{
    if(ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull(struct Stack *ptr)
{
    if(ptr->top == ptr->size -1)
    {
        return 1;
    }
    else
    {
        return 0;

    }
}

void push(struct Stack *ptr)
{
    int data;
    if(isFull(ptr))
    {
        printf("\n Stack is Overflow \n");
    }
    else
    {
        printf("\n Enter the data you want to insert in the Stack:");
        scanf("%d",&data);

        int value;
        ptr->top++;
        value=ptr->array[ptr->top]=data;

        printf(" Entered data %d is inserted in the stack\n",value);
    } 
}
void pop(struct Stack *ptr)
{
    if(isEmpty(ptr))
    {
        printf("Stack is underflow \n");
    }
    else
    {

        int value=ptr->array[ptr->top];
        ptr->top--;
        printf("\n Element %d is dequeued from the Queue \n",value);
    } 
}

    void display(struct Stack*ptr)
    {
        for(int i=1; i<=ptr->top+1; i++)
        {
            int arrayindex=ptr->top-i+1;
            if(arrayindex < 0)
            {
                printf("Not a valid position in stack \n");
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
    struct Stack*S;
    S=(struct Stack*) malloc(sizeof(struct Stack));
    S->size=3;
    S->top=-1;
    S->array=(int*)malloc(S->size*sizeof(int));

    int choice;

    printf("\n Press 1 to push the element in the Stack");
    printf("\n Press 2 to pop the element in the Stack");
    printf("\n Press 3 to display the elements of Stack");
    
    while(1)
    {
        printf("\n Enter the choice:");
        //ch=getch();
        scanf("%d",&choice);

        if(choice == 1)
        {
            push(S);
            getch();
        }
        // else if(ch == '2')
        // {
        //     pop(S);
        //     getch();
        // }
        // else if(ch== '3')
        // {
        //     display(S);
        //     getch();
        // }
        else
        {
            return -1;
        }
        
    }

    return 0;

}
