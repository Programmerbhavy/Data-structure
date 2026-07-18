// wap in a c smallest and largest num find.

#include <stdio.h>

int main(void)
{
    int arr[10];
    int i;
    int smallest, largest;

    printf("Enter 10 digits:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    smallest = largest = arr[0];
    for (i = 1; i < 10; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    printf("Smallest number: %d\n", smallest);
    printf("Largest number: %d\n", largest);

    return 0;
    
}
