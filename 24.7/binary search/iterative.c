#include <stdio.h>
int iterativeBsearch(int A[], int size, int element) {
   int start = 0;
   int end = size-1;
   while(start<=end) {
      int mid = (start+end)/2;
      if( A[mid] == element) {
         return mid;
      } else if( element < A[mid] ) {
         end = mid-1;
      } else {
         start = mid+1;
      }
   }
   return -1;
}
int main()
{
   int a[1000],x,n;
   printf("Enter size:\n");
   scanf("%d",&n);
   printf("Enter element into array:\n");
   for(int i=0;i<n;i++)
  {
       scanf("%d",&a[i]);
       
   }
   
   //int A[] = {0,12,6,12,12,18,34,45,55,99};
   printf("enter element to be search:\n");
   scanf("%d",&x);
   printf("%d is found at Index %d \n",x,iterativeBsearch(a,n,x));
   return 0;
}
