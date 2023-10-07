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
    do{
        printf("%d \n",ptr->data);
        ptr=ptr->next;
    }while(ptr!=head);
    
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
    //head=ptr;
    return ptr;
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

    return 0;

}