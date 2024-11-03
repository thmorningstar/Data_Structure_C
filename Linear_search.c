#include<stdio.h>
#define size 10 

int data[size];

   void printArray()
    {
        
        printf("Entered %d different numbers \n",size);

        for(int i=0;i<size;i++)
        {
            printf("Enter %d data: \n",i+1);
            scanf("%d",&data[i]);   
            
        }

     
    }


void LinearSearch()
{
    int num,found=0,i;

    printf("Enterd the data for search \n");
    scanf("%d",&num);
    for(i=0;i<size;i++)
    {
        if(data[i]==num)
        found=1;
        break;
    }

    if(found==1)
    {
        printf("Data Found \n");
    }
    else
    {
        printf("Data Not Found \n");
    }
    
}

int main()
{
    printArray();
    LinearSearch();
}