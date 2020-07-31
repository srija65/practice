#include <stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    scanf("%d",&i);
    int f=1;
    f=f<<i;
    int res=n&f;
    if(res==0){
    printf("False");
    }
    else{
        printf("true");    
        }
    
    return 0;
}

