#include <stdio.h>

int main()
{
    int a[100], n, i,sum;

   printf("Enter array size [1-100]: ");
   scanf("%d",&n);
   printf("Enter %d elements: ",n);

   for(i=0; i<n; i++)
   {
     scanf("%d",&a[i]);
   }
   printf("enter sum");
   scanf("%d",&sum);
   
   for(i=0;i<(n-2);i++)
   {
      for (int j=i+1;j<(n-1);j++) { 
        for (int k=(j+1);k<n; k++) { 
            if (a[i]+a[j]+a[k]==sum) { 
                printf("Triplets are\n");
                printf("%d %d %d",a[i],a[j],a[k]);
                
            }
        }
      }
   }
   return 0;
}

