// wap to take input of 3*3 matrix and display data in matrix form

#include<conio.h>
#include<stdio.h>

int main()
{
    int m[3][3], i, j;
    
    printf("Enter the 9 elements :\n");
    

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }
    
    printf("\nMatrix:\n");
    
    
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

