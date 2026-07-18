//WAP TO TAKE INPUT OF 10 NUMBERS AND DISPLAY NUMBERS.

#include <stdio.h>

int main() {
    int num[10];
    int i;
    
    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &num[i]);
    }
    
    printf("\nNumbers:\n");
    for (i = 0; i < 10; i++) {
        printf("%d\n", num[i]);
    }
    
    return 0;
}