#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void linkedlistTraversal(struct node *ptr)
{
    while(ptr!=NULL)
    {
        printf("Element: %d \n",ptr->data);
        ptr=ptr->next;
    }
}

struct node*insertatfirst(int data, struct node *Head)
{
    struct node *ptr=(struct node*) malloc(sizeof(struct node));

    ptr->next=Head;
    ptr->data=data;

    Head=ptr;

    return Head;

}

struct node* insertatbetween(int data,struct node*Head,int index)
{
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    struct node *p= Head;

    int i=0;
    while(i!=index-1)
    {
        p=p->next;
        i++;
    }

    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;

    return Head;



}


int main()
{
    struct node *Head=(struct node*)malloc(sizeof(struct node));
    struct node *Second=(struct node*)malloc(sizeof(struct node));
    struct node *Third=(struct node*)malloc(sizeof(struct node));

    Head->data=10;
    Head->next=Second;

    Second->data=20;
    Second->next=Third;

    Third->data=30;
    Third->next=NULL;

    linkedlistTraversal(Head);
    printf("Insert Node at first \n");
    Head=insertatfirst(5,Head);
    linkedlistTraversal(Head);

    printf("Insert at index No 2 \n");
    insertatbetween(0,Head,2);
    linkedlistTraversal(Head);

    return 0;
}