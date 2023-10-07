#include<stdio.h>
#define size 50

void printarry(int *A,int n)
{
    int i;
    printf("Entered elemnts are : \n");

    for(i=0;i<n;i++)
    {
        printf("%d \n",A[i]);
    }

}

void sortedarry(int *A,int n)
{
    int i;
    printf("Sorted elemnts are : \n");

    for(i=0;i<n;i++)
    {
        printf("%d \n",A[i]);
    }

}

void bubblesort(int *A,int n)
{
    int i,j,isSorted=0,temp;

    for(i=0;i<n-1;i++)
    {
        isSorted=1;
        for(j=0;j<n-1;j++)
        {

            if(A[j]>A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
                isSorted=0;
            }
        }

        if(isSorted==1)
        {
            return;
        }
    }

}

int main()
{
    int i,num,A[size];

    printf("Enter the number of elements \n");
    scanf("%d",&num);
    printf("Enter the elements \n");

     for(i=0;i<num;i++)
     {
        scanf("%d",&A[i]);
     }

     printarry(A,num);
     bubblesort(A,num);
     sortedarry(A,num);

     return 0;
}