
#include <stdio.h>

int main()
 {
    // Create a static array with 10 elements

     int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
   
    printf("Array Elements:\n");

    for (int i = 0; i < 10; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    
    
    return 0;
}