// wap to create two array with 5 element (a and b). performe following operations and display data
/*
 a= add
b= subtract
c= multi
d= merge
*/

#include<stdio.h>

int main()
{
  int a[5],b[5],c[5];
  int i;


for(int i=0;i<5;i++)
{
    printf("enter a value of A %d =",i+1);
    scanf("%d",&a[i]); 
}

for(int i=0;i<5;i++)
{
    printf("enter a value of b %d =",i+1);
    scanf("%d",&b[i]); 
}

printf("ADD\n");
for(int i=0;i<5;i++)
{
c[i] = a[i] + b[i];
printf("%d + %d = %d\n",a[i],b[i],c[i]);
}

printf("sub\n");
for(int i=0;i<5;i++)
{
c[i] = a[i] - b[i];
printf("%d - %d = %d\n",a[i],b[i],c[i]);
}

printf("multi\n");
for(int i=0;i<5;i++)
{
c[i] = a[i] * b[i];
printf("%d * %d = %d\n",a[i],b[i],c[i]);
}

printf("merge\n");
for(int i=0;i<5;i++)
{
c[i] = a[i];
printf("%d",c[i]);
}
for(int i=0;i<5;i++)
{
c[i+5] = b[i];
printf("%d",c[i+1]);
}
return 0;
}