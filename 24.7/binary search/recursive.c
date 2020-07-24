#include <stdio.h>

int Recbs(int A[],int start,int end,int ele) {
   if(start>end){
       return -1;
   }
    int mid=(start+end)/2;
    if( A[mid]==ele) 
        return mid;
    else if(ele<A[mid])
        return Recbs(A,start,mid-1,ele);
    else
        return Recbs(A,mid+1,end,ele);
}

int main() {
  int a[1000],x,n;
   printf("Enter size:\n");
   scanf("%d",&n);
   printf("Enter element into array:\n");
   for(int i=0;i<n;i++)
  {
       scanf("%d",&a[i]);
       
   }
   /*int x;
   int A[] = {0,12,6,12,12,18,34,45,55,99};*/
   printf("enter element to be search:\n");
   scanf("%d",&x);
   printf("%d is found at Index %d \n",x,Recbs(a,0,n,x));
   return 0;
}


