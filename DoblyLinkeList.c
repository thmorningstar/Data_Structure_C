#include <stdio.h>
#include <stdlib.h>
int data;
int size = 0;
struct node
{
    struct node *left;
    int input;
    struct node *right;
};

struct node *first;
struct node *temp;

void node_Creation(int data_from_main);
void linked_list_Traversal(struct node *head);
void no_of_nodes_in_LL(struct node *head);
void searching_data_in_LL(struct node *head);
void modify_data_in_LL(struct node *head);
void linked_list_array(struct node *head, int *arr, int size);

struct node *at_first(struct node *head);
struct node *at_end(struct node *head);
struct node *at_given_index(struct node *head);
int main()
{
    int arr[size];
    int times;
    printf("Enter number of nodes: ");
    scanf("%d", &times);
    node_Creation(times);
    while (1)
    {

        int choice;
        printf("\n\n\t\t\t\tLinked List\n");
        printf("\t\t\tPress '1' too add data at begaining: \n");
        printf("\t\t\tPress '2' too add data at end: \n");
        printf("\t\t\tPress '3' too add data at index: \n");
        printf("\t\t\tPress '4' too determine size of linked-list: \n");
        printf("\t\t\tPress '5' too Traverse linked-list: \n");
        printf("\t\t\tPress '6' for search data in Linked-listL: \n");
        printf("\t\t\tPress '7' too replace old entity with new entity in LL: \n");
        printf("\t\t\tPress '8' too short your Linfked-list in ascending order: \n");
        printf("\t\t\tPress '0' too exit from running program: \n");

        printf("Please! Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 0:
            exit(0);
            break;
        case 1:
            first = at_first(first);
            break;

        case 2:
            first = at_end(first);
            break;

        case 3:
            first = at_given_index(first);
            break;

        case 4:
            no_of_nodes_in_LL(first);
            break;
        case 5:
            linked_list_Traversal(first);
            break;
        case 6:
            searching_data_in_LL(first);
            break;
        case 7:
            modify_data_in_LL(first);
            break;
        case 8:
            linked_list_array(first, arr, size);
            break;

        default:
            printf("Wrong choice!!!\n");
            break;
        }
    }

    return 0;
}

// Creation of nodes
void node_Creation(int data_from_main)
{
    first = (struct node *)malloc(sizeof(struct node));
    printf("Enter your 1 data: ");
    scanf("%d", &first->input);
    first->left = NULL;
    first->right = NULL;
    temp = first;

    for (int i = 2; i <= data_from_main; i++)
    {

        struct node *secand = (struct node *)malloc(sizeof(struct node));
        // struct node *secand = (struct node *)malloc(sizeof(struct node));
        printf("Enter your %d data: ", i);
        scanf("%d", &secand->input);
        secand->left = temp;
        secand->right = NULL;
        temp->right = secand;
        temp = temp->right;
    }
}

// Linked list traversal
void linked_list_Traversal(struct node *head)
{
    struct node *mover;
    mover = head;
    while (mover != NULL)
    {
        printf("%d ", mover->input);
        mover = mover->right;
    }
    printf("\n");
}

// addition on first index
struct node *at_first(struct node *head)
{
    struct node *adder = (struct node *)malloc(sizeof(struct node));
    printf("\t\tPlease! Enter your data too add at first index: ");
    scanf("%d", &adder->input);
    adder->right = first;
    adder->left = NULL;
    head = adder;
    printf("\t\tYour data is added...\n");
    return head;
}

// addition at end
struct node *at_end(struct node *head)
{
    struct node *mover;
    struct node *adder = (struct node *)malloc(sizeof(struct node));
    printf("\t\tPlease! Enter your data too add at last index: ");
    scanf("%d", &adder->input);
    mover = head;
    while (mover->right != NULL)
    {
        mover = mover->right;
    }
    mover->right = adder;
    adder->left = mover;
    adder->right = NULL;
    printf("\t\tYour data is added...\n");
    return head;
}

// addition at given index
struct node *at_given_index(struct node *head)
{
    int index;
    printf("\t\tPlease! Enter your index where you add your data: ");
    scanf("%d", &index);
    struct node *mover;
    mover = head;
    int i = 1;
    while (i != index - 1)
    {
        mover = mover->right;
        i++;
    }
    struct node *adder = (struct node *)malloc(sizeof(struct node));
    printf("\t\t\t\t\t Enter your data too add: ");
    scanf("%d", &adder->input);
    adder->right = mover->right;
    mover->right = adder;
    adder->left = mover;
    printf("\t\tYour data is added...\n");
    return head;
}

// Determine number of nodes in Linked list
void no_of_nodes_in_LL(struct node *head)
{
    struct node *mover;
    mover = head;
    int data = 0;
    while (mover != NULL)
    {
        mover = mover->right;
        data++;
    }
    size = data;
    printf("Your Llinked list size is %d", data);
    printf("\n");
}

// Searching of input data
void searching_data_in_LL(struct node *head)
{
    // struct node *head;
    int data, i = 0, res;
    // head = first;
    if (head == NULL)
    {
        printf("\nEmpty List\n");
    }
    else
    {
        printf("\nEnter data which you want to search?\n");
        scanf("%d", &data);
        while (head != NULL)
        {
            if (head->input == data)
            {
                printf("\ndata found at location %d ", i + 1);
                res = 0;
                break;
            }
            else
            {
                res = 1;
            }
            i++;
            head = head->right;
        }
        if (res == 1)
        {
            printf("\ndata not found\n");
        }
    }
}

// Modification of input data

void modify_data_in_LL(struct node *head)
{
    // struct node *head;
    int data, i = 0, res;
    int change_data;
    // head = first;
    if (head == NULL)
    {
        printf("\nEmpty List\n");
    }
    else
    {
        printf("\nEnter data which you want to search?\n");
        scanf("%d", &data);
        while (head != NULL)
        {
            if (head->input == data)
            {
                printf("\ndata found at location %d ", i + 1);
                res = 0;
                printf("\nEnter new data at the place of changed data: ");
                scanf("%d", &change_data);
                head->input = change_data;
                printf("DATA MODIFIED....\n");
                break;
            }
            else
            {
                res = 1;
            }
            i++;
            head = head->right;
        }
        if (res == 1)
        {
            printf("\ndata not found\n");
        }
    }
}
// Stores Linked list data on an array
void linked_list_array(struct node *head, int *arr, int size)
{
    int temp;
    int i = 0;
    head = first;
    while (head != NULL && i < size)
    {
        arr[i] = head->input;
        head = head->right;
        i++;
    }
    // Linked list before shorting
    printf("Linked list before shorting: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    // Linked list after shorting
    printf("\n\nLinked list after shorting: \n");
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
