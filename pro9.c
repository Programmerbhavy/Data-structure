/*
 wap to take input of id array and display the address of each each.
(use %p to display add as format specifier) 
*/


#include <stdio.h>
#include<conio.h>

int main(void)
{
    int n;
    printf("Enter number of elements:\n ");
    
    int arr[5];
    if (n > 5)
    {
        n = 5;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Addresses of each element:\n");
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = %p\n", i, (void *)&arr[i]);
    }

    return 0;
}
