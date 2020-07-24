#include <stdio.h>
int power(int a,int b);
int main()
{
    int a,b;
    printf("enter base\n");
    scanf("%d",&a);
    printf("enter exponent");
    scanf("%d",&b);
    printf("the answer is %d",power(a,b));
    

    return 0;
}
int power(int a,int b){
    if(b==0)
    {
        return 1;
    }
    else if(b%2==0)
    {
        return power(a,b/2)*power(a,b/2);
        
    }
    else
    {
        return a*power(a,b/2)*power(a,b/2);
    }
}

