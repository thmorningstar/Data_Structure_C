#include <stdio.h>
#include <stdlib.h>
struct node
{
    int input;
    struct node *right;
};

struct node *head;
//struct node *add_at_end(struct node *head);
void traversal(struct node *head);
void at_end(struct node *head);
int main()
{

    head = (struct node *)malloc(sizeof(struct node));
    struct node *secand = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));

    head->input = 5;
    secand->input = 10;
    third->input = 15;
    fourth->input = 20;

    head->right = secand;
    secand->right = third;
    third->right = fourth;
    fourth->right = head;
    traversal(head);
    at_end(head);
    printf("\n");
    traversal(head);
    return 0;
}
void traversal(struct node *head)
{
    struct node *mover = head;
    do
    {
        printf("%4d", mover->input);
        mover = mover->right;
    } while (mover != head);
}
void at_end(struct node *head)
{
    struct node *adder = (struct node *)malloc(sizeof(struct node));
    printf("\n\t\tEnter data for last node: ");
    scanf("%d", &adder->input);
    struct node *mover = head;
    while (mover->right != head)
    {
        mover = mover->right;
    }
    mover->right = adder;
    adder->right =head;
    // head = adder;
}

