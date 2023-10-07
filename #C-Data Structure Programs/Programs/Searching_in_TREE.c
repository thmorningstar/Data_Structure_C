#include<stdio.h>
#include<malloc.h>

int ser;

struct node
{
    int data;
    struct node *right;
    struct node *left;
};

struct node*creatingNode(int data)
{
    struct node *n;
    n=(struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->right=NULL;
    n->left=NULL;
    return n;
}

void preorder(struct node *root)
{
    if(root!=NULL)
    {
        printf("%d  ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct node *root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d  ",root->data);


    }
}

void inorder(struct node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d  ",root->data);
        inorder(root->right);


    }
}

struct node *search(struct node*root,int data)
{
    if(root==NULL)
    {
        return NULL;
    }
        if(data == root->data)
        {
            return root;
        }
        else if(data < root->data)
        {
            return search(root->left,data);
        }
        
        else
        {
            return search(root->right,data);
        }
    
}


int main()
{
    struct node *p;
    struct node *p1;
    struct node *p2;
    struct node *p3;
    struct node *p4;

    //contructing the node

    // p=(struct node*)malloc(sizeof(struct node));
    // p->right=NULL;
    // p->left=NULL;
    // p->data=5;

    
    // p2=(struct node*)malloc(sizeof(struct node));
    // p2->right=NULL;
    // p2->left=NULL;
    // p->data=10;


    // p3=(struct node*)malloc(sizeof(struct node));
    // p3->right=NULL;
    // p3->left=NULL;
    // p->data=15;

    p=creatingNode(5);
    p1=creatingNode(3);
    p2=creatingNode(6);
    p3=creatingNode(1);
    p4=creatingNode(4);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;


    preorder(p);

    printf("\n");

    postorder(p);

    printf("\n");

    inorder(p);

    printf("\n");

   printf("Enter the Number you want to search \n");
   scanf("%d",&ser);


  struct node* n=search(p,ser);

  if(n!=NULL)
  {
    printf("%d FOUND... \n",n->data);
  }

  else
  {
    printf("NOT FOUND");
  }


    return 0;
}