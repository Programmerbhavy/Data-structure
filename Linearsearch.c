#include<stdio.h>

int main()
{
    int arr[100],n,key,i,found=0;

    printf("\n Enter number of array element :-");
    scanf("%d",&n);

    printf("Enter array element :-\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n Element to search ");
    scanf("%d",&key);

    for(i=0;i<n;i++)
    {
        if(arr[i] == key)
        {
            found =1;
            printf("\nElement found at position %d(index %d)\n",i+1,i);
            break;
        }
    }

   if(found==0)
    {
        printf("Element not found ");
    }
    return 0;
}