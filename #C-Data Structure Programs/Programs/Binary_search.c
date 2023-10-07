#include<stdio.h>
#define size 5

int data[size];

void printArray()
{
    printf("Entered the %d numbers: \n",size);
    for(int i=0;i<size;i++)
    {
        printf("Enter %d number \n",i+1);
        scanf("%d",&data[i]);
    }
}

void printSortedArray()
{
    printf("Sorted numbers: \n");
    for(int i=0;i<size;i++)
    {
        printf("%d\t",data[i]);
        printf("\n");
    }
}


void sorting()
{
    int temp,i,j,indexofmin;
    for(i=0;i<size-1;i++)
    {
        indexofmin=i;
        for(j=i+1;j<size;j++)
        {
            if(data[indexofmin]>data[j])

            temp=data[indexofmin];
            data[indexofmin]=data[j];
            data[j]=temp;

        }
    }
}

void Binarysearch()
{
    int ser,found=0;
    int first=0,last=size-1,middle=(first+last)/2;

    printf("Entered the data for search \n");
    scanf("%d",&ser);

    while(first<=last)
    {
        if(data[middle]<ser)
        {
            first=middle+1;
            middle=(first+last)/2;
        }
       else if(data[middle]==ser)
        {
            found=1;
            break;
        }
        else
        {
            last=middle-1;
            middle=(first+last)/2;
        }

    }

    if(found==1)
    {
        printf("%d is present in the list \n",ser);
    }
    else
    {
        printf("%d is not present in the list \n",ser);
    }
    

}

int main()
{
   printArray();
   sorting();
   printSortedArray();
   Binarysearch();
   return 0;
}