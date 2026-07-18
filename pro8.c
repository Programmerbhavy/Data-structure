/*
 wap to take inpute of 2 3*3 matrix (a&b). perform following operations
a display both metrix
b persorm a+b
c perform a-b
d perform a*b
e display a-transpose
*/

#include<stdio.h>
#include<conio.h>

int main()
{
 int a[3][3],b[3][3],add[3][3],i,j;


 printf("enter a element of a \n");
 for(i=0;i<3;i++)
 {
     for(j=0;j<3;j++){
      printf("element of a  %d %d : ",i, j);
      scanf("%d",&a[i][j]);
     }
 }

 printf("enter a element of b \n");
 for(i=0;i<3;i++)
 {
     for(j=0;j<3;j++)
     {
      printf("element of b %d %d : ",i ,j);
      scanf("%d",&b[i][j]);
     }

 }

// display matrix

printf("\nMatrix:\n");
    
 printf("element of a :-\n");    
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    
printf("element of b :-\n");    
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }


// operation 2



printf("addititon of 2 matrix\n");

   for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
             add[i][j] = a[i][j] + b[i][j] ;
            printf("%d\t", add[i][j]);
        }
        printf("\n");
    } 


// operation 3

printf("subtraction of 2 matrix\n");

   for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
             add[i][j] = a[i][j] - b[i][j];
            printf("%d\t", add[i][j]);
        }
        printf("\n");
    } 


// operation 4

printf("multipication of 2 matrix\n");

   for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
             add[i][j] = a[i][j] * b[i][j];
            printf("%d\t", add[i][j]);
        }
        printf("\n");
    }

    // operation 3

printf("transpose of a matrix\n");

   for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
             a[j][i];
            printf("%d\t", a[j][i]);
        }
        printf("\n");
    }
    return 0;

}