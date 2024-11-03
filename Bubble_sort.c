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

    void bubbleSort(int *A,int n)
    {
        int i,j,temp;
        int isSorted=0;
        for(i=0;i<n-1;i++)
        {
            printf("Working on pass number %d \n",i+1);
            isSorted=1;
            for(j=0;j<n-1-i;j++)
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
    int A[50];

    int i,num;

    printf("Enter the no of element you want:\n");
    scanf("%d",&num);

        printf("Enter the numbers: \n");

        for (i = 0; i < num ; i++)
        {
            scanf("%d",&A[i]);
        }



    printArray(A,num);
    bubbleSort(A,num);
    AfterSortprintArray(A,num);

    return 0;
}