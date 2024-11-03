#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void linkedlisttraversal(struct node *head)
{
    struct node *ptr=head;
    while(ptr->next!=head)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
    printf("%d\n",ptr->data);
}

struct node*insertatfirst(struct node *head,int data)
{   struct node *ptr=(struct node*)malloc(sizeof(struct node));
    struct node *p=head;
    while(p->next!=head)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->data=data;
    ptr->next=head;
    return ptr;
}

struct node *insertatbetween(struct node *head,int data,int index)
{
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    struct node *p=head;
    int i=0;
    while(i!=index-1)
    {
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;    
}



int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *forth;

    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    forth=(struct node*)malloc(sizeof(struct node));
    
    
    head->data=11;
    head->next=second;
    second->data=22;
    second->next=third;
    third->data=33;
    third->next=forth;
    forth->data=44;
    forth->next=head;

    printf("Elements are: \n");
    linkedlisttraversal(head);

    printf("first node added: \n");
    head=insertatfirst(head,10);
    linkedlisttraversal(head);
    printf("node added at between: \n");
    head=insertatbetween(head,20,2);
    linkedlisttraversal(head);

}