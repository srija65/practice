#include <stdio.h>
int main()
{
int a[100],n,e,count=0;
printf("Enter the length[0-100]");
scanf("%d",&n);
printf("Enter elements in array : ");
for(int i=0; i<n; i++)
{
    scanf("%d", &a[i]);
}
printf("Enter the element to delete : ");
scanf("%d", &e);
for(int i=0;i<n;i++){
    if(a[i]==e){
        continue;
    }
    a[count]=a[i];
    count++;
}
printf("the no of element in the modified array is %d",count);


    return 0;
}
