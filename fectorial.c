#include<stdio.h>

int fact(int n)
{
    if(n==0 || n==1)
    return 1;
else
return n*fact (n-1);

}

int main()
{
    int n;
    printf("enter n :-");
    scanf("%d",&n);
    printf("\n factorial of %d =%d\n",n,fact(n));
    return 0;
}
