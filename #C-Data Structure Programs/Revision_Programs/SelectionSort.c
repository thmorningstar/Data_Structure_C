#include<stdio.h>
#define size 50

void printarry(int *A,int n)
{
    int i;
    printf("Entered elements are : \n");

    for(i=0;i<n;i++)
    {
        printf("%d\n",A[i]);
    }
}

void sortedarry(int *A,int n)
{
    int i;
    printf("Sorted Elements : \n");
     for(i=0;i<n;i++)
     {
        printf("%d \n",A[i]);
     }

}

void selectionsort(int *A,int n)
{
    int i,j,temp;
    int indexofmin;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            indexofmin=i;
            if(A[indexofmin]>A[j])
            {
                temp=A[indexofmin];
                A[indexofmin]=A[j];
                A[j]=temp;
            }
        }
    }
}

int main()
{
    int i,A[size],num;

    printf("Enter the number of Elements \n");
    scanf("%d",&num);

    printf("Enter the Elements \n");

    for(i=0;i<num;i++)
    {
        scanf("%d\n",&A[i]);
    }

    printarry(A,num);
    selectionsort(A,num);
    sortedarry(A,num);

    return 0;

}