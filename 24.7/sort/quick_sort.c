#include <stdio.h>
void QS(int a[],int p,int r)
{
    if(p<r)
    {
        int q;
        q=partition(a,p,r);
        QS(a,p,q-1);
        QS(a,q+1,r);
    }
}
int partition(int a[],int p,int r)
{
    int pivot=a[r];
    int i=p-1;
    for(int j=p;j<=r-1;j++)
    {
        if(a[j]<=pivot)
        {
            i=i+1;
            int t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
    i=i+1;
    int t=a[i];
    a[i]=a[r];
    a[r]=t;
    return i;
}
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", arr[i]); 
     
} 
   
int main() 
{ 
    int arr[100],n,i; 
    printf("Enter size\n");
    scanf("%d",&n);
    printf("Enter Elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    QS(arr, 0, n-1); 
    printf("Sorted array: n"); 
    printArray(arr, n); 
    return 0; 
} 
        


