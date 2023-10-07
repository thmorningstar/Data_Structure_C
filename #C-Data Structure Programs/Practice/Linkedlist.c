#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct Node
{
    int info;
    struct Node *next;
};
struct Node *head;



struct Node* addAtbeg(struct Node *start,int data)
{
    struct Node *ptr;
    ptr=(struct Node*) malloc(sizeof(struct Node));
    ptr->info=data;
    ptr->next=start;
    start=ptr;
    return start;
}

struct Node* addAtend(struct Node* start,int data)
{
    struct Node *p, *ptr;
    ptr=(struct Node*) malloc(sizeof(struct Node*));
    ptr->info=data;
    p=start;

    while(p->next!=NULL)
    {
        p=p->next;
    }
        p->next=ptr;
        ptr->next=NULL;
        return start;
    
}


struct Node* linkedlistCreation(struct Node* start)
{
    int data,n;
    printf("Enter the number of nodes:");
    scanf("%d",&n);

    start= NULL;

    if(n == 0)
    {
        return start;
    }
    else
    {
        printf("Enter the 1st element to be inserted :");
        scanf("%d",&data);
        start = addAtbeg(start, data);
    
        for(int i=2; i<=n; i++)
        {
            printf("Enter the %dnd elements to be inserted :",i);
            scanf("%d",&data);
            start= addAtend(start,data);
        }
         return start;
        
    }
}
void display(struct Node *start)
{
    struct Node *ptr;
    if(start == NULL)
    {
        printf("list is Empty");
        return;
    }
    else
    {
        ptr=start;
        printf("List is : \n");
        while(ptr != NULL)
        {
            printf("%d \n",ptr->info);
            ptr=ptr->next;
        }
    }

    printf("\n");
    
}


int main()
{
    int choice;
    int data;

    struct Node *start=NULL;
    
    printf("Press 1 to create linkedlist \n");
    printf("Press 2 to traverse linkedlist \n");
    printf("Press 3 to add data at begining \n");
    printf("Press 4 to add data at last \n");

    while(1)
    {
        printf("Enter your choice:");
        scanf("%d",&choice);

        if(choice == 1)
        {
            start=linkedlistCreation(start);
            getch();
        }
        else if(choice == 2)
        {
            display(start);
            getch();
        }

        else if(choice == 3)
        {
            printf("Enter the element to be inserted ");
            scanf("%d",&data);
            start = addAtbeg(start,data);
            getch();
        }

        else if(choice == 4)
        {
            printf("Enter the element to be inserted ");
            scanf("%d",&data);
            addAtend(start,data);
            getch();
        }
        else
        {
            return -1;
        }

    }

    return 0;
}