#include <stdio.h>
void knapsack(int n,float wt[],float pt[],float capacity) {
   float x[20],tp=0;
   int i,j,u;
   u=capacity;
   for (i=0;i<n;i++)
      x[i]=0.0;
    for (i=0;i< n;i++) {
      if (wt[i]<=u)
        {
         x[i] = 1.0;
         tp = tp + pt[i];
         u = u - wt[i];
      }
      else{
          break;
      }
   }
 
   if(i<n)
      x[i]=u/wt[i];
    tp=tp+(x[i]*pt[i]);
    printf("\nThe result vector is:- ");
   for (i = 0; i < n; i++)
      printf("%f\t", x[i]);
 
   printf("\nMaximum profit is:- %f", tp);
 
}
 
int main()
{
  
   float weight[20],profit[20],capacity;
   int n,i,j;
   float ratio[20],temp;
 
   printf("\nEnter the no. of item: ");
   scanf("%d",&n);
 
   printf("\nEnter the weights and profits: ");
   for (i=0;i<n;i++) {
      scanf("%f %f",&weight[i],&profit[i]);
   }
 
   printf("\nEnter the capacity: ");
   scanf("%f",&capacity);
 
   for (i = 0; i < n; i++) {
      ratio[i] = profit[i] / weight[i];
   }
   for (i = 0; i < n; i++) {
      for (j = i + 1; j < n; j++) {
         if (ratio[i] < ratio[j]) {
            temp=ratio[j];
            ratio[j]=ratio[i];
            ratio[i]=temp;
 
            temp=weight[j];
            weight[j]=weight[i];
            weight[i]=temp;
 
            temp=profit[j];
            profit[j]=profit[i];
            profit[i]=temp;
         }
      }
   }
 
   knapsack(n,weight,profit,capacity);
   return(0);

 
}


