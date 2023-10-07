#include<stdio.h>

   void printArray(int *A,int n)
   // void printArray(int A[])
    {
        
        printf("Elements of the array before sorting: \n");

        for(int i=0;i<n;i++)
        {

            printf("%d\t",A[i]);
            printf("\n");
        }

     
    }

       void AfterSortprintArray(int *A,int n)
   // void printArray(int A[])
    {
        
        printf("Elements of the array after sorting: \n");

        for(int i=0;i<n;i++)
        {

            printf("%d\t",A[i]);
            printf("\n");
        }

     
    }

    void selectsort(int *A,int n)
    {
        int i,j,temp;
        int indexOfMin;
        
        printf("Running Selection sort... \n");

        for(i=0;i<n-1;i++)
        {
            indexOfMin=i;
        
         for(j=i+1;j<n;j++)
            {
                if(A[indexOfMin]>A[j])
                {
                    temp=A[indexOfMin];
                    A[indexOfMin]=A[j];
                    A[j]=temp;
                
                }
                
            }
        
        }

    }



int main()
{
    int A[50];

    int i,num;

    printf("Enter the no of elements you want:\n");
    scanf("%d",&num);

        printf("Enter the numbers: \n");

        for (i = 0; i < num ; i++)
        {
            scanf("%d",&A[i]);
        }



    printArray(A,num);
    selectsort(A,num);
    AfterSortprintArray(A,num);

    return 0;
}