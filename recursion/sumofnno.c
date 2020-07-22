#include <stdio.h>
int sum(int n);
int main()
{
    int n;
    printf("Enter the no:\n");
    scanf("%d",&n);
    printf("Sum of the nos:%d",sum(n));

    return 0;
}
int sum(int n)
{
    if(n==1){
        return 1;
    }
    return n+sum(n-1);
}

