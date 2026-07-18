#include<stdio.h>
void hanoi(int n,char f,char t,char aux)
{
    if(n==1)
    {
        printf("move disk 1 from %c\n",f,t);
        return;
    }
    hanoi(n-1,f,aux,t);
    printf("move disk %d from %c to %c \n",n,f,t);
    hanoi(n-1,aux,t,f);

}

int main()
{
    int n;
    printf("enter a number of disk :-");
    scanf("%d",&n);
    hanoi(n,'a','c','b');
    return 0;
}