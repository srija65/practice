#include <stdio.h>
int main()
{
int a[100],n,pos;
printf("Enter the length[0-100]");
scanf("%d",&n);
printf("Enter elements in array : ");
for(int i=0; i<n; i++)
{
    scanf("%d", &a[i]);
}
printf("Enter the element position to delete : ");
scanf("%d", &pos);
if(pos<0||pos>n)
{
    printf("Position is out of size");
}
else{
    for(int i=pos-1;i<(n-1);i++)
    {
        a[i]=a[i+1];
    }
    n--;
}
for(int i=0; i<n; i++)
{
    printf("%d", a[i]);
}
return 0;
}


