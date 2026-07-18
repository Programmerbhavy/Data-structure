#include <stdio.h>
#include <conio.h>
{
    int arr[10];
    int value;
    int i, position = -1;

    printf("Enter 10 elements:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter value to search: ");
    scanf("%d", &value);

    for (i = 0; i < 10; i++)
    {
        if (arr[i] == value)
        {
            position = i + 1;
            break;
        }
    }

    if (position != -1)
    {
        printf("Value %d found at position %d.\n", value, position);
    }
    else
    {
        printf("Error: value %d not available in the list.\n", value);
    }

    return 0;
};
