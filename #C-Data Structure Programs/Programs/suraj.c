#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;

};
void linkedlisttraversal(struct node *ptr)
{
    while(ptr!=NULL)
    {
        printf("Elements: %d \n",ptr->data);
        ptr=ptr->next;
    }
}

struct node *insertatfirst(struct node *head,int data)
{   struct node *ptr=(struct node*)malloc(sizeof(struct node));
    ptr->next=head;
    ptr->data=data;
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

struct node *insertatend(struct node *head,int data)
{
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    struct node *p=head;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    ptr->data=data;
    p->next=ptr;
    ptr->next=NULL;
    
    return head;
}
struct node *insertafternode(struct node *head,struct node *prevnode,int data)
{   struct node *ptr=(struct node*)malloc(sizeof(struct node));
    ptr->next=prevnode->next;
    prevnode->next=ptr;
    ptr->data=data;
    return head;
}

struct node *deletethefirstnode(struct node*head)
{
    struct node*ptr=head;

    head=head->next;
    free(ptr);
    return head;
}

struct node *deletethenodeinbetween(struct node*head,int index)
{
    struct node *ptr=head;
    int i=0;
    while(i!=index-1)
    {
        ptr=ptr->next;
        i++;
    }
    struct node* q=ptr->next;
    ptr->next=q->next;
    free(q);
    return head;
}


int main()

{
    struct node*head;
    struct node*second;
    struct node*third;

    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    head->data=7;
    head->next=second;
    second->data=11;
    second->next=third;
    third->data=14;
    third->next=NULL;
    linkedlisttraversal(head);
    printf("Insert Node at FIRST \n");
    head=insertatfirst(head,57);
    linkedlisttraversal(head);
    printf("Insert Node at BETWEEN \n");
    head=insertatbetween(head,88,1);
    linkedlisttraversal(head);
    printf("Insert Node at END \n");
    head=insertatend(head,77);
    linkedlisttraversal(head);
    printf("Insert after a node \n");
    head=insertafternode(head,second,99);
    linkedlisttraversal(head);
    printf("DELETE first NODE \n");
    head=deletethefirstnode(head);
    linkedlisttraversal(head);
    printf("delete the node in between \n");
    head=deletethenodeinbetween(head,1);
    linkedlisttraversal(head);
}




